#ifndef PIECE_RECHANGE_H
#define PIECE_RECHANGE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include <QImage>


class PieceRechange {
    int IDP;
    QString nom_produit;
    QString details_produit;
    QString type_piece;
    double prix;
    int quantites;
    QString info_f;


public:

    PieceRechange();
    PieceRechange(int, QString, QString, QString, double, int, QString);


    int getIDP() const { return IDP; }
    QString getNomProduit() const { return nom_produit; }
    QString getDetailsProduit() const { return details_produit; }
    QString getTypePiece() const { return type_piece; }
    double getPrix() const { return prix; }
    int getQuantites() const { return quantites; }
    QString getInfoF() const { return info_f; }
    QString evaluerImpactEnvironnemental() const; // Évaluation qualitative
    int calculerScoreImpact() const;


    void setIDP(int id) { this->IDP = id; }
    void setNomProduit(const QString &nom) { this->nom_produit = nom; }
    void setDetailsProduit(const QString &details) { this->details_produit = details; }
    void setTypePiece(const QString &type) { this->type_piece = type; }
    void setPrix(double p) { this->prix = p; }
    void setQuantites(int q) { this->quantites = q; }
    void setInfoF(const QString &info) { this->info_f = info; }

    QSqlQueryModel* rechercherPieces(QString critere, QString valeur);
    int getQuantite(int id);
    QMap<QString, int> calculerStatistiquesQuantites();
    double calculerScoreImpactAvecVariation(int temps) const;
    QSqlQueryModel* trierPieces(const QString& critere, const QString& ordre);







    bool ajouterPiece();
    QSqlQueryModel* afficherPieces();
    QSqlQueryModel* trierPieces(const QString& critere);
    bool supprimerPiece(int);
    bool modifierPiece(int, QString, QString, QString, double, int, QString);
private:
    QString getImageUrl(const QString &typeDePiece); // Générer l'URL pour le type


};

#endif

