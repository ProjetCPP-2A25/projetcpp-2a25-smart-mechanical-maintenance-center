#include "piecerechange.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QTimer>
#include <cmath>
#include <QtMath>
PieceRechange::PieceRechange() : IDP(0), nom_produit(""), details_produit(""),
    type_piece(""), prix(0.0), quantites(0), info_f("") {}


PieceRechange::PieceRechange(int id, QString nom, QString details, QString type, double prix, int quantites, QString info)
    : IDP(id), nom_produit(nom), details_produit(details), type_piece(type), prix(prix), quantites(quantites), info_f(info) {}



bool PieceRechange::ajouterPiece() {
    QSqlQuery query;
    query.prepare("INSERT INTO PIECE_RECHANGE (IDP, NOM_PRODUIT, DETAILS_DES_PRODUITS, TYPE_DE_PIECES, PRIX, QUANTITÉS, INFO_F) "
                  "VALUES (:IDP, :nom, :details, :type, :prix, :quantites, :info)");
    query.bindValue(":IDP", IDP);
    query.bindValue(":nom", nom_produit);
    query.bindValue(":details", details_produit);
    query.bindValue(":type", type_piece);
    query.bindValue(":prix", prix);
    query.bindValue(":quantites", quantites);
    query.bindValue(":info", info_f);
    return query.exec();
}


QSqlQueryModel* PieceRechange::afficherPieces() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM PIECE_RECHANGE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom du produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Détails du produit"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type de pièce"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantités"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Info-F"));

    return model;
}



bool PieceRechange::supprimerPiece(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM PIECE_RECHANGE WHERE IDP = :IDP");
    query.bindValue(":IDP", id);
    return query.exec();
}


bool PieceRechange::modifierPiece(int id, QString nom, QString details, QString type, double prix, int quantites, QString info) {
    QSqlQuery query;
    query.prepare("UPDATE PIECE_RECHANGE SET NOM_PRODUIT = :nom, DETAILS_DES_PRODUITS = :details, "
                  "TYPE_DE_PIECES = :type, PRIX = :prix, QUANTITÉS = :quantites, INFO_F = :info "
                  "WHERE IDP = :IDP");
    query.bindValue(":IDP", id);
    query.bindValue(":nom", nom);
    query.bindValue(":details", details);
    query.bindValue(":type", type);
    query.bindValue(":prix", prix);
    query.bindValue(":quantites", quantites);
    query.bindValue(":info", info);
    return query.exec();
}
QSqlQueryModel* PieceRechange::rechercherPieces(QString critere, QString valeur)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    query.prepare("SELECT * FROM PIECE_RECHANGE WHERE " + critere + " LIKE :valeur");
    query.bindValue(":valeur", "%" + valeur + "%");
    query.exec();

    model->setQuery(query);
    return model;
}


QSqlQueryModel* PieceRechange::trierPieces(const QString& critere, const QString& ordre) {
    QSqlQueryModel *model = new QSqlQueryModel();

    // Début de la requête SQL
    QString queryStr = "SELECT * FROM PIECE_RECHANGE ORDER BY ";

    // Choisir le critère de tri
    if (critere == "IDP") {
        queryStr += "IDP";
    } else if (critere == "NOM_PRODUIT") {
        queryStr += "NOM_PRODUIT";
    } else if (critere == "DETAILS_DES_PRODUITS") {
        queryStr += "DETAILS_DES_PRODUITS";
    } else if (critere == "TYPE_DE_PIECES") {
        queryStr += "TYPE_DE_PIECES";
    } else if (critere == "PRIX") {
        queryStr += "PRIX";
    } else if (critere == "QUANTITÉS") {
        queryStr += "QUANTITÉS";
    } else if (critere == "INFO_F") {
        queryStr += "INFO_F";
    }

    // Ajouter l'ordre de tri (ASC ou DESC)
    if (ordre == "ASC") {
        queryStr += " ASC";  // Tri ascendant
    } else if (ordre == "DESC") {
        queryStr += " DESC";  // Tri descendant
    }

    // Debugging - Afficher la requête générée
    qDebug() << "Requête de tri : " << queryStr;

    // Exécution de la requête
    model->setQuery(queryStr);

    // Vérifier si une erreur est survenue
    if (model->lastError().isValid()) {
        qDebug() << "Erreur SQL lors du tri :" << model->lastError().text();
        delete model;
        return nullptr;
    } else {
        qDebug() << "Tri réussi avec la requête :" << queryStr;
    }

    return model;
}

QMap<QString, int> PieceRechange::calculerStatistiquesQuantites()
{
    QMap<QString, int> statistiques;
    QSqlQuery query;


    query.prepare("SELECT NOM, QUANTITÉS FROM PIECE_RECHANGE");

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête pour les statistiques:" << query.lastError();
        return statistiques;
    }

    while (query.next()) {
        QString nomProduit = query.value(0).toString();
        int quantite = query.value(1).toInt();
        statistiques[nomProduit] = quantite;
    }

    return statistiques;
}

QString PieceRechange::evaluerImpactEnvironnemental() const {
    QString evaluation;

    if (type_piece == "Pieces moteur") {
        evaluation = "Nos pièces moteur réduisent les pertes d'énergie, diminuant l'empreinte carbone.";
    } else if (type_piece == "Propulsion") {
        evaluation = "Nos systèmes de propulsion modernes utilisent des technologies éco-responsables.";
    } else if (type_piece == "Electrique") {
        evaluation = "Nos composants électriques favorisent l'énergie verte et réduisent les émissions de CO2.";
    } else if (type_piece == "Carburant") {
        evaluation = "Nos pièces carburant améliorent l'efficacité énergétique en réduisant les rejets de CO2.";
    } else if (type_piece == "Hydrauliques") {
        evaluation = "Nos systèmes hydrauliques limitent les pertes d'huile, contribuant à un environnement plus propre.";
    } else if (type_piece == "Refroidissement") {
        evaluation = "Nos systèmes de refroidissement protègent contre les surchauffes tout en consommant moins.";
    } else {
        evaluation = "Type de pièce inconnu. Impossible d'évaluer l'impact environnemental.";
    }

    // Ajustement basé sur le prix et les quantités
    if (quantites > 100) {
        evaluation += " Cependant, les grandes quantités stockées peuvent augmenter l'impact environnemental global.";
    } else if (prix > 500) {
        evaluation += " Le coût élevé peut refléter une production complexe, ayant un impact environnemental significatif.";
    } else {
        evaluation += " Ce produit est relativement respectueux de l'environnement.";
    }

    return evaluation;
}


int PieceRechange::calculerScoreImpact() const {
    int score = 10;

    if (type_piece == "Electrique") {
        score -= 4;
    } else if (type_piece == "Hydrauliques") {
        score -= 2;
    } else if (type_piece == "Carburant") {
        score += 2;
    }else if (type_piece == "Pieces Moteur") {
        score -= 2;
    } else if (type_piece == "Propulsion") {
        score += 2;
    }else if (type_piece == "Refroidissement") {
        score -= 2;
    }

    if (quantites > 100) {
        score += 1;
    }


    if (prix > 500) {
        score += 1;
    }

    return qMax(1, qMin(10, score));
}
// Pour utiliser std::sin et M_PI

double PieceRechange::calculerScoreImpactAvecVariation(int temps) const {
    int baseScore = calculerScoreImpact();
    double variation = 2.0 * std::sin(temps * M_PI / 6); // Variation sinusoïdale (cycle complet toutes les 12 unités)
    return qMax(1.0, qMin(10.0, baseScore + variation)); // Ajouter la variation
}

