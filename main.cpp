#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QPointer>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connexion c;
    bool test=c.createconnexion();
    MainWindow w;



    if(test)
    {
        w.show();




    }
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                              QObject::tr("connection failed.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);




    w.show();
    return a.exec();
}
