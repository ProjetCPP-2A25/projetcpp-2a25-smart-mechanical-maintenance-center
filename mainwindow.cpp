#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPieSlice >
#include<QPieSeries>
#include <QFileDialog>
#include<QtCharts>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QDebug>
#include <QProgressBar>
#include <QString>
#include <QStringList>
#include <QByteArray>
#include <QDateTime>
#include <QMessageBox>
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

//***********
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
    if (ui->centralWidget->layout()) {
        ui->centralWidget->layout()->setContentsMargins(0, 0, 0, 0);
        ui->centralWidget->layout()->setSpacing(0);
    }

    // Mettre la fenêtre en plein écran
    this->setWindowFlags(Qt::FramelessWindowHint); // Supprimer les bordures
    this->showFullScreen();

    // Afficher la première page à l'ouverture
    // Configuration initiale du champ de mot de passe
    ui->PwLogin->setEchoMode(QLineEdit::Password);

    switchToPageByObjectName("page");

    // Connexions pour les pages
    // Page 3 : Gestion des boutons pour accéder à d'autres pages
    connect(ui->fournisseur, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(6); // Aller vers fournisseur (page 2)
    });

    connect(ui->piecerechange, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(5); // Aller vers pièce de rechange (page 4)
    });
    connect(ui->profondeur, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // Aller vers pièce de rechange (page 4)
    });
    connect(ui->temphum, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(2); // Aller vers pièce de rechange (page 4)
    });
    connect(ui->employes, &QPushButton::clicked, this, [=]() {
        switchToPageByObjectName("page_9"); // Aller vers pièce de rechange (page 4)
    });
    connect(ui->clients, &QPushButton::clicked, this, [=]() {
        switchToPageByObjectName("page_2"); // Aller vers pièce de rechange (page 4)
    });

    // Boutons retour
    connect(ui->back, &QPushButton::clicked, this, [=]() {
        switchToPageByObjectName("page_4"); // Retour à la page 3 depuis clients (page 1)
    });
    connect(ui->back2, &QPushButton::clicked, this, [=]() {
        switchToPageByObjectName("page_4"); // Retour à la page 3 depuis fournisseur (page 2)
    });
    connect(ui->back3, &QPushButton::clicked, this, [=]() {
        switchToPageByObjectName("page_4"); // Retour à la page 3 depuis pièce de rechange (page 4)
    });
    connect(ui->back4, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(3); // Retour à la page 3 depuis pièce de rechange (page 4)
    });
    connect(ui->back5, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(3); // Retour à la page 3 depuis pièce de rechange (page 4)
    });
    connect(ui->back6, &QPushButton::clicked, this, [=]() {
        switchToPageByObjectName("page_4"); // Retour à la page 3 depuis pièce de rechange (page 4)
    });
    connect(ui->back8, &QPushButton::clicked, this, [=]() {
        switchToPageByObjectName("page_4"); // Retour à la page 3 depuis pièce de rechange (page 4)
    });
    connect(ui->btn_triangle, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(3); // Retour à la page 3 depuis pièce de rechange (page 4)
    });

    // Initialisation des données et connexions pour les différentes pages
    // *** Clients ***
    ui->tableViewc->setModel(c.afficher());
    connect(ui->pushButton_Confirmer, &QPushButton::clicked, this, &MainWindow::on_pushButton_Confirmer_clicked);
    connect(ui->bt_ajouter, &QPushButton::clicked, this, &MainWindow::on_bt_ajouter_clicked);
    connect(ui->bt_modifier, &QPushButton::clicked, this, &MainWindow::on_bt_modifier_clicked);
    connect(ui->bt_supprimer, &QPushButton::clicked, this, &MainWindow::on_bt_supprimer_clicked);
    connect(ui->btn_rechercher, &QPushButton::clicked, this, &MainWindow::on_btn_rechercher_clicked);
    connect(ui->button_tri, &QPushButton::clicked, this, &MainWindow::on_button_tri_clicked);
    connect(ui->Historic, &QPushButton::clicked, this, &MainWindow::on_Historic_clicked);
    connect(ui->stat_bateau, &QPushButton::clicked, this, &MainWindow::on_stat_bateau_clicked);
    connect(ui->btn_eye, &QPushButton::clicked, this, &MainWindow::on_btn_eye_clicked);


    // *** Fournisseurs ***
    ui->tableViewc->setModel(Ftmp.afficherf());
    connect(ui->pushButton_ajouter, &QPushButton::clicked, this, &MainWindow::on_pushButton_ajouter_clicked);
    connect(ui->Supprimer, &QPushButton::clicked, this, &MainWindow::on_Supprimer_clicked);
    connect(ui->pushButton_modifier, &QPushButton::clicked, this, &MainWindow::on_Modifier_clicked);
    connect(ui->pushButton_Afficher, &QPushButton::clicked, this, &MainWindow::on_Afficher_clicked);
    connect(ui->pushButton_rechercher, &QPushButton::clicked, this, &MainWindow::on_Rechercher_clicked);
    connect(ui->pushButton_sort, &QPushButton::clicked, this, &MainWindow::on_sortButton_clicked);
    connect(ui->notifier, &QPushButton::clicked, this, &MainWindow::on_pb_notfier_clicked);
    connect(ui->statButton, &QPushButton::clicked, this, &MainWindow::on_btn_statistiques_clicked);
    connect(ui->exporter, &QPushButton::clicked, this, &MainWindow::on_exporter_clicked);
    connect(ui->pushButton_Email, &QPushButton::clicked, this, &MainWindow::on_pushButton_sendEmail_clicked);
    connect(ui->tableView, &QTableView::clicked, this, &MainWindow::on_tableView_clicked);

    // *** Pièces de rechange ***
    ui->tab_pieces_de_rechange_2->setModel(pr.afficherPieces());
    ui->tab_pieces_de_rechange_2->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tab_pieces_de_rechange_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(ui->tab_pieces_de_rechange_2, &QTableView::clicked, this, &MainWindow::on_tab_pieces_de_rechange_2_clicked);
    connect(ui->btn_supprimerr2, &QPushButton::clicked, this, &MainWindow::on_btn_supprimerr2_clicked);
    connect(ui->button_trii, &QPushButton::clicked, this, &MainWindow::on_button_trii_clicked);
    connect(ui->btn_ajouterr, &QPushButton::clicked, this, &MainWindow::on_btn_ajouterr_clicked);
    connect(ui->btn_supprimerr, &QPushButton::clicked, this, &MainWindow::on_btn_supprimerr_clicked);
    connect(ui->btn_modifierr, &QPushButton::clicked, this, &MainWindow::on_btn_modifierr_clicked);
    connect(ui->btn_rechercherr, &QPushButton::clicked, this, &MainWindow::on_btn_rechercherr_clicked);
    connect(ui->btn_gestion_stockss, &QPushButton::clicked, this, &MainWindow::on_btn_gestion_stockss_clicked);
    connect(ui->btn_evaluationn, &QPushButton::clicked, this, &MainWindow::on_btn_evaluationn_clicked);
    connect(ui->btn_statistiques_2, &QPushButton::clicked, this, &MainWindow::on_btn_statistiques_2_clicked);
    connect(ui->btn_pdff, &QPushButton::clicked, this, &MainWindow::on_btn_pdff_clicked);
    int ret = A.connect_arduino();
    switch(ret) {
    case(0): qDebug() << "Arduino connecté sur :" << A.getarduino_port_name(); break;
    case(1): qDebug() << "Arduino trouvé mais pas connecté !"; break;
    case(-1): qDebug() << "Arduino introuvable."; break;
    }

    QObject::connect(A.getserial(), SIGNAL(readyRead()), this, SLOT(update_label()));
    connect(ui->fanButton, &QPushButton::clicked, this, &MainWindow::handle_fan_button);
    connect(ui->Histobutton, &QPushButton::clicked, this, &MainWindow::show_alert_history);
    int ret2 = a.connect_arduino2();
    switch(ret2) {
    case(0):
        qDebug() << "Arduino connecté sur :" << a.getarduino_port_name2();
        break;
    case(1):
        qDebug() << "Arduino trouvé mais pas connecté !";
        break;
    case(-1):
        qDebug() << "Arduino introuvable.";
        break;
    }

    // Connecter le signal "readyRead" au slot "update_label"
    QObject::connect(a.getserial2(), SIGNAL(readyRead()), this, SLOT(update_label2()));
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
    if ((email == "ikram.soula@esprit.tn" && mot_de_passe == "ayser") ||
        (email == "islem.souid@esprit.tn" && mot_de_passe == "islem") ||
        (email == "melek.moalla@esprit.tn" && mot_de_passe == "melek") ||
        (email == "mohamed.marzougui@esprit.tn" && mot_de_passe == "mohamed") ||
        (email == "aziz.marzougui@esprit.tn" && mot_de_passe == "aziz")) {

        isAuthenticated = true; // Définir le drapeau d'authentification

        // Mettre à jour la label "welcome" avec un message personnalisé
        if (isAuthenticated) {
            QString name;
            if (email == "ikram.soula@esprit.tn") {
                name = "Ikram !";
            } else if (email == "islem.souid@esprit.tn") {
                name = "Islem !";
            } else if (email == "melek.moalla@esprit.tn") {
                name = "Melek !";
            } else if (email == "mohamed.marzougui@esprit.tn") {
                name = "Mohamed !";
            } else if (email == "aziz.marzougui@esprit.tn") {
                name = "Aziz !";
            }
            startTextAnimation("Welcome " + name);
            switchToPageByObjectName("page_4");
        }
         // Change to the first tab (index 7)
     else {
        QMessageBox::warning(this, "Échec de la connexion", "Email ou mot de passe invalide. Veuillez réessayer.");
    }
}
}
void MainWindow::on_btn_eye_clicked() {
    if (isPasswordVisible) {
        ui->PwLogin->setEchoMode(QLineEdit::Password); // Masquer les caractères
        isPasswordVisible = false;
    } else {
        ui->PwLogin->setEchoMode(QLineEdit::Normal); // Afficher les caractères
        isPasswordVisible = true;
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
bool MainWindow::validateInputs()
{

    if (ui->fill_id_2->text().isEmpty() || ui->fill_id_2->text().toInt() <= 0) {
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


    if (ui->fill_nom_2->text().isEmpty() || !isValidText(ui->fill_nom_2->text())) {
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


    if (ui->fill_produit_2->text().isEmpty() || !isValidText(ui->fill_produit_2->text())) {
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


    if (ui->fill_type_2->currentText().isEmpty()) {
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


    if (ui->fill_cout_2->text().isEmpty() || ui->fill_cout_2->text().toDouble() <= 0) {
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


    if (ui->fill_quanite_2->text().isEmpty() || ui->fill_quanite_2->text().toInt() <= 0) {
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


    if (ui->fill_infos_2->text().isEmpty() || !isValidText(ui->fill_infos_2->text())) {
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

void MainWindow::on_btn_ajouterr_clicked()
{
    if (!validateInputs()) return;

    int id = ui->fill_id_2->text().toInt();
    QString nom = ui->fill_nom_2->text();
    QString details = ui->fill_produit_2->text();
    QString type = ui->fill_type_2->currentText();
    double prix = ui->fill_cout_2->text().toDouble();
    int quantites = ui->fill_quanite_2->text().toInt();
    QString info = ui->fill_infos_2->text();

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
        ui->fill_id_2->clear();
        ui->fill_nom_2->clear();
        ui->fill_produit_2->clear();
        ui->fill_type_2->setCurrentIndex(0);
        ui->fill_cout_2->clear();
        ui->fill_quanite_2->clear();
        ui->fill_infos_2->clear();
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
    ui->tab_pieces_de_rechange_2->setModel(piece.afficherPieces());
}

void MainWindow::on_btn_supprimerr_clicked()
{
    int id = ui->lineEdit_ID_3->text().toInt();

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

        ui->tab_pieces_de_rechange_2->setModel(piece.afficherPieces());
        ui->fill_id_2->clear();
        ui->fill_nom_2->clear();
        ui->fill_produit_2->clear();
        ui->fill_type_2->setCurrentIndex(0);
        ui->fill_cout_2->clear();
        ui->fill_quanite_2->clear();
        ui->fill_infos_2->clear();
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

void MainWindow::on_btn_modifierr_clicked()
{
    if (!validateInputs()) return;

    int id = ui->fill_id_2->text().toInt();
    QString nom = ui->fill_nom_2->text();
    QString details = ui->fill_produit_2->text();
    QString type = ui->fill_type_2->currentText();
    double prix = ui->fill_cout_2->text().toDouble();
    int quantites = ui->fill_quanite_2->text().toInt();
    QString info = ui->fill_infos_2->text();

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

        ui->fill_id_2->clear();
        ui->fill_nom_2->clear();
        ui->fill_produit_2->clear();
        ui->fill_type_2->setCurrentIndex(0);
        ui->fill_cout_2->clear();
        ui->fill_quanite_2->clear();
        ui->fill_infos_2->clear();

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
    ui->tab_pieces_de_rechange_2->setModel(piece.afficherPieces());
}


void MainWindow::on_tab_pieces_de_rechange_2_clicked(const QModelIndex &index)
{

    int row = index.row();


    QModelIndex idIndex = ui->tab_pieces_de_rechange_2->model()->index(row, 0);
    QModelIndex idIndexSupp = ui->tab_pieces_de_rechange_2->model()->index(row, 0);
    QModelIndex nomIndex = ui->tab_pieces_de_rechange_2->model()->index(row, 1);
    QModelIndex detailsIndex = ui->tab_pieces_de_rechange_2->model()->index(row, 2);
    QModelIndex typeIndex = ui->tab_pieces_de_rechange_2->model()->index(row, 3);
    QModelIndex prixIndex = ui->tab_pieces_de_rechange_2->model()->index(row, 4);
    QModelIndex quantiteIndex = ui->tab_pieces_de_rechange_2->model()->index(row, 5);
    QModelIndex infoIndex = ui->tab_pieces_de_rechange_2->model()->index(row, 6);


    int id = ui->tab_pieces_de_rechange_2->model()->data(idIndex).toInt();
    int idSupp = ui->tab_pieces_de_rechange_2->model()->data(idIndexSupp).toInt();
    QString nom = ui->tab_pieces_de_rechange_2->model()->data(nomIndex).toString();
    QString details = ui->tab_pieces_de_rechange_2->model()->data(detailsIndex).toString();
    QString type = ui->tab_pieces_de_rechange_2->model()->data(typeIndex).toString();
    double prix = ui->tab_pieces_de_rechange_2->model()->data(prixIndex).toDouble();
    int quantite = ui->tab_pieces_de_rechange_2->model()->data(quantiteIndex).toInt();
    QString info = ui->tab_pieces_de_rechange_2->model()->data(infoIndex).toString();


    ui->fill_id_2->setText(QString::number(idSupp));
    ui->lineEdit_ID_3->setText(QString::number(id));
    ui->fill_nom_2->setText(nom);
    ui->fill_produit_2->setText(details);
    ui->fill_type_2->setCurrentText(type);
    ui->fill_cout_2->setText(QString::number(prix));
    ui->fill_quanite_2->setText(QString::number(quantite));
    ui->fill_infos_2->setText(info);


    ui->btn_ajouterr->setEnabled(true);
    ui->btn_modifierr->setEnabled(true);
    ui->btn_supprimerr->setEnabled(true);
}



void MainWindow::on_btn_supprimerr2_clicked()
{
    PieceRechange piece;
    ui->tab_pieces_de_rechange_2->setModel(piece.afficherPieces());

}
void MainWindow::on_btn_rechercherr_clicked()
{
    QString critere = ui->combo_critere_3->currentText();
    QString valeur = ui->lineEdit_valeurRecherche_3->text();

    ui->tab_pieces_de_rechange_2->setModel(pr.rechercherPieces(critere, valeur));
}
void MainWindow::on_button_trii_clicked()
{
    // Récupérer le critère et l'ordre choisis dans les comboBox
    QString critere = ui->combo_critere_tri_3->currentText();  // Critère de tri
    QString ordre = ui->combo_tri_2->currentText();  // Ordre de tri (ascendant ou descendant)

    // Debugging - Vérifier les valeurs récupérées
    qDebug() << "Critère choisi : " << critere;
    qDebug() << "Ordre choisi : " << ordre;

    // Appeler la méthode de tri avec les deux paramètres
    QSqlQueryModel *model = pr.trierPieces(critere, ordre);

    // Vérifier si la requête a retourné des résultats
    if (model && model->rowCount() > 0) {
        ui->tab_pieces_de_rechange_2->setModel(model);
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


void MainWindow::on_btn_gestion_stockss_clicked() {
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
        QAbstractItemModel *model = ui->tab_pieces_de_rechange_2->model();
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




void MainWindow::on_btn_statistiques_2_clicked()
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

void MainWindow::on_btn_pdff_clicked()
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


void MainWindow::on_btn_evaluationn_clicked()
{
    QModelIndexList selectedRows = ui->tab_pieces_de_rechange_2->selectionModel()->selectedRows();
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
    QAbstractItemModel *model = ui->tab_pieces_de_rechange_2->model();

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
        QAbstractItemModel *modelAll = ui->tab_pieces_de_rechange_2->model();
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
    QAbstractItemModel *model = ui->tab_pieces_de_rechange_2->model();
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
void MainWindow::keyNavigationEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) {
        QPushButton *focusedButton = qobject_cast<QPushButton *>(QApplication::focusWidget());
        if (focusedButton) {
            focusedButton->click();
        }
    } else if (event->key() == Qt::Key_Up || event->key() == Qt::Key_Down) {
        QWidget *currentFocus = QApplication::focusWidget();
        QList<QWidget *> widgets = findChildren<QWidget *>();
        int currentIndex = widgets.indexOf(currentFocus);

        if (event->key() == Qt::Key_Up) {
            for (int i = currentIndex - 1; i >= 0; --i) {
                if (QPushButton *button = qobject_cast<QPushButton *>(widgets[i])) {
                    button->setFocus();
                    break;
                }
            }
        } else if (event->key() == Qt::Key_Down) {
            for (int i = currentIndex + 1; i < widgets.size(); ++i) {
                if (QPushButton *button = qobject_cast<QPushButton *>(widgets[i])) {
                    button->setFocus();
                    break;
                }
            }
        }
    }
}
void MainWindow::keyPreviousPageEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_B) {
        int currentIndex = ui->stackedWidget->currentIndex();

        // Si l'index actuel est 4, 5, 6 ou 3, aller à la page 7
        if (currentIndex == 4 || currentIndex == 5 || currentIndex == 6 || currentIndex == 3) {
            switchToPageByObjectName("page_4");
        }
        // Si l'index actuel est 1 ou 2, aller à la page 3
        else if (currentIndex == 1 || currentIndex == 2) {
            ui->stackedWidget->setCurrentIndex(3);
        }
    }
}

#include <QTimer>

// Variables pour gérer l'animation
QString fullText; // Le texte complet à afficher
QString currentText; // Le texte affiché progressivement
QTimer *textTimer; // Timer pour l'animation

void MainWindow::startTextAnimation(const QString &text)
{
    fullText = text;
    currentText.clear();
    ui->welcome->setText(currentText);
    ui->welcome->setStyleSheet("background-color: white; color: black; font-size: 20px; font-weight: bold;");

    // Initialiser le timer
    if (!textTimer) {
        textTimer = new QTimer(this);
        connect(textTimer, &QTimer::timeout, this, &MainWindow::updateTextAnimation);
    }
    textTimer->start(100); // Intervalle en millisecondes entre chaque lettre
}

void MainWindow::updateTextAnimation()
{
    if (currentText.length() < fullText.length()) {
        currentText += fullText[currentText.length()];
        ui->welcome->setText(currentText);
    } else {
        textTimer->stop(); // Arrêter le timer lorsque tout le texte est affiché
    }
}

//*********************ARDUINO TEMPERATURE
void MainWindow::update_label() {
    QByteArray data = A.read_from_arduino();
    buffer += QString::fromStdString(data.toStdString());

    if (buffer.contains("\r\n")) {
        QStringList messages = buffer.split("\r\n");
        buffer = messages.last();

        for (const QString &message : messages) {
            if (message.contains("Température:") && message.contains("Humidité:")) {
                QStringList parts = message.split(",");
                if (parts.size() == 2) {
                    float temperature = parts[0].split(":")[1].trimmed().toFloat();
                    float humidite = parts[1].split(":")[1].trimmed().toFloat();

                    ui->progressBarTemperature->setValue(static_cast<int>(temperature));
                    ui->progressBarHumidite->setValue(static_cast<int>(humidite));

                    update_progress_bar(ui->progressBarTemperature, temperature, 29, 30);
                    update_progress_bar(ui->progressBarHumidite, humidite, 30, 45);

                    update_alert_button(temperature, humidite, 29, 30, 30, 45);

                    // Vérifiez si les conditions ne sont plus rouges
                    int tempSeuilRouge = 30;
                    int humSeuilRouge = 45;

                    if (A.is_fan_on() && !(temperature > tempSeuilRouge && humidite > humSeuilRouge)) {
                        A.write_to_arduino("VENT_OFF\n");
                        A.set_fan_state(false); // Mettre à jour l'état
                        ui->fanButton->setText("Allumer le ventilateur");
                    }
                }
            }
        }
    }
}


void MainWindow::update_progress_bar(QProgressBar *progressBar, float value, int seuilVert, int seuilRouge) {
    progressBar->setValue(static_cast<int>(value));

    QString style;
    if (value <= seuilVert) {
        style = "QProgressBar::chunk { background-color: green; }";
    } else if (value > seuilVert && value <= seuilRouge) {
        style = "QProgressBar::chunk { background-color: orange; }";
    } else {
        style = "QProgressBar::chunk { background-color: red; }";
    }

    progressBar->setStyleSheet(style);
}

void MainWindow::update_alert_button(float temperature, float humidite, int tempSeuilVert, int tempSeuilRouge, int humSeuilVert, int humSeuilRouge) {
    QString style;

    bool tempVert = (temperature <= tempSeuilVert);
    bool tempRouge = (temperature > tempSeuilRouge);
    bool humVert = (humidite <= humSeuilVert);
    bool humRouge = (humidite > humSeuilRouge);
    bool tempJaune = (temperature > tempSeuilVert && temperature <= tempSeuilRouge);
    bool humJaune = (humidite > humSeuilVert && humidite <= humSeuilRouge);

    if (tempRouge && humRouge) {
        style = "background-color: red; border-radius: 10px;";
        ui->fanAlertLabel->show();

        QString alertMessage = QString("Alerte : Température = %1, Humidité = %2 | %3")
                                   .arg(temperature)
                                   .arg(humidite)
                                   .arg(QDateTime::currentDateTime().toString("dd/MM/yyyy hh:mm:ss"));
        alertHistory.append(alertMessage);
    } else if ((tempVert && humVert) || (tempVert && humJaune) || (humVert && tempJaune)) {
        style = "background-color: green; border-radius: 10px;";
        ui->fanAlertLabel->hide();
    } else {
        style = "background-color: yellow; border-radius: 10px;";
        ui->fanAlertLabel->hide();
    }

    ui->alertButton->setStyleSheet(style);
}

void MainWindow::handle_fan_button() {
    // Vérifiez les valeurs des barres de progression
    int temperatureValue = ui->progressBarTemperature->value();
    int humiditeValue = ui->progressBarHumidite->value();

    int tempSeuilRouge = 30;
    int humSeuilRouge = 45;

    if (temperatureValue > tempSeuilRouge && humiditeValue > humSeuilRouge) {
        static bool fanOn = false;
        fanOn = !fanOn;

        if (fanOn) {
            A.write_to_arduino("VENT_ON\n");
            A.set_fan_state(true); // Met à jour l'état du ventilateur
            ui->fanButton->setText("Éteindre le ventilateur");
        } else {
            A.write_to_arduino("VENT_OFF\n");
            A.set_fan_state(false); // Met à jour l'état du ventilateur
            ui->fanButton->setText("Allumer le ventilateur");
        }
    } else {
        QMessageBox::warning(this, "Action impossible",
                             "Le ventilateur ne peut être contrôlé que lorsque la température et l'humidité sont dans la zone rouge.");
    }
}



void MainWindow::show_alert_history() {
    QString historyText;
    for (const QString &entry : alertHistory) {
        historyText += entry + "\n";
    }

    if (historyText.isEmpty()) {
        historyText = "Aucune alerte enregistrée.";
    }

    QMessageBox::information(this, "Historique des Alertes", historyText);
}
//**************************************************ARDUINO EAU
void MainWindow::update_label2()
{
    QByteArray data2 = a.read_from_arduino2();
    QString status2 = QString::fromStdString(data2.toStdString()).trimmed();

    if (status2 == "0") { // Pas d'eau détectée (LED verte)
        ui->alertLabel->setStyleSheet("background-color: green; color: white; font-weight: bold;");
        ui->alertLabel->setText("Pas d'eau détectée");

        ui->buzzerButton->setEnabled(false); // Désactiver le buzzer
    } else if (status2 == "1") { // Eau détectée (LED rouge)
        ui->alertLabel->setStyleSheet("background-color: red; color: white; font-weight: bold;");
        ui->alertLabel->setText("ALERTE: Eau détectée");

        ui->buzzerButton->setEnabled(true); // Activer le buzzer
    }
}

void MainWindow::on_buzzerButton_clicked()
{
    static bool buzzerActive = true; // État actuel du buzzer

    if (ui->alertLabel->text().contains("ALERTE")) { // Eau détectée
        if (buzzerActive) {
            a.write_to_arduino2("0"); // Envoyer '0' pour désactiver le buzzer
            ui->buzzerButton->setText("Activer Buzzer");
            buzzerActive = false;
        } else {
            a.write_to_arduino2("1"); // Envoyer '1' pour réactiver le buzzer
            ui->buzzerButton->setText("Désactiver Buzzer");
            buzzerActive = true;
        }
    }
}

void MainWindow::switchToPageByObjectName(const QString &objectName)
{
    // Find the widget by its object name
    QWidget* page = ui->stackedWidget->findChild<QWidget*>(objectName);

    if (page) {
        // Get the index of the page
        int index = ui->stackedWidget->indexOf(page);

        if (index != -1) {
            // Switch to the page
            ui->stackedWidget->setCurrentIndex(index);
        }
    }
}



// moha


#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QVBoxLayout>

#include <QPdfWriter>
#include <QPainter>
#include <QMessageBox>
#include <QFileDialog>
#include <QFont>
#include <QDebug>
#include <QTableView>
#include <QStyledItemDelegate>
#include <QPdfWriter>
#include <QPainter>
#include <QDate>
#include <QFileDialog>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QDateTimeAxis>
#include <QtCharts/QValueAxis>
#include <QDesktopServices>

#include <QtPrintSupport/QPrinter>

#include <QWidget>
#include <QMessageBox>
#include <QMainWindow>
#include "employec.h"


QString currentCode;  // Variable pour accumuler les touches

void MainWindow::readKeypadInput() {
    if (!arduino->canReadLine()) return;

    QByteArray data = arduino->readLine().trimmed(); // Lire la ligne complète
    QString input(data); // Convertir en QString

    qDebug() << "Données reçues du keypad : " << input;

    // Vérifier si le dernier caractère est '#'
    if (input.endsWith('#')) {
        // Supprimer le caractère '#' et accumuler les chiffres
        currentCode += input.left(input.length() - 1);

        // Convertir le code accumulé en entier
        bool ok;
        int code = currentCode.toInt(&ok);

        if (ok) {
            qDebug() << "Code à vérifier : " << code;

            // Vérifier l'existence du code
            QString np = isCodeExists(code);  // Appeler la méthode qui retourne NP
            qDebug() << "NP retourné par isCodeExists : " << np;  // Afficher NP retourné

            // Afficher un message en fonction de la présence du code
            if (np.length()>2) {
                // Afficher un message d'information avec NP
                QMessageBox::information(this, "Succès", "Bonjour et bienvenue : " + np);
                qDebug() << "Le code existe dans la table employeec, NP : " << np;
            } else {
                // Afficher un message d'erreur si le code n'est pas trouvé
                QMessageBox::warning(this, "Erreur", "Le code n'existe pas dans la base de données.");
                qDebug() << "Le code n'existe pas dans la table employeec.";
            }
        } else {
            // Afficher un message d'erreur si le code est invalide
            QMessageBox::warning(this, "Erreur", "Le code n'est pas valide.");
            qDebug() << "Le code est invalide.";
        }

        // Réinitialiser currentCode pour la prochaine saisie
        currentCode.clear();
    } else {
        // Accumuler les touches
        currentCode += input;
        qDebug() << "Code en cours : " << currentCode;
    }
}




QString MainWindow::isCodeExists(const int code) {
    QSqlQuery query;

    // Préparer la requête pour récupérer la valeur de NP
    query.prepare("SELECT NP FROM employeec WHERE CODE = :code");
    query.bindValue(":code", code);

    // Exécuter la requête SQL
    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError().text();
        return "";  // Retourner une chaîne vide en cas d'erreur
    }

    if (query.next()) {
        QString np = query.value(0).toString();
        return np;
    }
    return "";
}



void MainWindow::on_ajout_clicked()
{
    QString ID = ui->id->text();
    QString NP = ui->prixc->text();
    QString STAT = ui->prixl_3->text();
    QString SAL = ui->prixl_4->text();
    QString POST = ui->prixl->text();
    QString DIP = ui->prixl_2->text();
    QString PT = ui->prixl_5->text();
    QString NBC = ui->prixl_6->text();
    int CODE = ui->prixl_7->text().toInt();



    // Create an employec object with the data from the UI
    employec e(ID, NP, STAT, SAL, POST, DIP, PT, NBC,CODE);

    // Call the ajouter_employe method and check if it was successful
    bool test = e.ajouter_employe();
    if (test) {
        QMessageBox::information(nullptr, "Succès", "Ajout effectué avec succès");
        // Uncomment the following line if you have a function to clear fields
        // clearFields();
    } else {
        QMessageBox::warning(nullptr, "Échec", "Ajout non effectué");
    }

    // Clear fields after adding
    clearFields();

    // Update the table view to display the new data
    ui->tableView_2->setModel(e.afficher());
}
void MainWindow::clearFields() {
    ui->id->clear();
    ui->prixc->clear();
    ui->prixl_3->clear();
    ui->prixl_4->clear();
    ui->prixl->clear();
    ui->prixl_2->clear();
    ui->prixl_5->clear();
    ui->prixl_6->clear();
}


void MainWindow::on_afficher_clicked()
{
    ui->tableView_2->setModel(e.afficher());

}

void MainWindow::on_modif_clicked()
{
    QString ID = ui->id->text();  // ID is read-only, so this is fine
    QString NP = ui->prixc->text();
    QString STAT = ui->prixl_3->text();
    QString SAL = ui->prixl_4->text();
    QString POST = ui->prixl->text();
    QString DIP = ui->prixl_2->text();
    QString PT = ui->prixl_5->text();
    QString NBC = ui->prixl_6->text();
    int CODE = ui->prixl_7->text().toInt();


    // Vérifier si l'ID existe dans la base de données
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", ID);
    if (!checkQuery.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la vérification de l'existence de l'ID.");
        return;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count == 0) {
        // Si l'ID n'existe pas
        QMessageBox::warning(nullptr, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
        return;
    }

    // Si l'ID existe, procéder à la modification
    employec e(ID, NP, STAT, SAL, POST, DIP, PT, NBC,CODE);

    // Appeler la fonction modifier
    bool test = e.modifier_employe();

    if (test) {
        ui->tableView_2->setModel(e.afficher());  // Recharger les données dans le tableView_2
        clearFields();
        QMessageBox::information(nullptr, "Succès", "La modification a été effectuée avec succès.");
    } else {
        QMessageBox::warning(nullptr, "Échec", "La modification a échoué.");
    }
}

void MainWindow::on_supprimer_clicked()
{
    QString ID = ui->recherche->text();  // Assumes ID is displayed in a read-only field

    if (ID.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un employé à supprimer.");
        return;
    }

    // Créer une instance de employec pour vérifier si l'ID existe dans la base de données
    employec e;

    // Vérifier si l'ID existe avant de supprimer
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", ID);
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification de l'existence de l'ID.");
        return;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count == 0) {
        // Si l'ID n'existe pas dans la base de données
        QMessageBox::warning(this, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
        return;
    }

    // Afficher une boîte de confirmation avant de supprimer
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer cet employé ?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // Appeler la méthode de suppression
        bool test = e.supprimer_employe(ID);

        if (test) {
            ui->tableView_2->setModel(e.afficher());  // Recharger les données dans le tableView_2
            clearFields();
        }
    }
}

void MainWindow::on_rech_clicked()
{
    QString ID = ui->recherche->text();
    employec e;

    // Vérifier si l'ID existe avant de supprimer
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", ID);
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification de l'existence de l'ID.");
        return;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count == 0) {
        QMessageBox::warning(this, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
        return;
    }
    ui->tableView_2->setModel(e.afficherunEmployee(ID));

}


void MainWindow::on_tabWidget_2_currentChanged(int index)
{



}


void MainWindow::on_tabWidget_2_tabBarClicked(int index)
{

    QPieSeries *series = new QPieSeries();
    QVector<float> percents = employec::getPercent();

    series->append("500", (percents[1]) );
    series->append("1000", (percents[2] ));
    series->append("1550", (percents[3] ));
    series->append("2000", (percents[4] ));


    QChart *chart = new QChart();
    chart->addSeries(series);


    chart->setTitle("Répartition des catégories");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    if (ui->layout) {

        QLayoutItem *item;
        while ((item = ui->layout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
    }

    ui->layout->addWidget(chartView);


    chartView->setMinimumSize(400, 300);
}


void MainWindow::on_exporter_2_clicked()
{
    exportToPdf();
}

void MainWindow::exportToPdf()
{
    // Ouvre une boîte de dialogue pour choisir l'emplacement et le nom du fichier PDF
    QString filePath = QFileDialog::getSaveFileName(
        this, "Save Employee Data as PDF", "", "PDF Files (*.pdf)");

    // Si un chemin de fichier valide est sélectionné
    if (!filePath.isEmpty()) {
        // Ajouter l'extension .pdf si elle n'est pas présente
        if (!filePath.endsWith(".pdf")) {
            filePath += ".pdf";
        }

        employec emp;
        QSqlQueryModel* model = emp.afficher();

        if (model == nullptr) {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la récupération des données.");
            return;
        }

        QVector<employec> employes;
        for (int row = 0; row < model->rowCount(); ++row) {
            employec emp;
            emp.setID(model->data(model->index(row, 0)).toString());
            emp.setNP(model->data(model->index(row, 1)).toString());
            emp.setSTAT(model->data(model->index(row, 2)).toString());
            emp.setSAL(model->data(model->index(row, 3)).toString());
            emp.setPOST(model->data(model->index(row, 4)).toString());
            emp.setDIP(model->data(model->index(row, 5)).toString());
            emp.setPT(model->data(model->index(row, 6)).toString());
            emp.setNBC(model->data(model->index(row, 7)).toString());

            employes.append(emp);
        }

        QFont font("Arial", 12);  // Police légèrement agrandie
        QPdfWriter pdfWriter(filePath);
        pdfWriter.setPageSize(QPageSize(QPageSize::A4));
        pdfWriter.setTitle("Export Employees");
        pdfWriter.setCreator("Employee Management System");

        QPainter painter;
        painter.begin(&pdfWriter);
        painter.setFont(font);
        // Définir un style de trait personnalisé
        QPen pen;
        pen.setColor(Qt::black);           // Couleur des traits
        pen.setWidth(3);                   // Épaisseur des traits (ajustable)
        pen.setStyle(Qt::SolidLine);       // Style des traits (SolidLine, DashLine, DotLine, etc.)
        painter.setPen(pen);

        int margin = 100;        // Marge autour du tableau
        int y = margin;          // Position verticale initiale
        int rowHeight = 1000;    // Hauteur de chaque ligne
        int headerHeight = 1000; // Hauteur des en-têtes
        int columnWidth = 2000;  // Largeur des colonnes
        int textMargin = 200;    // Marge intérieure pour le texte

        // Dessiner les en-têtes du tableau
        painter.drawRect(margin, y, columnWidth, headerHeight);                    // Colonne ID
        painter.drawRect(margin + columnWidth, y, columnWidth * 2, headerHeight);  // Colonne Nom/Prénom
        painter.drawRect(margin + columnWidth * 3, y, columnWidth, headerHeight);  // Colonne Poste
        painter.drawRect(margin + columnWidth * 4, y, columnWidth, headerHeight);  // Colonne Diplôme

        // Ajouter les en-têtes avec alignement vertical au centre
        QFontMetrics metrics(font);
        painter.drawText(margin + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "ID");
        painter.drawText(margin + columnWidth + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Name");
        painter.drawText(margin + columnWidth * 3 + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Post");
        painter.drawText(margin + columnWidth * 4 + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Diploma");

        y += headerHeight;

        // Dessiner les données
        for (const employec& emp : employes) {
            // Tracer les bordures des lignes
            painter.drawRect(margin, y, columnWidth, rowHeight);                   // ID
            painter.drawRect(margin + columnWidth, y, columnWidth * 2, rowHeight); // Nom/Prénom
            painter.drawRect(margin + columnWidth * 3, y, columnWidth, rowHeight); // Poste
            painter.drawRect(margin + columnWidth * 4, y, columnWidth, rowHeight); // Diplôme

            // Ajouter les données avec alignement vertical au centre
            painter.drawText(margin + textMargin, y + rowHeight / 2 + metrics.ascent() / 2, emp.getID());
            painter.drawText(margin + columnWidth + textMargin, y + rowHeight / 2 + metrics.ascent() / 2, emp.getNP());
            painter.drawText(margin + columnWidth * 3 + textMargin, y + rowHeight / 2 + metrics.ascent() / 2, emp.getPOST());
            painter.drawText(margin + columnWidth * 4 + textMargin, y + rowHeight / 2 + metrics.ascent() / 2, emp.getDIP());

            y += rowHeight;

            // Gérer le passage à une nouvelle page
            if (y > pdfWriter.height() - margin - rowHeight) {
                pdfWriter.newPage();
                y = margin;

                // Redessiner les en-têtes sur la nouvelle page
                painter.drawRect(margin, y, columnWidth, headerHeight);                    // Colonne ID
                painter.drawRect(margin + columnWidth, y, columnWidth * 2, headerHeight);  // Colonne Nom/Prénom
                painter.drawRect(margin + columnWidth * 3, y, columnWidth, headerHeight);  // Colonne Poste
                painter.drawRect(margin + columnWidth * 4, y, columnWidth, headerHeight);  // Colonne Diplôme

                painter.drawText(margin + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "ID");
                painter.drawText(margin + columnWidth + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Name");
                painter.drawText(margin + columnWidth * 3 + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Post");
                painter.drawText(margin + columnWidth * 4 + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Diploma");

                y += headerHeight;
            }
        }



        painter.end();

        // Demander si l'utilisateur veut afficher le PDF
        int response = QMessageBox::question(this, "PDF", "Afficher le PDF ?", QMessageBox::Yes | QMessageBox::No);
        if (response == QMessageBox::Yes) {
            QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
        }
    }


}

void MainWindow::on_tri_clicked()
{
    QSqlQueryModel* model = employec::triParID(0);
    if (model) {
        ui->tableView_2->setModel(model);
        ui->tableView_2->reset();  // Force la mise à jour de la vue
    }
}


void MainWindow::on_tri_nom_clicked()
{
    QSqlQueryModel* model = employec::triParID(1);
    if (model) {
        ui->tableView_2->setModel(model);
        ui->tableView_2->reset();  // Force la mise à jour de la vue
    }
}


void MainWindow::on_tri_statut_clicked()
{
    QSqlQueryModel* model = employec::triParID(2);
    if (model) {
        ui->tableView_2->setModel(model);
        ui->tableView_2->reset();  // Force la mise à jour de la vue
    }
}


void MainWindow::on_tri_salaire_clicked()
{
    QSqlQueryModel* model = employec::triParID(3);
    if (model) {
        ui->tableView_2->setModel(model);
        ui->tableView_2->reset();  // Force la mise à jour de la vue
    }
}


void MainWindow::on_tri_poste_clicked()
{
    QSqlQueryModel* model = employec::triParID(4);
    if (model) {
        ui->tableView_2->setModel(model);
        ui->tableView_2->reset();  // Force la mise à jour de la vue
    }
}


void MainWindow::on_tri_diplome_clicked()
{
    QSqlQueryModel* model = employec::triParID(5);
    if (model) {
        ui->tableView_2->setModel(model);
        ui->tableView_2->reset();  // Force la mise à jour de la vue
    }
}


void MainWindow::on_tri_points_clicked()
{
    QSqlQueryModel* model = employec::triParID(6);
    if (model) {
        ui->tableView_2->setModel(model);
        ui->tableView_2->reset();  // Force la mise à jour de la vue
    }
}


void MainWindow::on_tri_conge_clicked()
{
    QSqlQueryModel* model = employec::triParID(7);
    if (model) {
        ui->tableView_2->setModel(model);
        ui->tableView_2->reset();  // Force la mise à jour de la vue
    }
}

#include "qrcodegen.hpp"

void MainWindow::on_QR_clicked()
{
    // Step 1: Get the ID from the "recherche" line edit
    QString id = ui->recherche->text().trimmed();
    if (id.isEmpty()) {
        QMessageBox::warning(nullptr, "Warning", "Please enter an ID in the search field.");
        return;
    }

    // Step 2: Query the database to fetch all employee details
    QSqlQuery query;
    query.prepare("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC, CODE FROM employeec WHERE ID = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Error", "Failed to execute query: " + query.lastError().text());
        return;
    }

    if (!query.next()) {
        QMessageBox::information(nullptr, "Not Found", "No employee found with the specified ID.");
        return;
    }

    // Step 3: Get all employee details and format them as JSON
    QString jsonData = QString("{"
                               "\"ID\": \"%1\","
                               "\"Name\": \"%2\","
                               "\"Status\": \"%3\","
                               "\"Salary\": \"%4\","
                               "\"Position\": \"%5\","
                               "\"Diploma\": \"%6\","
                               "\"Points\": \"%7\","
                               "\"Leaves\": \"%8\","
                               "\"Code\": \"%9\""
                               "}")
                           .arg(query.value("ID").toString())
                           .arg(query.value("NP").toString())
                           .arg(query.value("STAT").toString())
                           .arg(query.value("SAL").toString())
                           .arg(query.value("POST").toString())
                           .arg(query.value("DIP").toString())
                           .arg(query.value("PT").toString())
                           .arg(query.value("NBC").toString())
                           .arg(query.value("CODE").toString());

    // Step 4: Generate the QR code with JSON data
    using namespace qrcodegen;
    QrCode qr = QrCode::encodeText(jsonData.toUtf8().data(), QrCode::Ecc::MEDIUM);

    int scale = 10; // Scale factor: Adjust for higher resolution
    int border = 4; // Border width in "modules"
    int qrSize = (qr.getSize() + border * 2) * scale; // Total size of the QR code image
    QImage qrImage(qrSize, qrSize, QImage::Format_RGB32);
    QRgb black = qRgb(0, 0, 0);
    QRgb white = qRgb(255, 255, 255);
    qrImage.fill(white);

    // Render the QR code into the image
    for (int y = 0; y < qr.getSize(); ++y) {
        for (int x = 0; x < qr.getSize(); ++x) {
            if (qr.getModule(x, y)) {
                int pixelX = (x + border) * scale;
                int pixelY = (y + border) * scale;
                for (int dy = 0; dy < scale; ++dy) {
                    for (int dx = 0; dx < scale; ++dx) {
                        qrImage.setPixel(pixelX + dx, pixelY + dy, black);
                    }
                }
            }
        }
    }

    // Step 5: Display the QR code in a new window
    QWidget *qrWindow = new QWidget();
    qrWindow->setWindowTitle("Employee QR Code");

    QLabel *labelQRCode = new QLabel(qrWindow);
    labelQRCode->setPixmap(QPixmap::fromImage(qrImage));
    labelQRCode->setAlignment(Qt::AlignCenter);

    QVBoxLayout *layout = new QVBoxLayout(qrWindow);
    layout->addWidget(labelQRCode);
    qrWindow->setLayout(layout);

    qrWindow->resize(qrSize + 50, qrSize + 50); // Add padding to the window
    qrWindow->show();

    // Optional: Save the QR code to a file
    QString filePath = QFileDialog::getSaveFileName(nullptr, "Save QR Code", "employee_qr_code.png", "Images (*.png *.jpg)");
    if (!filePath.isEmpty()) {
        qrImage.save(filePath);
        QMessageBox::information(nullptr, "Saved", "QR Code saved successfully!");
    }
}




