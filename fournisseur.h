#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class fournisseur
{
    QString email, numtel, typeP, moyenT,catP;
    int ID, nbrN;
    QDate dateexp;

public:
    fournisseur() {}
    fournisseur(int, QString, QString, QString, QString, int,  QDate, QString); // Modified constructor

    // Getters
    QString getemail() { return email; }
    QString getcatP() { return catP; }
    QString getnumtel() { return numtel; }
    QString gettypeP() { return typeP; }
    QString getmoyenT() { return moyenT; }
    int getnbrN() { return nbrN; }
    int getID() { return ID; }
    QDate getdateexp() { return dateexp; }
    //int getdl() { return dl; } // Getter for delai de livraison (dl)

    // Setters
    void setemail(QString e) { email = e; }
    void setcatP(QString c) { catP = c; }
    void setnumtel(QString n) { numtel = n; }
    void settypeP(QString t) { typeP = t; }
    void setmoyenT(QString m) { moyenT = m; }
    void setID(int id) { ID = id; }
    void setnbrN(int nbr) { nbrN = nbr; }
    void setdateexp(QDate date) { dateexp = date; }
    //void setdl(int d) { dl = d; } // Setter for delai de livraison (dl)

    // Methods
    bool ajouter();
    QSqlQueryModel * afficherf();
    bool supprimer(int);
    bool modifierPartiel(int id, const QString& newEmail, const QString& newNumTel, const QString& newMoyenT, const QString& newTypeP, int newNbrN, QDate newdateexp, QString newcatP);
    std::unique_ptr<QSqlQueryModel> rechercherByCatP(const QString &catP);
    std::unique_ptr<QSqlQueryModel> rechercherByID(int id);
    void handleContractExpiration(fournisseur &f);
    QMap<QString, double> calculerStatistiquesMoyenT();
    void exportToPDF();
    void sendEmail(const QString &to, const QString &subject, const QString &body);

};

#endif // FOURNISSEUR_H
