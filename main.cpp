#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include "mainwindow.h"
#include "hoverfilter.h"
#include <QScreen>
#include <QPushButton>
#include <QPropertyAnimation>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Création de la fenêtre principale
    MainWindow w;
    w.setWindowTitle("WaveWorx");

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

    // Supprimer les bordures et forcer le mode plein écran
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.showFullScreen();

    // Animation de la fenêtre principale
    QScreen *screen = a.primaryScreen();
    QRect availableGeometry = screen->availableGeometry();
    QRect startGeometry(availableGeometry.x(), availableGeometry.y() - availableGeometry.height(),
                        availableGeometry.width(), availableGeometry.height());
    QRect endGeometry = availableGeometry;

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
