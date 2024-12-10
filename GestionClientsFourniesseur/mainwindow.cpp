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
#include "wavebot.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
, waveBot(new WaveBot())  // Initialisation de WaveBot
 , networkManager(new QNetworkAccessManager(this))

{
    ui->setupUi(this);
    //lors du l'exection du proramme , il lit les fonction suivant
    ui->tableView->setModel(c.afficher());
    connect(ui->pushButton_Confirmer, &QPushButton::clicked,this,&MainWindow::on_pushButton_Confirmer_clicked);
    // Connecter le signal de réponse à une fonction
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::handleResponse);

}


const QString OPENAI_API_KEY = "votre_clé_API_ici";
const QString OPENAI_API_URL = "https://api.openai.com/v1/chat/completions";



MainWindow::~MainWindow()
{

    delete ui;
delete waveBot;
 delete networkManager;

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
        ui->tableView->setModel(c.afficher());

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
        ui->tableView->setModel(c.afficher());

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
            ui->tableView->setModel(c.afficher());

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
    ui->tableView->setModel(model); // Assurez-vous que le nom du QTableView est correct

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
        ui->tableView->setModel(model);
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
        ui->label_27->show();

        // Afficher le premier onglet du QTabWidget
        ui->tabWidget->setCurrentIndex(0); // Change to the first tab (index 0)
    } else {
        QMessageBox::warning(this, "Échec de la connexion", "Email ou mot de passe invalide. Veuillez réessayer.");
    }
}

void MainWindow::on_tabBarClicked(int index)
{
    if (!isAuthenticated && index != 0) {
        QMessageBox::warning(this, "Accès refusé", "Vous devez vous connecter pour accéder à cette page.");
        ui->tabWidget->show(); // Afficher la page de connexion
        ui->label_27->hide(); // Cacher le contenu principal
    } else {
        ui->tabWidget->hide(); // Cacher la page Home si authentifié
        ui->label_27->show(); // Afficher le contenu principal
    }
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



void MainWindow::on_chatButton_clicked() {
    // Récupérer la question de l'utilisateur
    QString userQuery = ui->chatInput->toPlainText();

    // Préparer la requête JSON
    QJsonObject messageObject;
    messageObject["role"] = "user";
    messageObject["content"] = userQuery;

    QJsonArray messagesArray;
    messagesArray.append(messageObject);

    QJsonObject requestObject;
    requestObject["model"] = "gpt-3.5-turbo";  // Vous pouvez utiliser "gpt-3.5-turbo" si vous voulez.
    requestObject["messages"] = messagesArray;

    QJsonDocument jsonRequest(requestObject);
    QByteArray requestData = jsonRequest.toJson();

    // Afficher les données de la requête pour débogage
    qDebug() << "Request data: " << requestData;

    // Préparer la requête HTTP
    QNetworkRequest request;
    request.setUrl(QUrl(OPENAI_API_URL));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    request.setRawHeader("Authorization", QString("Bearer %1").arg(OPENAI_API_KEY).toUtf8());


    // Envoyer la requête POST
    networkManager->post(request, requestData);

    // Afficher un message d'attente
    ui->chatOutput->appendPlainText("WaveBot : Je réfléchis...");
}


void MainWindow::handleResponse(QNetworkReply *reply) {
    if (reply->error() == QNetworkReply::NoError) {
        // Lire la réponse JSON
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);

        // Extraire la réponse du modèle
        QString botResponse = jsonResponse.object()["choices"].toArray()[0].toObject()["message"].toObject()["content"].toString();

        // Afficher la réponse dans l'interface
        ui->chatOutput->appendPlainText("WaveBot : " + botResponse);
    } else {
        // Afficher les erreurs détaillées pour le débogage
        qDebug() << "Error occurred: " << reply->errorString();  // Affiche le message d'erreur
        ui->chatOutput->appendPlainText("WaveBot : Erreur de connexion. " + reply->errorString());  // Affiche l'erreur dans l'interface
    }

    reply->deleteLater();
}
