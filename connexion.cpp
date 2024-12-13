#include "connexion.h"

connexion::connexion()
{

}
bool connexion::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet2A");
    db.setUserName("MELEK20");
    db.setPassword("melekesprit");
    if(db.open())
        test=true;


    return test;
}
