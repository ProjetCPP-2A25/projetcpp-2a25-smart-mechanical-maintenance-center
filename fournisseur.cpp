#include "fournisseur.h"
#include <QMessageBox>
#include <QObject>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include"sms.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QRegularExpression>
#include <QtCore>
#include <QtNetwork>
#include <QString>
#include <QMap>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QVBoxLayout>
#include <QPdfWriter>
#include <QPainter>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QFileDialog>
#include <QPageSize>
#include "mailer.h"
#include <QPixmap>






fournisseur::fournisseur(int ID, QString email, QString numtel, QString moyenT, QString typeP, int nbrN, QDate dateexp, QString catP)
{
    this->ID = ID;
    this->email = email;
    this->numtel = numtel;
    this->moyenT = moyenT;
    this->typeP = typeP;
    this->nbrN = nbrN;
    this->dateexp = dateexp;
    this->catP=catP;
    //this->dl = dl;
}


bool fournisseur:: ajouter()
{
    QSqlQuery query;
    QString res =QString::number(ID);
    QString nb =QString::number(nbrN);
    //QString dll =QString::number(dl);

    query.prepare("insert into fournisseur(ID,numtel,moyenT,email,typeP,nbrN,dateexp)" "values(:ID, :numtel, :moyenT, :email, :typeP, :nbrN, :dateexp)");

    query.bindValue(":ID",res);
    query.bindValue(":numtel",numtel);
    query.bindValue(":moyenT",moyenT);
    query.bindValue(":email",email);
    query.bindValue(":typeP",typeP);
    query.bindValue(":nbrN",nb);
    //query.bindValue(":dl",dll);
    query.bindValue(":dateexp",dateexp);

    qDebug() << "Attempting to insert with values - ID:" << res
             << "numtel:" << numtel
             << "moyenT:" << moyenT
             << "email:" << email
             << "typeP:" << typeP
             << "nbrN:" << nb
             //<< "dl:" << dll
             << "dateexp:" << dateexp;


    if (!query.exec()) {
        qDebug() << "SQL Error:" << query.lastError().text();
        return false;
    }

    return query.exec();
}


void MainWindow::on_pushButton_ajouter_clicked() {
    QString id = ui->lineEdit_ID->text();
    QString numtel = ui->lineEdit_numtel->text();
    QString moyenT = ui->lineEdit_moyenT->text();
    QString email = ui->lineEdit_email->text();
    QString catP = ui->comboBox_catP->currentText();
    QString typeP = ui->lineEdit_typeP->text();
    QString nbrN = ui->lineEdit_nbrN->text();
    //QString dl = ui->lineEdit_dl->text(); // Get dl as a QString
    QDate dateexp = ui->dateEdit_dateexp->date();
    // Use QDateEdit for date

    // Validate email
    if (!email.contains("@") || !email.contains(".")) {
        QMessageBox::warning(this, "Erreur de Validation", "L'email doit contenir '@' et '.'");
        return;
    }

    // Validate nbrN as an integer less than or equal to 3
    bool isNbrNInt;
    int nbrNInt = nbrN.toInt(&isNbrNInt);
    if (!isNbrNInt || nbrNInt > 3) {
        QMessageBox::warning(this, "Erreur de Validation", "Le nombre de notes (nbrN) doit être un entier inférieur ou égal à 3.");
        return;
    }

    // Validate numtel
    if (numtel.length() != 8 || !numtel.toLongLong()) {
        QMessageBox::warning(this, "Erreur de Validation", "Le numéro de téléphone (numtel) doit contenir exactement 8 chiffres.");
        return;
    }

    // Validate moyenT
    if (!(moyenT == "G" || moyenT == "g" || moyenT == "R" || moyenT == "r")) {
        QMessageBox::warning(this, "Erreur de Validation", "Le moyenT doit être 'G', 'g', 'R' ou 'r'.");
        return;
    }

    // Validate typeP
    if (!(typeP == "G" || typeP == "g" || typeP == "R" || typeP == "r")) {
        QMessageBox::warning(this, "Erreur de Validation", "Le typeP doit être 'G', 'g', 'R' ou 'r'.");
        return;
    }

    // Validate and convert dl to an integer
    /*bool isDlInt;
    int dlInt = dl.toInt(&isDlInt);
    if (!isDlInt) {
        QMessageBox::warning(this, "Erreur de Validation", "La valeur de dl doit être un entier.");
        return;
    }*/

    // Check for duplicate ID
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM FOURNISSEUR WHERE ID = :id");
    checkQuery.bindValue(":id", id);

    if (checkQuery.exec() && checkQuery.next()) {
        int count = checkQuery.value(0).toInt();

        if (count > 0) {
            QMessageBox::warning(this, "Duplicate Entry", "A record with this ID already exists. Please update it instead.");
        } else {
            // Insert the new record
            QSqlQuery insertQuery;
            insertQuery.prepare("INSERT INTO FOURNISSEUR (ID, numtel, moyenT, email, typeP, nbrN, dateexp, catP) VALUES (:id, :numtel, :moyenT, :email, :typeP, :nbrN, :dateexp, :catP)");
            insertQuery.bindValue(":id", id);
            insertQuery.bindValue(":numtel", numtel);
            insertQuery.bindValue(":moyenT", moyenT);
            insertQuery.bindValue(":email", email);
            insertQuery.bindValue(":catP", catP);
            insertQuery.bindValue(":typeP", typeP);
            insertQuery.bindValue(":nbrN", nbrN);  // Bind nbrN as an integer
            //insertQuery.bindValue(":dl", dl);      // Bind dl as an integer
            insertQuery.bindValue(":dateexp", dateexp);  // Bind the QDate value

            if (insertQuery.exec()) {
                ui->tableView->setModel(Ftmp.afficherf());
                QMessageBox::information(this, "Success", "Record added successfully.");
            } else {
                QMessageBox::critical(this, "Error", insertQuery.lastError().text());
            }
        }
    } else {
        QMessageBox::critical(this, "Error", checkQuery.lastError().text());
    }
}



QSqlQueryModel * fournisseur::afficherf()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    //model->setQuery("select * from fournisseur");
    model->setQuery("SELECT * FROM fournisseur ORDER BY email ASC");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nbrN"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("catP"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr(""));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("numtel"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("typeP"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("moyenT"));
    model->setHeaderData(8,Qt::Horizontal,QObject::tr("dateexp"));
    return model;
}


void MainWindow::on_sortButton_clicked() {
    // Get the selected index from the comboBox
    int index = ui->comboBox_catP->currentIndex();

    fournisseur f;
    QSqlQueryModel *model = new QSqlQueryModel();

    if (index == 0) {  // "Tri selon Email"
        model->setQuery("SELECT * FROM fournisseur ORDER BY email ASC");
    } else if (index == 1) {  // "Tri selon nbrN"
        model->setQuery("SELECT * FROM fournisseur ORDER BY nbrN DESC");
    }

    // Set headers as in your afficher function
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nbrN"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("catP"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr(""));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("numtel"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("typeP"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("moyenT"));
    model->setHeaderData(8,Qt::Horizontal,QObject::tr("dateexp"));

    // Display the sorted data in the table view
    ui->tableView->setModel(model);
}




void MainWindow::on_Afficher_clicked()
{
    fournisseur f;

    ui->tableView->setModel(f.afficherf());
}


bool fournisseur::supprimer(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("delete from fournisseur where ID= :id");
    query.bindValue(":id",res);
    return query.exec();
}
void MainWindow::on_Supprimer_clicked()
{
    qDebug() << "Delete button clicked";
    int ID = ui->lineEdit_ID->text().toInt();
    bool test = Ftmp.supprimer(ID);

    if (test)
    {
        // Update the table view after successful deletion
        ui->tableView->setModel(Ftmp.afficherf());

        QMessageBox::information(this, QObject::tr("Success"),
                                 QObject::tr("Record deleted successfully.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(this, QObject::tr("Failure"),
                              QObject::tr("Deletion failed.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
}


bool fournisseur::modifierPartiel(int id, const QString& newEmail, const QString& newNumTel, const QString& newMoyenT, const QString& newTypeP, int newNbrN, QDate newdateexp, QString newcatP)
{
    QSqlQuery query;
    QString updateQuery = "UPDATE fournisseur SET ";

    bool first = true;
    if (!newEmail.isEmpty()) {
        updateQuery += "email = :email";
        first = false;
    }
    if (!newNumTel.isEmpty()) {
        if (!first) updateQuery += ", ";
        updateQuery += "numtel = :numtel";
        first = false;
    }

    if (!newMoyenT.isEmpty()) {
        if (!first) updateQuery += ", ";
        updateQuery += "moyenT = :moyenT";
        first = false;
    }
    if (!newcatP.isEmpty()) {
        if (!first) updateQuery += ", ";
        updateQuery += "catP = :catP";
        first = false;
    }
    if (newdateexp.isValid()) {  // Check if date is valid
        if (!first) updateQuery += ", ";
        updateQuery += "dateexp = :dateexp";
        first = false;
    }
    if (!newTypeP.isEmpty()) {
        if (!first) updateQuery += ", ";
        updateQuery += "typeP = :typeP";
        first = false;
    }
    if (newNbrN != -1) {
        if (!first) updateQuery += ", ";
        updateQuery += "nbrN = :nbrN";
    }
    /*if (newdl != -1) {
        if (!first) updateQuery += ", ";
        updateQuery += "dl = :dl";
    }*/

    updateQuery += " WHERE ID = :id";
    query.prepare(updateQuery);

    // Bind values
    query.bindValue(":id", id);
    if (!newEmail.isEmpty()) query.bindValue(":email", newEmail);
    if (!newNumTel.isEmpty()) query.bindValue(":numtel", newNumTel);
    if (!newMoyenT.isEmpty()) query.bindValue(":moyenT", newMoyenT);
    if (!newcatP.isEmpty()) query.bindValue(":catPay", newcatP);
    if (!newTypeP.isEmpty()) query.bindValue(":typeP", newTypeP);
    if (newNbrN != -1) query.bindValue(":nbrN", newNbrN);
    //if (newdl != -1) query.bindValue(":dl", newdl);
    if (newdateexp.isValid()) query.bindValue(":dateexp", newdateexp);  // Bind date if valid

    return query.exec();
}


void MainWindow::on_Modifier_clicked()
{
    int id = ui->lineEdit_ID->text().toInt();
    QString email = ui->lineEdit_email->text();
    QString numtel = ui->lineEdit_numtel->text();
    QString moyenT = ui->lineEdit_moyenT->text();
    QString typeP = ui->lineEdit_typeP->text();
    QString catP = ui->comboBox_catP->currentText();
    QString nbrNText = ui->lineEdit_nbrN->text();
    int nbrN = nbrNText.isEmpty() ? -1 : nbrNText.toInt();
    //QString dlText = ui->lineEdit_dl->text();
    //int dl = dlText.isEmpty() ? -1 : dlText.toInt();

    QDate dateexp = ui->dateEdit_dateexp->date();  // Retrieve dateex from QDateEdit

    // Validation checks
    if (!email.isEmpty() && (!email.contains("@") || !email.contains("."))) {
        QMessageBox::warning(this, "Erreur de Validation", "L'email doit contenir '@' et '.'");
        return;
    }

    if (nbrN != -1 && nbrN > 3) {
        QMessageBox::warning(this, "Erreur de Validation", "Le nombre de notes (nbrN) doit être un entier inférieur ou égal à 3.");
        return;
    }

    if (!numtel.isEmpty() && (numtel.length() != 8 || !numtel.toLongLong())) {
        QMessageBox::warning(this, "Erreur de Validation", "Le numéro de téléphone (numtel) doit contenir exactement 8 chiffres.");
        return;
    }

    // Call the modifierPartiel function with dateex
    fournisseur f;
    if (f.modifierPartiel(id, email, numtel, moyenT, typeP, nbrN,dateexp,catP)) {
        ui->tableView->setModel(f.afficherf());
        QMessageBox::information(this, "Succès", "Les informations du fournisseur ont été mises à jour avec succès.");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la mise à jour des informations du fournisseur.");
    }
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    int row = index.row(); // Get the selected row

    // Accessing the table model for each column
    QModelIndex idIndex = ui->tableView->model()->index(row, 0);
    QModelIndex nbrNIndex = ui->tableView->model()->index(row, 1);
    QModelIndex emailIndex = ui->tableView->model()->index(row, 2);
    QModelIndex catPIndex = ui->tableView->model()->index(row, 3);
    QModelIndex numtelIndex = ui->tableView->model()->index(row, 5);
    QModelIndex typePIndex = ui->tableView->model()->index(row, 6);
    QModelIndex moyenTIndex = ui->tableView->model()->index(row, 7);
    QModelIndex dateexpIndex = ui->tableView->model()->index(row, 8);

    // Retrieving data from the model
    int id = ui->tableView->model()->data(idIndex).toInt();
    int nbrN = ui->tableView->model()->data(nbrNIndex).toInt();
    QString email = ui->tableView->model()->data(emailIndex).toString();
    QString catP = ui->tableView->model()->data(catPIndex).toString();
    QString numtel = ui->tableView->model()->data(numtelIndex).toString();
    QString typeP = ui->tableView->model()->data(typePIndex).toString();
    QString moyenT = ui->tableView->model()->data(moyenTIndex).toString();
    QDate dateexp = ui->tableView->model()->data(dateexpIndex).toDate();

    // Setting the values in the line edits
    ui->lineEdit_ID->setText(QString::number(id));
    ui->lineEdit_nbrN->setText(QString::number(nbrN));
    ui->lineEdit_email->setText(email);
    ui->comboBox_catP->setCurrentText(catP);
    ui->lineEdit_numtel->setText(numtel);
    ui->lineEdit_typeP->setText(typeP);
    ui->lineEdit_moyenT->setText(moyenT);
    ui->dateEdit_dateexp->setDate(dateexp);

    // Enable action buttons
    ui->pushButton_ajouter->setEnabled(true);
    ui->pushButton_modifier->setEnabled(true);
    ui->Supprimer->setEnabled(true);
}

std::unique_ptr<QSqlQueryModel> fournisseur::rechercherByID(int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM fournisseur WHERE id = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return nullptr;
    }

    auto model = std::make_unique<QSqlQueryModel>(); // Using smart pointer
    model->setQuery(query);
    return model; // Return the model
}

std::unique_ptr<QSqlQueryModel> fournisseur::rechercherByCatP(const QString &catP) {
    QSqlQuery query;
    query.prepare("SELECT * FROM fournisseur WHERE catP = :catP");
    query.bindValue(":catP", catP);

    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return nullptr;
    }

    auto model = std::make_unique<QSqlQueryModel>(); // Using smart pointer
    model->setQuery(query);
    return model; // Return the model
}


void MainWindow::on_Rechercher_clicked() {
    QString searchText = ui->lineEdit_ID->text();  // Get the search text from the line edit (could be ID or catP)
    QString catP = ui->comboBox_catP->currentText();  // Get the selected category from the combo box

    fournisseur f;
    std::unique_ptr<QSqlQueryModel> model;

    // If ID is provided, search by ID
    if (!searchText.isEmpty()) {
        bool ok;
        int id = searchText.toInt(&ok);  // Convert ID to int, ensure it's valid
        if (ok) {
            model = f.rechercherByID(id);  // Search by ID
        } else {
            QMessageBox::warning(this, "Invalid Input", "Please enter a valid ID.");
            return;
        }
    }
    // If no ID is provided, but catP is selected, search by category
    else if (!catP.isEmpty()) {
        model = f.rechercherByCatP(catP);  // Search by catP
    }
    // If both fields are empty, inform the user
    else {
        QMessageBox::warning(this, "No Search Criteria", "Please enter an ID or select a category.");
        return;
    }

    if (model) {

        ui->tableView->setModel(nullptr);



        ui->tableView->setModel(model.release());
    } else {
        QMessageBox::information(this, "Not Found", "No supplier found with the given criteria.");


        ui->tableView->setModel(nullptr);
    }
}





void MainWindow::on_pb_notfier_clicked()
{
    // Retrieve supplier ID from the input field
    int id = ui->lineEdit_ID->text().toInt();

    // Create a query to get the supplier's phone number and expiration date from the database
    QSqlQuery query;
    query.prepare("SELECT numtel, dateexp FROM fournisseur WHERE ID = :id");
    query.bindValue(":id", id);

    // Execute the query
    if (query.exec()) {
        if (query.next()) {
            // Retrieve the supplier's phone number and expiration date
            QString phoneNumber = "+21653211064";
            QDate dateexp = query.value("dateexp").toDate();
            QString formattedDateExp = dateexp.toString("yyyy-MM-dd"); // Format the date as YYYY-MM-DD

            // Create an instance of the SMS class
            sms s;

            // Prepare the SMS content
            QString message = "REMINDER\nDear Supplier,\n\nYour contract will expire on " + formattedDateExp +
                              ". Please take the necessary steps to renew it.\n\nCordialement,\nWaveworx";

            // Send the SMS
            s.sendSMS(phoneNumber, message);

            // Notify the user in the UI that the SMS was sent
            QMessageBox::information(this, tr("Notification"),
                                     tr("Le SMS a été envoyé avec succès au fournisseur."),
                                     QMessageBox::Ok);
        } else {
            // If no supplier is found with the provided ID, show an error message
            QMessageBox::warning(this, tr("Erreur"),
                                 tr("Aucun fournisseur trouvé avec cet ID."),
                                 QMessageBox::Ok);
        }
    } else {
        // If there is an error with the database query
        QMessageBox::warning(this, tr("Erreur"),
                             tr("Erreur lors de l'accès à la base de données."),
                             QMessageBox::Ok);
    }
}


QMap<QString, double> fournisseur::calculerStatistiquesMoyenT()
{
    QMap<QString, double> statistiques;

    QSqlQuery query;

    // Query to get the count of eco-friendly suppliers (G or g)
    query.prepare("SELECT COUNT(*) FROM fournisseur WHERE LOWER(moyenT) = 'g'");
    if (!query.exec()) {
        qDebug() << "Échec de la requête SQL pour les fournisseurs écoresponsables :" << query.lastError();
        return statistiques;  // Return empty map if query fails
    }

    query.next();
    int ecoFriendlyCount = query.value(0).toInt();

    // Query to get the count of non-eco-friendly suppliers (R or r)
    query.prepare("SELECT COUNT(*) FROM fournisseur WHERE LOWER(moyenT) = 'r'");
    if (!query.exec()) {
        qDebug() << "Échec de la requête SQL pour les fournisseurs non écoresponsables :" << query.lastError();
        return statistiques;  // Return empty map if query fails
    }

    query.next();
    int nonEcoFriendlyCount = query.value(0).toInt();

    // Query to get the total number of suppliers
    query.prepare("SELECT COUNT(*) FROM fournisseur");
    if (!query.exec()) {
        qDebug() << "Échec de la requête SQL pour le nombre total de fournisseurs :" << query.lastError();
        return statistiques;  // Return empty map if query fails
    }

    query.next();
    int totalCount = query.value(0).toInt();

    // Calculate percentages for eco-friendly and non-eco-friendly suppliers
    double ecoFriendlyPercentage = (double)ecoFriendlyCount / totalCount * 100;
    double nonEcoFriendlyPercentage = (double)nonEcoFriendlyCount / totalCount * 100;

    // Store the results in the map
    statistiques["Eco-friendly"] = ecoFriendlyPercentage;
    statistiques["Non-eco-friendly"] = nonEcoFriendlyPercentage;

    return statistiques;  // Return the map with percentages
}


void MainWindow::on_btn_statistiques_clicked()
{
    fournisseur f;  // Create an instance of fournisseur
    QMap<QString, double> statistiques = f.calculerStatistiquesMoyenT();  // Call the function on the instance

    // Check if the statistics are valid
    if (statistiques.isEmpty()) {
        qDebug() << "Erreur lors du calcul des statistiques.";
        return;
    }

    // Retrieve the percentages for eco-friendly and non-eco-friendly suppliers
    double ecoFriendlyPercentage = statistiques["Eco-friendly"];
    double nonEcoFriendlyPercentage = statistiques["Non-eco-friendly"];

    // Create a bar set for the percentages
    QBarSet *set = new QBarSet("Pourcentage");

    // Add the percentages for eco-friendly and non-eco-friendly suppliers
    *set << ecoFriendlyPercentage << nonEcoFriendlyPercentage;

    // Create categories for X-axis
    QStringList categories;
    categories << "Eco-friendly" << "Non-eco-friendly";

    // Create the bar series and chart
    QBarSeries *series = new QBarSeries();
    series->append(set);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Pourcentage des fournisseurs selon le moyen de transport");

    // Create X-axis and add the categories
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Create Y-axis for percentage values
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 100);  // Y-axis will range from 0 to 100 (percentage)
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create chart view and set it to a fixed size
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setFixedSize(600, 400);  // Adjust the chart size if necessary

    // Show the chart in a pop-up window or as part of the layout
    QDialog *chartDialog = new QDialog(this);  // Create a dialog
    QVBoxLayout *layout = new QVBoxLayout(chartDialog);  // Add layout to dialog
    layout->addWidget(chartView);  // Add the chart view to the layout
    chartDialog->setFixedSize(650, 450);  // Set dialog size to fit the chart
    chartDialog->exec();  // Show the dialog
}


void MainWindow::on_exporter_clicked() {
    fournisseur f;
    f.exportToPDF();
}
void fournisseur::exportToPDF() {
    // Fetch supplier data from database
    QSqlQuery query;
    query.prepare("SELECT email, numtel, typeP, moyenT, catP, ID, nbrN, dateexp FROM fournisseur");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        QMessageBox::warning(nullptr, "Error", "Failed to retrieve supplier data.");
        return;
    }

    // File dialog to save the PDF
    QString fileName = QFileDialog::getSaveFileName(nullptr, "Save PDF", "", "PDF Files (*.pdf)");
    if (fileName.isEmpty()) {
        return; // Cancelled by user
    }

    // Create the PDF writer
    QPdfWriter writer(fileName);
    writer.setPageSize(QPageSize(QPageSize::A4));
    writer.setResolution(300);

    // Create a painter for the PDF
    QPainter painter(&writer);
    if (!painter.isActive()) {
        qDebug() << "Failed to create painter.";
        return;
    }

    // Set fonts and line height
    QFont font("Times New Roman", 10);
    QFont headerFont("Times New Roman", 12, QFont::Bold);
    painter.setFont(headerFont);

    int margin = 30;       // Margins
    int x = margin;        // Starting X position
    int y = margin;        // Starting Y position
    int lineHeight = 40;   // Line height
    int tableRowHeight = 60; // Row height for table
    int tableColPadding = 10; // Padding in table cells

    // Add logo (increased size and positioned on the right side)
    QString logoPath = ":/logo/logo.png"; // Ensure this path matches your .qrc
    QPixmap logo(logoPath);
    if (!logo.isNull()) {
        QRect logoRect(writer.width() - 400 - margin, margin, 400, 200); // Position it on the right side and increase size
        painter.drawPixmap(logoRect, logo.scaled(400, 200, Qt::KeepAspectRatio)); // Scale the logo to 400x200 pixels
    } else {
        qDebug() << "Failed to load logo from path: " << logoPath;
    }

    // Add current date
    QString currentDate = QDate::currentDate().toString("dd/MM/yyyy");
    painter.drawText(margin, margin + 120, currentDate); // Position below the logo

    // Move down for title
    y += 250; // Increased space to move title lower

    // Draw title
    painter.setFont(QFont("Times New Roman", 16, QFont::Bold));
    painter.drawText(QRect(0, y, writer.width(), 50), Qt::AlignCenter, "Supplier List");
    y += 90; // Increased space between title and table

    // **Adjusting the Y position here** to move the table lower
    y += 80;  // Added extra space to push the table further down

    // Column headers
    QStringList headers = {"Email", "Phone", "Type", "Method", "Category", "ID", "Number", "Expiry Date"};
    int emailColWidth = 450;  // Wider Email column
    int categoryColWidth = 370; // Slightly wider Category column
    int otherColWidth = 250;  // Other columns remain narrower

    // Draw table headers
    int colX = x;
    painter.setFont(headerFont);
    painter.setPen(QPen(Qt::darkBlue)); // Blue text for headers
    // Draw Email column with wider width
    painter.drawRect(colX, y, emailColWidth, tableRowHeight);
    painter.drawText(colX + tableColPadding, y + tableRowHeight - 15, headers[0]);
    colX += emailColWidth;
    // Draw the rest of the headers with narrower width
    for (int i = 1; i < headers.size(); ++i) {
        int colWidth = (i == 4) ? categoryColWidth : otherColWidth; // Category column gets slightly wider
        painter.drawRect(colX, y, colWidth, tableRowHeight);
        painter.drawText(colX + tableColPadding, y + tableRowHeight - 15, headers[i]);
        colX += colWidth;
    }
    y += tableRowHeight; // Move down after the header row

    // Draw the supplier data
    painter.setFont(font); // Switch to regular font for data
    painter.setPen(Qt::black); // Black text for data
    while (query.next()) {
        QString email = query.value("email").toString();
        QString numtel = query.value("numtel").toString();
        QString typeP = query.value("typeP").toString();
        QString moyenT = query.value("moyenT").toString();
        QString catP = query.value("catP").toString();
        int ID = query.value("ID").toInt();
        int nbrN = query.value("nbrN").toInt();
        QDate dateexp = query.value("dateexp").toDate();

        colX = x; // Reset column X position for each row
        QStringList rowData = {
            email,
            numtel,
            typeP,
            moyenT,
            catP,
            QString::number(ID),
            QString::number(nbrN),
            dateexp.toString("dd/MM/yyyy")
        };

        // Draw each cell in the row
        painter.drawRect(colX, y, emailColWidth, tableRowHeight);
        painter.drawText(colX + tableColPadding, y + tableRowHeight - 15, rowData[0]);
        colX += emailColWidth;
        // Draw other columns with their respective widths
        for (int i = 1; i < rowData.size(); ++i) {
            int colWidth = (i == 4) ? categoryColWidth : otherColWidth; // Category column gets slightly wider
            painter.drawRect(colX, y, colWidth, tableRowHeight);
            painter.drawText(colX + tableColPadding, y + tableRowHeight - 15, rowData[i]);
            colX += colWidth;
        }
        y += tableRowHeight; // Move down after each row

        // If content exceeds the page height, create a new page
        if (y > writer.height() - margin - tableRowHeight) {
            writer.newPage();
            y = margin + 50; // Reset Y position for new page

            // Redraw headers on new page
            colX = x;
            // Redraw Email column with wider width
            painter.drawRect(colX, y, emailColWidth, tableRowHeight);
            painter.drawText(colX + tableColPadding, y + tableRowHeight - 15, headers[0]);
            colX += emailColWidth;
            // Redraw the rest of the headers with slightly wider Category column
            for (int i = 1; i < headers.size(); ++i) {
                int colWidth = (i == 4) ? categoryColWidth : otherColWidth; // Category column gets slightly wider
                painter.drawRect(colX, y, colWidth, tableRowHeight);
                painter.drawText(colX + tableColPadding, y + tableRowHeight - 15, headers[i]);
                colX += colWidth;
            }
            y += tableRowHeight; // Move down after the header row
        }
    }

    painter.end(); // Finalize the painting

    // Show success message
    QMessageBox::information(nullptr, "Export Complete", "Supplier data has been successfully exported to PDF.");
}




void MainWindow::on_pushButton_sendEmail_clicked() {
    // Retrieve supplier ID from input field
    QString supplierID = ui->lineEdit_ID->text();

    if (supplierID.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a supplier ID.");
        return;
    }

    // Query the database for supplier details
    QSqlQuery query;
    query.prepare("SELECT email, nbrN FROM fournisseur WHERE ID = :id");
    query.bindValue(":id", supplierID);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }

    if (query.next()) {
        QString email = query.value(0).toString();
        int nbrN = query.value(1).toInt();

        if (nbrN == 3) {
            // Compose email
            QString subject = "Important Notice from Waveworx";
            QString body = "Dear Supplier,\n\nWe hope this message finds you well. At WaveWorx, we remain committed to promoting sustainable and environmentally conscious practices in all aspects of our operations. As a valued partner, we expect our collaborators to uphold these principles as well.\nFollowing a review of recent transactions, we have observed that your transportation methods and/or supplied products do not align with eco-friendly standards. This is a concern, as it contradicts our shared goal of reducing environmental impact.\nThis email serves as an alert regarding this matter. We kindly request that you take immediate steps to adopt environmentally responsible practices in compliance with our sustainability guidelines.\nShould these practices persist without improvement, we may have no choice but to reconsider our collaboration, including the possibility of annulling our contract.\nWe trust in your understanding and commitment to making the necessary changes. Please feel free to contact us if you require further guidance or support in aligning with our eco-friendly standards.\nThank you for your attention to this matter.";

            mailer mail;
            int result = mail.sendEmail(email, subject, body);

            if (result == 0) {
                QMessageBox::information(this, "Success", "Email sent successfully!");
            } else {
                QMessageBox::critical(this, "Failure", "Failed to send email. Check your configuration.");
            }
        } else {
            QMessageBox::information(this, "Info", "The supplier does not meet the conditions to send an email.");
        }
    } else {
        QMessageBox::warning(this, "Not Found", "No supplier found with the given ID.");
    }
}
