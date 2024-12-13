#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------
QT += charts \
    quick
QT += core gui sql widgets charts

QT += core gui sql
QT += core gui multimedia multimediawidgets
QT += widgets charts sql printsupport
QT += core gui sql







greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Atelier_Connexion
TEMPLATE = app


# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    clients.cpp \
    fournisseur.cpp \
    hoverfilter.cpp \
    mailer.cpp \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    piecerechange.cpp \
    sms.cpp

HEADERS += \
    clients.h \
    fournisseur.h \
    hoverfilter.h \
    mailer.h \
        mainwindow.h \
    connection.h \
    piecerechange.h \
    sms.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    1.qrc \
    10.qrc \
    11.qrc \
    13.qrc \
    17.qrc \
    2.qrc \
    3.qrc \
    4.qrc \
    5.qrc \
    6.qrc \
    7.qrc \
    8.qrc \
    9.qrc \
    affichr.qrc \
    ajouter.qrc \
    bg.qrc \
    chercher.qrc \
    eva.qrc \
    evaluation.qrc \
    evava.qrc \
    eye.qrc \
    filtre.qrc \
    gestion.qrc \
    gestionn.qrc \
    jh.qrc \
    locki.qrc \
    logoo.qrc \
    mail.qrc \
    modify.qrc \
    notifi.qrc \
    pag.qrc \
    pdf.qrc \
    pdf.qrc \
    perso.qrc \
    plan.qrc \
    rech.qrc \
    rech.qrc \
    stat.qrc \
    stat.qrc \
    stata.qrc \
    statt.qrc \
    supprimer.qrc \
    wav.qrc

DISTFILES += \
    ../../../../Desktop/Atelier_Connexion (1)/Atelier_Connexion/resources/b1680e06-c9df-45fe-ac58-ec914811d9fe.jpg \
    pag.jpg \
    pdf.png \
    wav.png
