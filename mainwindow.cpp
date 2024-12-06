#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "piecerechange.h"
#include <QMessageBox>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QStandardItemModel>
#include <QTableView>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QDateTime>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QKeyEvent>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QPixmap>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QDebug>
#include <QSqlError>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>
#include <QProgressBar>
#include <QCategoryAxis>
#include <QBarSet>
#include <QBarSeries>
#include <QBarCategoryAxis>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QDateTime>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QKeyEvent>
#include <QVBoxLayout>
#include <QMediaPlayer>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSlice>
#include <QVideoWidget>
#include <QProcess>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <QPrinter>
#include <QPageSize>
#include <QMargins>
#include <QScreen>
#include <QMainWindow>
#include <QPixmap>
#include <QLabel>
#include <QTextTable>
#include <QString>
#include <QTableWidget>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QTimer>
#include <QAudioOutput>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSlice>
#include <QColor>
#include <QGraphicsOpacityEffect>
#include <QInputDialog>





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),


    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn_supprimer_2, &QPushButton::clicked, this, &MainWindow::on_btn_supprimer_2_clicked);
    ui->tab_pieces_de_rechange->setModel(pr.afficherPieces());
    connect(ui->button_tri, &QPushButton::clicked, this, &MainWindow::on_button_tri_clicked);
    ui->tab_pieces_de_rechange->setModel(pr.afficherPieces());
    ui->tab_pieces_de_rechange->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tab_pieces_de_rechange->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Modifier le style de combo_tri (QComboBox pour choisir l'ordre de tri)

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::validateInputs()
{

    if (ui->fill_id->text().isEmpty() || ui->fill_id->text().toInt() <= 0) {
        QMessageBox warningBox7;
        warningBox7.setWindowTitle(tr("Erreur de saisie"));
        warningBox7.setText(tr("Veuillez entrer un ID valide (positif)."));
        warningBox7.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        warningBox7.exec();
        return false;
    }


    if (ui->fill_nom->text().isEmpty() || !isValidText(ui->fill_nom->text())) {
        QMessageBox warningBox6;
        warningBox6.setWindowTitle(tr("Erreur de saisie"));
        warningBox6.setText(tr("Le nom de la pièce ne peut contenir que des lettres."));
        warningBox6.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        warningBox6.exec();
        return false;
    }


    if (ui->fill_produit->text().isEmpty() || !isValidText(ui->fill_produit->text())) {
        QMessageBox warningBox5;
        warningBox5.setWindowTitle(tr("Erreur de saisie"));
        warningBox5.setText(tr("Les détails de la pièce ne peuvent contenir que des lettres."));
        warningBox5.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"  // Light blue button color
            );
        warningBox5.exec();
        return false;
    }


    if (ui->fill_type->currentText().isEmpty()) {
        QMessageBox warningBox4;
        warningBox4.setWindowTitle(tr("Erreur de saisie"));
        warningBox4.setText(tr("Veuillez sélectionner un type de pièce."));
        warningBox4.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        warningBox4.exec();
        return false;
    }


    if (ui->fill_cout->text().isEmpty() || ui->fill_cout->text().toDouble() <= 0) {
        QMessageBox warningBox3;
        warningBox3.setWindowTitle(tr("Erreur de saisie"));
        warningBox3.setText(tr("Veuillez entrer un prix valide (positif)."));
        warningBox3.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        warningBox3.exec();
        return false;
    }


    if (ui->fill_quanite->text().isEmpty() || ui->fill_quanite->text().toInt() <= 0) {
        QMessageBox warningBox2;
        warningBox2.setWindowTitle(tr("Erreur de saisie"));
        warningBox2.setText(tr("Veuillez entrer une quantité valide (positive)."));
        warningBox2.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        warningBox2.exec();
        return false;
    }


    if (ui->fill_infos->text().isEmpty() || !isValidText(ui->fill_infos->text())) {
        QMessageBox warningBox1;
        warningBox1.setWindowTitle(tr("Erreur de saisie"));
        warningBox1.setText(tr("Les informations ne peuvent contenir que des lettres."));
        warningBox1.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        warningBox1.exec();
        return false;
    }
    // Vérification pour le bouton de recherche
    if (ui->btn_rechercher->isDown()) {
        if (ui->lineEdit_valeurRecherche->text().isEmpty()) {
            QMessageBox warningBox;
            warningBox.setWindowTitle(tr("Erreur de saisie"));
            warningBox.setText(tr("Veuillez entrer une valeur pour la recherche."));
            warningBox.setStyleSheet(
                "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Fond bleu clair
                "QLabel { color: #000000; font-size: 16px; padding: 10px; }"  // Texte noir, taille 16px
                "QPushButton { background-color: #6495ed; color: white; border: none; padding: 10px 20px; font-size: 14px; }"
                "QPushButton:pressed { background-color: #4169e1; }"  // Bouton bleu foncé au clic
                );
            warningBox.exec();
            return false; // Arrête le processus si le champ est vide
        }
    }




    return true;

}

bool MainWindow::isValidText(const QString &text)
{

    QRegularExpression regex("^[a-zA-Z ]+$");
    QRegularExpressionMatch match = regex.match(text);
    return match.hasMatch();
}

void MainWindow::on_btn_ajouter_clicked()
{
    if (!validateInputs()) return;

    int id = ui->fill_id->text().toInt();
    QString nom = ui->fill_nom->text();
    QString details = ui->fill_produit->text();
    QString type = ui->fill_type->currentText();
    double prix = ui->fill_cout->text().toDouble();
    int quantites = ui->fill_quanite->text().toInt();
    QString info = ui->fill_infos->text();

    PieceRechange piece(id, nom, details, type, prix, quantites, info);
    bool success = piece.ajouterPiece();
    if (success) {
        QMessageBox infoBox1;
        infoBox1.setWindowTitle(tr("Ajout effectué"));
        infoBox1.setText(tr("La pièce de rechange a été ajoutée avec succès."));
        infoBox1.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        infoBox1.exec();
        ui->fill_id->clear();
        ui->fill_nom->clear();
        ui->fill_produit->clear();
        ui->fill_type->setCurrentIndex(0);
        ui->fill_cout->clear();
        ui->fill_quanite->clear();
        ui->fill_infos->clear();
    } else {
        QMessageBox criticalBox1;
        criticalBox1.setWindowTitle(tr("Erreur"));
        criticalBox1.setText(tr("L'ajout de la pièce de rechange a échoué."));
        criticalBox1.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        criticalBox1.exec();
    }
    ui->tab_pieces_de_rechange->setModel(piece.afficherPieces());
}

void MainWindow::on_btn_supprimer_clicked()
{
    int id = ui->lineEdit_ID->text().toInt();

    PieceRechange piece;
    bool success = piece.supprimerPiece(id);
    if (success) {

        QMessageBox infoBox2;
        infoBox2.setWindowTitle(tr("Suppression effectuée"));
        infoBox2.setText(tr("La pièce de rechange a été supprimée avec succès."));
        infoBox2.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        infoBox2.exec();

        ui->tab_pieces_de_rechange->setModel(piece.afficherPieces());
        ui->fill_id->clear();
        ui->fill_nom->clear();
        ui->fill_produit->clear();
        ui->fill_type->setCurrentIndex(0);
        ui->fill_cout->clear();
        ui->fill_quanite->clear();
        ui->fill_infos->clear();
    } else {

        QMessageBox criticalBox3;
        criticalBox3.setWindowTitle(tr("Erreur"));
        criticalBox3.setText(tr("La suppression de la pièce de rechange a échoué."));
        criticalBox3.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        criticalBox3.exec();

    }
}

void MainWindow::on_btn_modifier_clicked()
{
    if (!validateInputs()) return;

    int id = ui->fill_id->text().toInt();
    QString nom = ui->fill_nom->text();
    QString details = ui->fill_produit->text();
    QString type = ui->fill_type->currentText();
    double prix = ui->fill_cout->text().toDouble();
    int quantites = ui->fill_quanite->text().toInt();
    QString info = ui->fill_infos->text();

    PieceRechange piece(id, nom, details, type, prix, quantites, info);
    bool success = piece.modifierPiece(id, nom, details, type, prix, quantites, info);
    if (success) {

        QMessageBox infoBox1;
        infoBox1.setWindowTitle(tr("Modification effectuée"));
        infoBox1.setText(tr("La pièce de rechange a été modifiée avec succès."));
        infoBox1.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        infoBox1.exec();

        ui->fill_id->clear();
        ui->fill_nom->clear();
        ui->fill_produit->clear();
        ui->fill_type->setCurrentIndex(0);
        ui->fill_cout->clear();
        ui->fill_quanite->clear();
        ui->fill_infos->clear();

    } else {

        QMessageBox criticalBox2;
        criticalBox2.setWindowTitle(tr("Erreur"));
        criticalBox2.setText(tr("La modification de la pièce de rechange a échoué."));
        criticalBox2.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        criticalBox2.exec();

    }
    ui->tab_pieces_de_rechange->setModel(piece.afficherPieces());
}


void MainWindow::on_tab_pieces_de_rechange_clicked(const QModelIndex &index)
{

    int row = index.row();


    QModelIndex idIndex = ui->tab_pieces_de_rechange->model()->index(row, 0);
    QModelIndex idIndexSupp = ui->tab_pieces_de_rechange->model()->index(row, 0);
    QModelIndex nomIndex = ui->tab_pieces_de_rechange->model()->index(row, 1);
    QModelIndex detailsIndex = ui->tab_pieces_de_rechange->model()->index(row, 2);
    QModelIndex typeIndex = ui->tab_pieces_de_rechange->model()->index(row, 3);
    QModelIndex prixIndex = ui->tab_pieces_de_rechange->model()->index(row, 4);
    QModelIndex quantiteIndex = ui->tab_pieces_de_rechange->model()->index(row, 5);
    QModelIndex infoIndex = ui->tab_pieces_de_rechange->model()->index(row, 6);


    int id = ui->tab_pieces_de_rechange->model()->data(idIndex).toInt();
    int idSupp = ui->tab_pieces_de_rechange->model()->data(idIndexSupp).toInt();
    QString nom = ui->tab_pieces_de_rechange->model()->data(nomIndex).toString();
    QString details = ui->tab_pieces_de_rechange->model()->data(detailsIndex).toString();
    QString type = ui->tab_pieces_de_rechange->model()->data(typeIndex).toString();
    double prix = ui->tab_pieces_de_rechange->model()->data(prixIndex).toDouble();
    int quantite = ui->tab_pieces_de_rechange->model()->data(quantiteIndex).toInt();
    QString info = ui->tab_pieces_de_rechange->model()->data(infoIndex).toString();


    ui->fill_id->setText(QString::number(idSupp));
    ui->lineEdit_ID->setText(QString::number(id));
    ui->fill_nom->setText(nom);
    ui->fill_produit->setText(details);
    ui->fill_type->setCurrentText(type);
    ui->fill_cout->setText(QString::number(prix));
    ui->fill_quanite->setText(QString::number(quantite));
    ui->fill_infos->setText(info);


    ui->btn_ajouter->setEnabled(true);
    ui->btn_modifier->setEnabled(true);
    ui->btn_supprimer->setEnabled(true);
}



void MainWindow::on_btn_supprimer_2_clicked()
{
    PieceRechange piece;
    ui->tab_pieces_de_rechange->setModel(piece.afficherPieces());

}
void MainWindow::on_btn_rechercher_clicked()
{
    QString critere = ui->combo_critere->currentText();
    QString valeur = ui->lineEdit_valeurRecherche->text();

    ui->tab_pieces_de_rechange->setModel(pr.rechercherPieces(critere, valeur));
}
void MainWindow::on_button_tri_clicked()
{
    // Récupérer le critère et l'ordre choisis dans les comboBox
    QString critere = ui->combo_critere_tri->currentText();  // Critère de tri
    QString ordre = ui->combo_tri->currentText();  // Ordre de tri (ascendant ou descendant)

    // Debugging - Vérifier les valeurs récupérées
    qDebug() << "Critère choisi : " << critere;
    qDebug() << "Ordre choisi : " << ordre;

    // Appeler la méthode de tri avec les deux paramètres
    QSqlQueryModel *model = pr.trierPieces(critere, ordre);

    // Vérifier si la requête a retourné des résultats
    if (model && model->rowCount() > 0) {
        ui->tab_pieces_de_rechange->setModel(model);
        qDebug() << "Tableau trié avec succès.";
    } else {
        // Afficher un message d'erreur si aucune donnée n'a été trouvée ou en cas d'erreur
        QMessageBox criticalBox1;
        criticalBox1.setWindowTitle("Erreur");
        criticalBox1.setText("Erreur lors du tri des données ou aucune donnée disponible.");
        criticalBox1.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        criticalBox1.exec();

        qDebug() << "Erreur lors du tri ou aucune donnée trouvée.";
    }
}


void MainWindow::on_btn_gestion_stocks_clicked() {
    // Création d'un QDialog personnalisé pour la saisie de l'IDP
    QDialog inputDialog(this);
    inputDialog.setWindowTitle("Recherche produit");
    inputDialog.setStyleSheet("background-color: #add8e6;");

    QVBoxLayout *layout = new QVBoxLayout(&inputDialog);

    QLabel *label = new QLabel("Veuillez entrer l'IDP du produit :", &inputDialog);
    label->setStyleSheet("color: #000000; font-size: 16px; padding: 10px;");
    layout->addWidget(label);

    QLineEdit *lineEdit = new QLineEdit(&inputDialog);
    lineEdit->setStyleSheet(
        "background-color: #ffffff; color: #000000; border: 1px solid #6495ed; border-radius: 5px; padding: 5px; font-size: 14px;"
        );
    layout->addWidget(lineEdit);

    QHBoxLayout *buttonLayout = new QHBoxLayout();

    QPushButton *btnOk = new QPushButton("Valider", &inputDialog);
    btnOk->setStyleSheet(
        "background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; border-radius: 5px;"
        "QPushButton:pressed { background-color: #4169e1; }"
        );
    buttonLayout->addWidget(btnOk);

    QPushButton *btnCancel = new QPushButton("Annuler", &inputDialog);
    btnCancel->setStyleSheet(
        "background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; border-radius: 5px;"
        "QPushButton:pressed { background-color: #4169e1; }"
        );
    buttonLayout->addWidget(btnCancel);

    layout->addLayout(buttonLayout);

    QObject::connect(btnCancel, &QPushButton::clicked, &inputDialog, &QDialog::reject);
    QObject::connect(btnOk, &QPushButton::clicked, [&]() {
        if (!lineEdit->text().isEmpty()) {
            inputDialog.accept();
        } else {
            QMessageBox warningBox;
            warningBox.setWindowTitle("Erreur");
            warningBox.setText("L'IDP ne peut pas être vide.");
            warningBox.setStyleSheet(
                "QMessageBox { background-color: #add8e6; padding: 20px; }"
                "QLabel { color: #000000; font-size: 16px; padding: 10px; }"
                "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; }"
                "QPushButton:pressed { background-color: #4169e1; }"
                );
            warningBox.exec();
        }
    });

    if (inputDialog.exec() == QDialog::Accepted) {
        QString idp = lineEdit->text();

        // Recherche dans le tableau en fonction de l'IDP
        QAbstractItemModel *model = ui->tab_pieces_de_rechange->model();
        QModelIndexList matches = model->match(model->index(0, 0), Qt::DisplayRole, idp, 1, Qt::MatchExactly);

        if (matches.isEmpty()) {
            QMessageBox warningBox;
            warningBox.setWindowTitle("Produit introuvable");
            warningBox.setText("Aucun produit trouvé avec l'IDP spécifié.");
            warningBox.setStyleSheet(
                "QMessageBox { background-color: #add8e6; padding: 20px; }"
                "QLabel { color: #000000; font-size: 16px; padding: 10px; }"
                "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; }"
                "QPushButton:pressed { background-color: #4169e1; }"
                );
            warningBox.exec();
            return;
        }

        // Récupération de la ligne correspondant à l'IDP
        int row = matches.first().row();
        QString quantiteStr = model->index(row, 5).data().toString();
        int quantite = quantiteStr.toInt();

        if (quantite < 60) {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Alerte de réapprovisionnement");
            msgBox.setText("La quantité de ce produit est faible. Réapprovisionnement nécessaire.");
            msgBox.setStyleSheet(
                "QMessageBox { background-color: #add8e6; padding: 20px; }"
                "QLabel { color: #000000; font-size: 16px; padding: 10px; }"
                "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; }"
                "QPushButton:pressed { background-color: #4169e1; }"
                );
            msgBox.setStandardButtons(QMessageBox::NoButton);

            QPushButton *btnCommander = new QPushButton("Commander", &msgBox);
            btnCommander->setStyleSheet(
                "background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; border-radius: 5px;"
                );
            msgBox.addButton(btnCommander, QMessageBox::ActionRole);

            QObject::connect(btnCommander, &QPushButton::clicked, this, [=, &msgBox]() {
                msgBox.close();

                QDialog dialog(this);
                dialog.setWindowTitle("Commande");
                dialog.setFixedSize(300, 200);
                dialog.setStyleSheet("background-color: #add8e6;");

                QVBoxLayout *layout = new QVBoxLayout(&dialog);

                QLabel *label = new QLabel("Choisissez la quantité à commander :", &dialog);
                label->setStyleSheet("color: #000000; font-size: 16px; margin-bottom: 10px;");
                layout->addWidget(label);

                QSlider *slider = new QSlider(Qt::Horizontal, &dialog);
                slider->setRange(10, 300);
                slider->setTickInterval(10);
                slider->setTickPosition(QSlider::TicksBelow);
                layout->addWidget(slider);

                QLabel *valueLabel = new QLabel("Quantité : 10", &dialog);
                valueLabel->setStyleSheet("color: #000000; font-size: 14px;");
                layout->addWidget(valueLabel);

                QObject::connect(slider, &QSlider::valueChanged, [&valueLabel](int value) {
                    valueLabel->setText(QString("Quantité : %1").arg(value));
                });

                QPushButton *btnConfirmer = new QPushButton("Confirmer", &dialog);
                btnConfirmer->setStyleSheet(
                    "background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; border-radius: 5px;"
                    );
                layout->addWidget(btnConfirmer);

                QObject::connect(btnConfirmer, &QPushButton::clicked, [&]() {
                    int quantiteAjoutee = slider->value();
                    int nouvelleQuantite = quantite + quantiteAjoutee;

                    // Mettre à jour le tableau avec la nouvelle quantité
                    model->setData(model->index(row, 5), nouvelleQuantite);
                    model->submit();

                    QMessageBox infoBox;
                    infoBox.setWindowTitle("Commande confirmée");
                    infoBox.setText(QString("Commande ajoutée avec succès.\nNouvelle quantité : %1").arg(nouvelleQuantite));
                    infoBox.setStyleSheet(
                        "QMessageBox { background-color: #add8e6; padding: 20px; }"
                        "QLabel { color: #000000; font-size: 16px; padding: 10px; }"
                        "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; }"
                        "QPushButton:pressed { background-color: #4169e1; }"
                        );
                    infoBox.exec();

                    dialog.accept();
                });

                dialog.exec();
            });

            msgBox.exec();
        } else {
            QMessageBox infoBox;
            infoBox.setWindowTitle("Stock suffisant");
            infoBox.setText("Le stock de ce produit est suffisant.");
            infoBox.setStyleSheet(
                "QMessageBox { background-color: #add8e6; padding: 20px; }"
                "QLabel { color: #000000; font-size: 16px; padding: 10px; }"
                "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; font-size: 14px; border-radius: 5px; }"
                "QPushButton:pressed { background-color: #4169e1; }"
                );
            infoBox.exec();
        }
    }
}




void MainWindow::on_btn_statistiques_clicked()
{
    // Créer une nouvelle boîte de dialogue pour les statistiques
    QDialog *chartDialog = new QDialog(this);
    chartDialog->setWindowTitle("Statistiques des quantités");

    // Créer une série de barres
    QBarSeries *series = new QBarSeries();

    // Définir les types de pièces (c'est-à-dire les catégories)
    QStringList types = {"Pieces moteur", "Electrique", "Carburant", "Propulsion", "Refroidissement", "Hydrauliques"};

    // Liste des quantités Y à récupérer depuis la base de données
    QList<int> quantities;

    // Récupérer les quantités de la base de données pour chaque type de pièce
    for (const QString &type : types) {
        // Initialiser la quantité à 0
        int quantite = 0;

        // Requête pour obtenir la somme des quantités pour chaque type de pièce
        QSqlQuery query;
        query.prepare("SELECT SUM(QUANTITÉS) FROM PIECE_RECHANGE WHERE TYPE_DE_PIECES = :type");
        query.bindValue(":type", type);

        if (query.exec() && query.next()) {
            quantite = query.value(0).toInt(); // Récupérer la quantité depuis la base de données
        }

        // Ajouter la quantité récupérée à la liste de quantités
        quantities.append(quantite);
    }

    // Créer un QBarSet unique pour toutes les catégories
    QBarSet *set = new QBarSet("Quantités");

    // Ajouter chaque quantité au QBarSet (cela va créer une barre pour chaque type de pièce)
    for (int i = 0; i < types.size(); ++i) {
        *set << quantities[i];  // Assigner la quantité Y pour chaque catégorie
    }

    // Ajouter le set à la série
    series->append(set);

    // Créer un graphique et y ajouter la série
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Quantités par type de pièces");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Configurer l'axe X avec les types (qui sont les catégories)
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(types);  // Ajouter les types comme catégories X
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Configurer l'axe Y avec une plage dynamique
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Quantités");
    axisY->setRange(0, 300); // Ajustez la plage en fonction des besoins
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    set->setColor(QColor("black"));

    // Ajouter une légende
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignTop);

    // Afficher le graphique dans une vue
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Ajouter le graphique à la boîte de dialogue
    QVBoxLayout *layout = new QVBoxLayout(chartDialog);
    layout->addWidget(chartView);

    // Ajuster la taille de la boîte de dialogue à l'écran
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();

    int width = qMin(850, screenWidth - 100);
    int height = qMin(650, screenHeight - 100);

    chartDialog->resize(width, height);
    chartDialog->move((screenWidth - width) / 2, (screenHeight - height) / 2);

    // Afficher la boîte de dialogue
    chartDialog->exec();
}

void MainWindow::on_btn_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save PDF"), "", tr("PDF Files (*.pdf);;All Files (*)"));
    if (fileName.isEmpty()) {
        QMessageBox warningBox1;
        warningBox1.setWindowTitle(tr("Annulé"));
        warningBox1.setText(tr("Aucun fichier n'a été sélectionné."));
        warningBox1.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        warningBox1.exec();
        return;
    }

    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize::A4);
    pdfWriter.setPageMargins(QMargins(50, 50, 50, 50));
    QPainter painter(&pdfWriter);

    int pageWidth = pdfWriter.width();
    int pageHeight = pdfWriter.height();

    QColor blackColor(0, 0, 0);  // Set black color

    QFont titleFont("Helvetica", 18, QFont::Bold);
    painter.setFont(titleFont);
    painter.setPen(blackColor);  // Title color set to black

    QString titleText = "Statistiques des Pièces de Rechange";
    QFontMetrics metrics(titleFont);
    int titleX = 100;
    int titleY = 1000;
    painter.drawText(titleX, titleY, titleText);

    QFont dateFont("Helvetica", 16);
    dateFont.setItalic(true);
    painter.setFont(dateFont);
    painter.setPen(blackColor);  // Date text color set to black

    QString dateText = tr("Date d'exportation : ") + QDateTime::currentDateTime().toString("dd/MM/yyyy");
    int dateX = metrics.horizontalAdvance(dateText);
    int dateY = 60;
    painter.drawText(dateX, dateY, dateText);

    int lineY = titleY + 30;
    QPen pen(blackColor);  // Line color set to black
    pen.setWidth(3);
    painter.setPen(pen);
    painter.drawLine(50, lineY, pageWidth - 50, lineY);
    lineY += 30;

    QBarSet *set = new QBarSet("Quantités");
    set->setColor(blackColor);  // Set bar color to black

    QSqlQuery query;
    query.prepare("SELECT TYPE_DE_PIECES, SUM(QUANTITÉS) FROM PIECE_RECHANGE GROUP BY TYPE_DE_PIECES");

    if (!query.exec()) {
        QMessageBox criticalBox1;
        criticalBox1.setWindowTitle(tr("Erreur SQL"));
        criticalBox1.setText(tr("Impossible d'exécuter la requête : %1").arg(query.lastError().text()));
        criticalBox1.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        criticalBox1.exec();
        return;
    }

    QStringList categories;

    while (query.next()) {
        QString type_piece = query.value(0).toString();
        int quantity = query.value(1).toInt();

        categories << type_piece;
        *set << quantity;
    }

    double maxValue = 0;
    for (int i = 0; i < set->count(); ++i) {
        double value = set->at(i);
        if (value > maxValue) {
            maxValue = value;
        }
    }

    QBarSeries *series = new QBarSeries();
    series->append(set);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Quantités par type de pièces");
    chart->setTitleFont(QFont("Helvetica", 16, QFont::Bold));
    chart->setTitleBrush(QBrush(blackColor));  // Chart title color set to black
    chart->setBackgroundBrush(QColor(240, 240, 240));  // Set background color for the chart

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, maxValue);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Axis labels color (set to black)
    axisX->setLabelsColor(blackColor);
    axisY->setLabelsColor(blackColor);

    // Set black color for all other chart elements like lines and grid
    QPen gridPen(blackColor);
    gridPen.setStyle(Qt::DashLine);
    chart->axisX()->setGridLinePen(gridPen);
    chart->axisY()->setGridLinePen(gridPen);

    QChartView chartView(chart);
    chartView.setRenderHint(QPainter::Antialiasing);

    QPixmap chartPixmap = chartView.grab().scaled(pageWidth - 100, pageHeight - 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    QImage chartImage = chartPixmap.toImage();

    int chartX = (pageWidth - chartPixmap.width());
    int chartY = lineY + 50;
    QRect chartRect(chartX, chartY, chartPixmap.width(), chartPixmap.height());
    painter.drawImage(chartRect, chartImage);

    QString noteText = tr(" ");
    QFont noteFont("Helvetica", 14, QFont::Bold);
    painter.setFont(noteFont);
    painter.setPen(blackColor);  // Set note text color to black

    int noteX = 50;
    int noteY = chartY + chartPixmap.height() + 50;
    painter.drawText(noteX, noteY, noteText);

    painter.end();

    QMessageBox infoBox1;
    infoBox1.setWindowTitle(tr("PDF Exporté"));
    infoBox1.setText(tr("Le fichier PDF a été exporté avec succès."));
    infoBox1.setStyleSheet(
        "QMessageBox { background-color: #add8e6; }"  // Light blue background
        "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
        "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
        "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
        "QLabel { color: #000000; font-size: 16px; padding: 10px; }"        // Light blue button color
        );
    infoBox1.exec();
}


void MainWindow::on_btn_evaluation_clicked()
{
    QModelIndexList selectedRows = ui->tab_pieces_de_rechange->selectionModel()->selectedRows();
    if (selectedRows.isEmpty()) {
        QMessageBox warningBox2;
        warningBox2.setWindowTitle("Avertissement");
        warningBox2.setText("Veuillez sélectionner un produit dans le tableau.");
        warningBox2.setStyleSheet(
            "QMessageBox { background-color: #add8e6; }"  // Light blue background
            "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
            "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"
            "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
            "QLabel { color: #000000; font-size: 16px; padding: 10px; }"            // Light blue button color
            );
        warningBox2.exec();
        return;
    }

    int row = selectedRows.first().row();
    QAbstractItemModel *model = ui->tab_pieces_de_rechange->model();

    int id = model->data(model->index(row, 0)).toInt();
    QString nom = model->data(model->index(row, 1)).toString();
    QString details = model->data(model->index(row, 2)).toString();
    QString type = model->data(model->index(row, 3)).toString();
    double prix = model->data(model->index(row, 4)).toDouble();
    int quantites = model->data(model->index(row, 5)).toInt();
    QString info = model->data(model->index(row, 6)).toString();

    PieceRechange piece(id, nom, details, type, prix, quantites, info);

    QString evaluation = piece.evaluerImpactEnvironnemental();
    int score = piece.calculerScoreImpact();
    evaluation += QString("\nScore d'Impact Environnemental : %1/10").arg(score);

    QString comparaison = comparerImpactEnvironnemental(piece);
    evaluation += "\n" + comparaison;

    // Créer le message box
    QMessageBox messageBox;
    messageBox.setWindowTitle("Évaluation de l'Impact Environnemental");
    messageBox.setText(evaluation);

    // Ajouter le bouton "Afficher Graphique"
    QPushButton *btnGraphique = messageBox.addButton("Afficher Graphique", QMessageBox::ActionRole);
    messageBox.addButton(QMessageBox::Close); // Le bouton Fermer par défaut

    // Appliquer le style à tous les éléments du message box, y compris les boutons
    messageBox.setStyleSheet(
        "QMessageBox { background-color: #add8e6; }"  // Light blue background
        "QLabel { color: #000000; font-size: 14px; }"   // Black text color for label
        "QPushButton { background-color: #6495ed; color: white; border: none; padding: 5px; }"  // Style for the buttons
        "QPushButton:pressed { background-color: #4169e1; }"
        "QMessageBox { background-color: #add8e6; padding: 20px; }"  // Augmente le padding global
        "QLabel { color: #000000; font-size: 16px; padding: 10px; }"        // Darker blue when pressed
        );

    // Exécuter le message box
    messageBox.exec();

    // Vérifier si le bouton "Afficher Graphique" a été cliqué
    if (messageBox.clickedButton() == btnGraphique) {
        QAbstractItemModel *modelAll = ui->tab_pieces_de_rechange->model();
        int meilleurScore = 10;
        PieceRechange meilleurPiece;

        for (int i = 0; i < modelAll->rowCount(); ++i) {
            int otherId = modelAll->data(modelAll->index(i, 0)).toInt();
            QString otherNom = modelAll->data(modelAll->index(i, 1)).toString();
            QString otherType = modelAll->data(modelAll->index(i, 3)).toString();
            double otherPrix = modelAll->data(modelAll->index(i, 4)).toDouble();
            int otherQuantites = modelAll->data(modelAll->index(i, 5)).toInt();
            QString otherInfo = modelAll->data(modelAll->index(i, 6)).toString();

            PieceRechange autrePiece(otherId, otherNom, "", otherType, otherPrix, otherQuantites, otherInfo);
            int score = autrePiece.calculerScoreImpact();

            if (score < meilleurScore) {
                meilleurScore = score;
                meilleurPiece = autrePiece;
            }
        }

        afficherGraphique(piece, meilleurPiece);
    }
}


void MainWindow::afficherGraphique(const PieceRechange &pieceSelectionnee, const PieceRechange &meilleurPiece)
{
    QLineSeries *serieSelectionnee = new QLineSeries();
    QLineSeries *serieMeilleur = new QLineSeries();

    serieSelectionnee->setName("Produit Sélectionné");
    serieMeilleur->setName("Produit Avec Impact Plus Bas");

    for (int i = 1; i <= 10; ++i) {
        double scoreSelectionne = pieceSelectionnee.calculerScoreImpactAvecVariation(i);
        double scoreMeilleur = meilleurPiece.calculerScoreImpactAvecVariation(i);

        serieSelectionnee->append(i, scoreSelectionne);
        serieMeilleur->append(i, scoreMeilleur);
    }

    QChart *chart = new QChart();
    chart->addSeries(serieSelectionnee);
    chart->addSeries(serieMeilleur);
    chart->setTitle("Comparaison des Impacts Environnementaux");
    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setTitleText("Temps (unités arbitraires)");
    chart->axes(Qt::Vertical).first()->setTitleText("Score d'Impact");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(800, 600);
    chartView->show();
}

QString MainWindow::comparerImpactEnvironnemental(const PieceRechange &piece)
{
    QAbstractItemModel *model = ui->tab_pieces_de_rechange->model();
    int meilleurScore = 10;
    QString meilleurProduit;

    for (int i = 0; i < model->rowCount(); ++i) {
        int id = model->data(model->index(i, 0)).toInt();
        QString nom = model->data(model->index(i, 1)).toString();
        QString type = model->data(model->index(i, 3)).toString();
        double prix = model->data(model->index(i, 4)).toDouble();
        int quantites = model->data(model->index(i, 5)).toInt();
        QString info = model->data(model->index(i, 6)).toString();

        PieceRechange autrePiece(id, nom, "", type, prix, quantites, info);
        int score = autrePiece.calculerScoreImpact();

        if (score < meilleurScore) {
            meilleurScore = score;
            meilleurProduit = nom;
        }
    }

    return QString("Le produit ayant l'impact le plus faible est : %1 avec un score de %2/10.")
        .arg(meilleurProduit)
        .arg(meilleurScore);
}
void MainWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        close(); // Fermer la fenêtre si la touche Échap est pressée
    }
    QMainWindow::keyPressEvent(event);  // Appeler la méthode de base pour gérer d'autres événements de touches
}
