
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connection.h"
#include <QObject>


Connexion::Connexion()
{

}

bool Connexion::createconnexion()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("source25");
    db.setUserName("islem");//inserer nom de l'utilisateur
    db.setPassword("islemsouid53211");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;
    return  test;
}

void Connexion::fermerConnexion()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.close();
}
