#ifndef CLIENT_H
#define CLIENT_H



#include <QString>
#include <QDate>
#include <QSqlQueryModel>
#include <QSqlQuery>

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>
#include <QtCharts/QChart>

class clients
{
private:
    int IDC ;
    QString nom, contact_c, type_bateau,  description, service_effectue;
    QDate datep;
public:
    clients();
    clients(int, QString, QString, QString,  QString, QString);
    ~clients() {};

    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifier();
    bool supprimer(int);
    bool chercherMDF(int);
  QSqlQueryModel* rechercherClients(QString critere, QString valeur); // Méthode pour rechercher des clients
     void stat_bateau(); // Méthode pour les statistiques par type de bateau
  QSqlQueryModel* trierPieces(const QString& critere);
   void enregistrerHistorique(const QString& operation);
  bool connexion(const QString &email, const QString &mot_de_passe); // Méthode pour l'authentification


};

#endif // CLIENT_H
