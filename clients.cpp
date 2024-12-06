
#include "clients.h"
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>

#include <QSqlRecord>

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include <QPainter>
#include <QSqlError>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
clients::clients()
{
    IDC = 0;
    nom = "";
    contact_c = "";
    type_bateau = "";
    description = "";
    service_effectue = "";


}

clients::clients(int IDC, QString name, QString contact, QString typeBoat,  QString desc , QString service_effectue)
{
    this->IDC = IDC;
   this-> nom = name;
    this->contact_c = contact;
    this->type_bateau = typeBoat;
    this->description = desc;
    this->service_effectue = service_effectue;


}


bool clients::ajouter()
{
    QSqlQuery query;
    QString id_string = QString::number(IDC);

    query.prepare("INSERT INTO CLIENTS (IDC, NOM, CONTACT_C, TYPE_BATEAU, SERVICE_EFFECTUE, DESCRIPTION) "
                  "VALUES (:IDC, :NOM, :CONTACT, :TYPE_BATEAU , :service_effectue , :DESCRIPTION)");

    query.bindValue(":IDC", id_string);
    query.bindValue(":NOM", nom);
    query.bindValue(":CONTACT", contact_c);
    query.bindValue(":TYPE_BATEAU", type_bateau);
    query.bindValue(":DESCRIPTION", description);
    query.bindValue(":service_effectue", service_effectue);

    bool success = query.exec();
    if (success) {
        enregistrerHistorique("Ajout d'un client ");
    }
    return success;
}

QSqlQueryModel* clients::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM CLIENTS");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("contact"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE_BATEAU"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("description"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("SERVICE_EFFECTUE"));


    return model;
}

bool clients::supprimer(int IDC)
{
    QSqlQuery query;
    QString id_string=QString::number(IDC);

    query.prepare("DELETE FROM CLIENTS WHERE IDC = :IDC");
    query.bindValue(":IDC", id_string);

    return query.exec();
}

bool clients::modifier()
{
    QSqlQuery query;
    QString id_string = QString::number(IDC);

    query.prepare("UPDATE CLIENTS SET NOM = :nom, CONTACT_C = :contact, TYPE_BATEAU = :type_bateau, "
                  "DESCRIPTION = :description, SERVICE_EFFECTUE = :service_effectue WHERE IDC = :id");

    query.bindValue(":nom", nom);
    query.bindValue(":contact", contact_c);
    query.bindValue(":type_bateau", type_bateau);
    query.bindValue(":description", description);
    query.bindValue(":id", id_string);
    query.bindValue(":service_effectue", service_effectue);

    return query.exec();
}


bool clients::chercherMDF(int IDC)
{
    QSqlQuery query;
    query.prepare("SELECT IDC FROM CLIENTS WHERE IDC = :IDC");
    query.bindValue(":IDC", IDC);  // Utilisez directement l'entier IDC

    if (query.exec()) {
        if (query.next()) {
            // Comparez IDC avec la valeur retournée par la requête
            return IDC == query.value(0).toInt();  // Utilisez toInt() pour récupérer un entier
        }
    }
    return false;
}

void clients::stat_bateau() {
    QSqlQueryModel *model = new QSqlQueryModel();

    // Requête pour compter les types de bateaux
    model->setQuery("SELECT type_bateau, COUNT(*) as count FROM clients GROUP BY type_bateau");

    // Création de la série pour le graphique
    QPieSeries *series = new QPieSeries();

    // Parcours des résultats pour construire la série
    for (int i = 0; i < model->rowCount(); i++) {
        QString typeBateau = model->record(i).value("type_bateau").toString();
        int count = model->record(i).value("count").toInt();
        series->append(typeBateau + ": " + QString::number(count), count);
    }

    // Personnalisation des étiquettes et des couleurs
    for (int i = 0; i < series->slices().size(); i++) {
        QPieSlice *slice = series->slices().at(i);
        slice->setLabelVisible();
        slice->setBrush(QColor::fromHsl((i * 360 / series->slices().size()), 150, 200));
    }

    // Création du graphique
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des types de bateaux");
    chart->legend()->setVisible(true);

    // Affichage du graphique
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(1000, 500);
    chartView->show();
}





QSqlQueryModel* clients::rechercherClients(QString critere, QString valeur)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    // Vérifiez que le critère est valide
    QStringList validCriteria = {"IDC","NOM", "CONTACT_C", "TYPE_BATEAU", "DESCRIPTION", "SERVICE_EFFECTUE"};
    if (!validCriteria.contains(critere)) {
        qDebug() << "Critère de recherche invalide : " << critere;
        return model; // Retourne un modèle vide
    }

    // Préparation de la requête
    query.prepare("SELECT * FROM CLIENTS WHERE " + critere + " LIKE :valeur");
    query.bindValue(":valeur", "%" + valeur + "%");

    if (query.exec()) {
        model->setQuery(query);
    } else {
        qDebug() << "Erreur lors de la recherche : " << query.lastError().text();
    }

    return model;
}
QSqlQueryModel* clients::trierPieces(const QString& critere) {
    QSqlQueryModel *model = new QSqlQueryModel();

    QString queryStr = "SELECT * FROM CLIENTS ORDER BY ";

    // Construction de la requête selon le critère de tri
    if (critere == "NOM") {
        queryStr += "NOM";
    } else if (critere == "CONTACT_C") {
        queryStr += "CONTACT_C";
    } else if (critere == "TYPE_BATEAU") {
        queryStr += "TYPE_BATEAU";
    } else if (critere == "DESCRIPTION") {
        queryStr += "DESCRIPTION";
    } else if (critere == "IDC") {
        queryStr += "IDC";
    } else if (critere == "SERVICE_EFFECTUE") {
        queryStr += "SERVICE_EFFECTUE";
    } else {
        qDebug() << "Critère de tri invalide.";
        delete model;
        return nullptr;
    }

    // Exécution de la requête SQL
    model->setQuery(queryStr);
    if (model->lastError().isValid()) {
        qDebug() << "Erreur SQL lors du tri :" << model->lastError().text();
        qDebug() << "Requête SQL :" << queryStr;
        delete model;
        return nullptr;
    } else {
        qDebug() << "Tri réussi avec la requête :" << queryStr;
    }

    return model;
}

void clients::enregistrerHistorique(const QString& operation) {
    QFile file("C:\\Users\\user\\OneDrive - ESPRIT\\Bureau\\client_historique.txt"); // Nom du fichier historique (stocké dans le répertoire courant)

    // Ouvrir le fichier en mode ajout
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        QString timestamp = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

        // Écrire les informations dans le fichier
        out << timestamp << " - " << operation << " - "
            << "IDC: " << IDC << ", "
            << "Contact: " << contact_c << ", "  // Ajoutez contact_c
            << "Nom: " << nom << ", "  // Nom de l'entité
            << "Type de Bateau: " << type_bateau << ", "  // Type de bateau
            << "Description: " << description << ", "  // Description
            << "Service Effectué: " << service_effectue << "\n";  // Service effectué

        file.close();
    } else {
        qDebug() << "Impossible d'ouvrir le fichier historique pour écriture.";
    }
}



bool clients::connexion(const QString &email, const QString &mot_de_passe)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM CLIENTS WHERE EMAIL = :email AND MOT_DE_PASSE = :mot_de_passe");
    query.bindValue(":email", email);
    query.bindValue(":mot_de_passe", mot_de_passe);

    if (query.exec() && query.next()) {
        // Authentification réussie
        return true;
    }
    return false;
}
