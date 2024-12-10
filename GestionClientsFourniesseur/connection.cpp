
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
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("ikramm");//inserer nom de l'utilisateur
    db.setPassword("oracle");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;
    return  test;
}

void Connexion::fermerConnexion()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.close();
}
