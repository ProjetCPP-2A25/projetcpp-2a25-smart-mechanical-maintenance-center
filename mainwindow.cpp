#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QPieSlice >
#include<QPieSeries>
#include <QFileDialog>
#include<QtCharts>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>

//**********
#include"fournisseur.h"
#include <QString>
#include <QMap>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //lors du l'exection du proramme , il lit les fonction suivant
    ui->tableViewc->setModel(c.afficher());
    connect(ui->pushButton_Confirmer, &QPushButton::clicked,this,&MainWindow::on_pushButton_Confirmer_clicked);
    connect(ui->bt_ajouter, &QPushButton::clicked, this, &MainWindow::on_bt_ajouter_clicked);
    connect(ui->bt_modifier, &QPushButton::clicked, this, &MainWindow::on_bt_modifier_clicked);
    connect(ui->bt_supprimer, &QPushButton::clicked, this, &MainWindow::on_bt_supprimer_clicked);
    connect(ui->btn_rechercher, &QPushButton::clicked, this, &MainWindow::on_btn_rechercher_clicked);
    connect(ui->button_tri, &QPushButton::clicked, this, &MainWindow::on_button_tri_clicked);
    connect(ui->Historic, &QPushButton::clicked, this, &MainWindow::on_Historic_clicked);
    connect(ui->stat_bateau, &QPushButton::clicked, this, &MainWindow::on_stat_bateau_clicked);




    connect(ui->back, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(0);
    });
    ui->stackedWidget->setCurrentIndex(0);
//fournisseur****************************************************************************************************************
    connect(ui->pushButton_ajouter, &QPushButton::clicked, this, &MainWindow::on_pushButton_ajouter_clicked);
    connect(ui->Supprimer, &QPushButton::clicked, this, &MainWindow::on_Supprimer_clicked);
    ui->tableViewc->setModel(Ftmp.afficherf());
    connect(ui->pushButton_modifier, &QPushButton::clicked, this, &MainWindow::on_Modifier_clicked);
    connect(ui->pushButton_Afficher, &QPushButton::clicked, this, &MainWindow::on_Afficher_clicked);
    connect(ui->pushButton_rechercher, &QPushButton::clicked, this, &MainWindow::on_Rechercher_clicked);
    connect(ui->pushButton_sort, &QPushButton::clicked, this, &MainWindow::on_sortButton_clicked);
    connect(ui->notifier, &QPushButton::clicked, this, &MainWindow::on_pb_notfier_clicked);
    // Assuming you have a QPushButton* statButton in your header or UI
    connect(ui->statButton, &QPushButton::clicked, this, &MainWindow::on_btn_statistiques_clicked);
    connect(ui->exporter, &QPushButton::clicked, this, &MainWindow::on_exporter_clicked);
    connect(ui->pushButton_Email, &QPushButton::clicked, this, &MainWindow::on_pushButton_sendEmail_clicked);
    connect(ui->tableView, &QTableView::clicked, this, &MainWindow::on_tableView_clicked);
    connect(ui->back2, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(3);
    });
    connect(ui->fournisseur, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(2);
    });
    connect(ui->clients, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(1);
    });







}

MainWindow::~MainWindow()
{

    delete ui;

}

void MainWindow::on_bt_ajouter_clicked()
{
    int IDC=ui->ID->text().toInt();
    QString NOM=ui->NOM->text();
    QString CONTACT=ui->CONTACT->text();
    QString TYPE=ui->type->text();

    QString DESCRIPTION=ui->DESCRIPTION->text();
    QString SERVICE_EFFECTUE=ui->SERVICE_EFFECTUE->text();

    //controle de saisie
    if(c.chercherMDF(IDC))
    {

        QMessageBox::warning(nullptr, QObject::tr("Invalide ID"), QObject::tr("ID deja existe"), QMessageBox::Ok);
        return;

    }



    //ajout
    clients c(IDC,NOM,CONTACT,TYPE,DESCRIPTION,SERVICE_EFFECTUE);
    bool test=c.ajouter();

    if(test)
    {
         QMessageBox::information(nullptr, QObject::tr(""), QObject::tr("ajout avec succes"), QMessageBox::Ok);
        ui->tableViewc->setModel(c.afficher());

        ui->ID->clear();
        ui->NOM->clear();
        ui->CONTACT->clear();
        ui->type->clear();

        ui->DESCRIPTION->clear();
        ui->SERVICE_EFFECTUE->clear();

    }

    else
        QMessageBox::warning(nullptr, QObject::tr(""), QObject::tr("echec d'ajout "), QMessageBox::Ok);





}





void MainWindow::on_bt_modifier_clicked()
{

    int  IDC=ui->ID->text().toInt();
    QString NOM=ui->NOM->text();
    QString CONTACT=ui->CONTACT->text();
    QString TYPE=ui->type->text();
    QString DESCRIPTION=ui->DESCRIPTION->text();
    QString SERVICE_EFFECTUE=ui->SERVICE_EFFECTUE->text();

    //controle de saisie
    if(!c.chercherMDF(IDC))
    {

        QMessageBox::warning(nullptr, QObject::tr("Invalide ID"), QObject::tr("ID n' existe pas"), QMessageBox::Ok);
        return;

    }



    //ajout
    clients c(IDC,NOM,CONTACT,TYPE,DESCRIPTION,SERVICE_EFFECTUE);
    bool test=c.modifier();

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr(""), QObject::tr("MISE A JOUR avec succes"), QMessageBox::Ok);
        ui->tableViewc->setModel(c.afficher());

        ui->ID->clear();
        ui->NOM->clear();
        ui->CONTACT->clear();
        ui->type->clear();
        ui->DESCRIPTION->clear();
        ui->SERVICE_EFFECTUE->clear();
    }

    else
        QMessageBox::warning(nullptr, QObject::tr(""), QObject::tr("echec d'ajout "), QMessageBox::Ok);


}


void MainWindow::on_bt_supprimer_clicked()
{

    int IDC=ui->lineEdit_supprimer->text().toUInt();
    if(!c.chercherMDF(IDC))
    {

        QMessageBox::warning(nullptr, QObject::tr("Invalide ID"), QObject::tr("ID n' existe pas"), QMessageBox::Ok);
        return;

    }
    else
    {
        bool test= c.supprimer(IDC);
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr(""), QObject::tr("suppresion avec succes"), QMessageBox::Ok);
            ui->tableViewc->setModel(c.afficher());

        }
        else
        {
            QMessageBox::warning(nullptr, QObject::tr(""), QObject::tr("echec de suppression "), QMessageBox::Ok);

        }
    }

}





void MainWindow::on_stat_bateau_clicked() {
    clients client;  // Objet de la classe Clients
    client.stat_bateau();
}

void MainWindow::on_btn_rechercher_clicked()
{
    QString critere = ui->combo_critere->currentText();  // Choisir le critère (par exemple, "NOM", "CONTACT_C", etc.)
    QString valeur = ui->lineEdit_valeurRecherche->text();  // La valeur à rechercher

    // Vérifiez que le critère et la valeur ne sont pas vides
    if (critere.isEmpty() || valeur.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un critère et entrer une valeur.");
        return;
    }

    // Appeler la méthode de recherche
    QSqlQueryModel* model = c.rechercherClients(critere, valeur);  // Appel à la méthode de recherche

    // Mettre à jour le tableau avec les résultats
    ui->tableViewc->setModel(model); // Assurez-vous que le nom du QTableView est correct

    // Vérifiez si des résultats ont été trouvés
    if (model->rowCount() == 0) {
        QMessageBox::information(this, "Aucun résultat", "Aucun client trouvé.");
    }
}
void MainWindow::on_button_tri_clicked()
{
    QString critere = ui->combo_critere_tri->currentText();
    QSqlQueryModel *model = c.trierPieces(critere);

    if (model && model->rowCount() > 0) {
        ui->tableViewc->setModel(model);
        qDebug() << "Tableau trié avec succès.";
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors du tri des données ou aucune donnée disponible.");
        qDebug() << "Erreur lors du tri ou aucune donnée trouvée.";
    }
}

void MainWindow::afficherHistorique() {
   QString filePath = QDir::currentPath() + "/client_historique.txt"; // Chemin complet
    QFile file(filePath);

    // Ouvrir le fichier en mode lecture
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Erreur", "Impossible d'ouvrir le fichier d'historique.");
        return;
    }

    QTextStream in(&file);
    QString contenuHistorique;

    // Lire ligne par ligne et structurer le contenu
    while (!in.atEnd()) {
        QString line = in.readLine();
        // Supposons que chaque ligne du fichier contient les attributs séparés par un point-virgule
        QStringList attributes = line.split(";");

        // Vérifiez si la ligne contient le bon nombre d'attributs
        if (attributes.size() >= 6) {
            contenuHistorique += QString("IDC: %1\nContact: %2\nNom: %3\nType de Bateau: %4\nDescription: %5\nService Effectué: %6\n\n")
                                     .arg(attributes[0].trimmed())  // IDC
                                     .arg(attributes[1].trimmed())  // contact_c
                                     .arg(attributes[2].trimmed())  // nom
                                     .arg(attributes[3].trimmed())  // type_bateau
                                     .arg(attributes[4].trimmed())  // description
                                     .arg(attributes[5].trimmed()); // service_effectue
        }
    }
    file.close();

    // Afficher le contenu dans un QLabel (ou QTextEdit si vous préférez)
    ui->historiqueLabel->setText(contenuHistorique);
    ui->historiqueLabel->setWordWrap(true); // Permet le retour à la ligne automatique

    // Message d'information
    QMessageBox::information(this, "Succès", "L'historique a été chargé avec succès.");
}

void MainWindow::on_Historic_clicked() {
    afficherHistorique();
}


void MainWindow::on_pushButton_Confirmer_clicked()
{
    QString email = ui->mailLogin->text();
    QString mot_de_passe = ui->PwLogin->text();

    // Vérification des identifiants codés en dur
    if (email == "ikram.soula@esprit.tn" && mot_de_passe == "ayser") {
        isAuthenticated = true; // Définir le drapeau d'authentification

        // Afficher la fenêtre principale (ou le contenu en bas)
        //ui->label_27->show();

        // Afficher le premier onglet du QTabWidget
        ui->stackedWidget->setCurrentIndex(3); // Change to the first tab (index 0)
    } else {
        QMessageBox::warning(this, "Échec de la connexion", "Email ou mot de passe invalide. Veuillez réessayer.");
    }
}

void MainWindow::on_tabBarClicked(int index)
{
    if (!isAuthenticated && index != 0) {
        QMessageBox::warning(this, "Accès refusé", "Vous devez vous connecter pour accéder à cette page.");
        //ui->tabWidget->show(); // Afficher la page de connexion
        ui->stackedWidget->setCurrentIndex(0);
        //ui->label_27->hide(); // Cacher le contenu principal
    } /*else {
        ui->tabWidget->hide(); // Cacher la page Home si authentifié
        ui->label_27->show(); // Afficher le contenu principal
    }*/
}


void MainWindow::on_actionGenerer_Rapport_PDF_clicked()
{
    // Définir le nom du fichier PDF
    QString filename = QFileDialog::getSaveFileName(this, tr("Enregistrer le rapport PDF"), QString(), tr("Fichiers PDF (*.pdf)"));
    if (!filename.isEmpty()) {
        // Créer le fichier PDF
        QPdfWriter pdfWriter(filename);
        pdfWriter.setPageSize(QPageSize(QPageSize::A4));
        pdfWriter.setResolution(300);
        QPainter painter(&pdfWriter);

        // Écrire le titre du rapport en gros et en rouge
        painter.setPen(QPen(Qt::red, 2));
        painter.setFont(QFont("Arial", 24, QFont::Bold));
        painter.drawText(100, 80, " Logo Waveworx");
        painter.drawLine(100, 120, 550, 120);

        // Charger et afficher l'image
        QString imagePath = "C:/Users/user/Downloads/waveworx.png";
        QImage image(imagePath);
        if (!image.isNull()) {
            // Redimensionner l'image pour qu'elle occupe une plus grande partie de la page
            QSize imageSize = image.size();
            imageSize.scale(1200, 600, Qt::KeepAspectRatio);
            painter.drawImage(600, 300, image.scaled(imageSize));
        } else {
            qDebug() << "Impossible de charger l'image.";
        }

        painter.end();
    }
}
//fournisseur************************************************************************

