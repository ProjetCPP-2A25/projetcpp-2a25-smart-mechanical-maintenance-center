#include "mainwindow.h"
#include "connection.h"
#include "hoverfilter.h" // Inclure HoverFilter
#include <QApplication>
#include <QMessageBox>
#include <QScreen>
#include <QPushButton>
#include <QPropertyAnimation>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Création de la fenêtre principale
    MainWindow w;
    w.setWindowTitle("Pièces De Rechange");

    // Vérification de la connexion à la base de données
    Connection c;
    bool test = c.createconnect();
    if (!test) {
        QMessageBox::critical(nullptr, QObject::tr("Database Error"),
                              QObject::tr("Connection failed.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);
        return -1;
    }



    // Obtenir la géométrie de l'écran disponible
    QScreen *screen = a.primaryScreen();
    QRect availableGeometry = screen->availableGeometry();
    int screenWidth = availableGeometry.width();
    int screenHeight = availableGeometry.height();
    int screenX = availableGeometry.x();
    int screenY = availableGeometry.y();

    // Animation de la fenêtre principale
    QRect startGeometry(screenX, screenY - screenHeight, screenWidth, screenHeight);
    QRect endGeometry(screenX, screenY, screenWidth, screenHeight);
    w.setGeometry(startGeometry);
    w.show();

    QPropertyAnimation *windowAnimation = new QPropertyAnimation(&w, "geometry");
    windowAnimation->setDuration(1000);
    windowAnimation->setStartValue(startGeometry);
    windowAnimation->setEndValue(endGeometry);
    windowAnimation->setEasingCurve(QEasingCurve::OutBounce);
    windowAnimation->start();

    // Appliquer HoverFilter à tous les boutons de la fenêtre principale
    HoverFilter *filter = new HoverFilter(&w);
    QList<QPushButton *> buttons = w.findChildren<QPushButton *>();
    for (QPushButton *button : buttons) {
        button->installEventFilter(filter);
    }

    return a.exec();
}
