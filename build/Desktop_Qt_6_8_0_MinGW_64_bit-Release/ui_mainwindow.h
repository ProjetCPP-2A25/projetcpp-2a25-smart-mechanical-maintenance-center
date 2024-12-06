/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_13;
    QLineEdit *fill_quanite;
    QTableView *tab_pieces_de_rechange;
    QLabel *label_type;
    QPushButton *btn_statistiques;
    QLineEdit *fill_cout;
    QLabel *label_quantite;
    QPushButton *btn_supprimer;
    QLabel *label_nom;
    QPushButton *btn_supprimer_2;
    QLabel *label_cout;
    QLineEdit *fill_infos;
    QPushButton *btn_modifier;
    QLineEdit *fill_nom;
    QPushButton *btn_evaluation;
    QLineEdit *fill_produit;
    QLineEdit *lineEdit_ID;
    QPushButton *button_tri;
    QComboBox *fill_type;
    QPushButton *btn_gestion_stocks;
    QLabel *label_id;
    QPushButton *btn_rechercher;
    QPushButton *btn_ajouter;
    QLineEdit *lineEdit_valeurRecherche;
    QPushButton *btn_pdf;
    QLineEdit *fill_id;
    QLabel *label_description;
    QLabel *label_fournisseurs;
    QLineEdit *lineEdit;
    QComboBox *combo_critere_tri;
    QComboBox *combo_critere;
    QComboBox *combo_tri;
    QPushButton *button_tri_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1968, 1136);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 212, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 85, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 113, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(85, 85, 127, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush9(QColor(246, 246, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-10, -160, 2001, 1171));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        tabWidget->setPalette(palette1);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab_13 = new QWidget();
        tab_13->setObjectName("tab_13");
        fill_quanite = new QLineEdit(tab_13);
        fill_quanite->setObjectName("fill_quanite");
        fill_quanite->setGeometry(QRect(190, 610, 271, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush10(QColor(127, 127, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(170, 170, 170, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(127, 127, 127, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        fill_quanite->setPalette(palette2);
        tab_pieces_de_rechange = new QTableView(tab_13);
        tab_pieces_de_rechange->setObjectName("tab_pieces_de_rechange");
        tab_pieces_de_rechange->setGeometry(QRect(710, 320, 731, 381));
        tab_pieces_de_rechange->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"font: 700 9pt \"Segoe UI\";"));
        label_type = new QLabel(tab_13);
        label_type->setObjectName("label_type");
        label_type->setGeometry(QRect(30, 470, 101, 51));
        label_type->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        btn_statistiques = new QPushButton(tab_13);
        btn_statistiques->setObjectName("btn_statistiques");
        btn_statistiques->setGeometry(QRect(1370, 790, 161, 51));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        btn_statistiques->setPalette(palette3);
        btn_statistiques->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/stata/stata.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_statistiques->setIcon(icon);
        btn_statistiques->setIconSize(QSize(45, 45));
        fill_cout = new QLineEdit(tab_13);
        fill_cout->setObjectName("fill_cout");
        fill_cout->setGeometry(QRect(190, 540, 271, 51));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        fill_cout->setPalette(palette4);
        label_quantite = new QLabel(tab_13);
        label_quantite->setObjectName("label_quantite");
        label_quantite->setGeometry(QRect(10, 610, 161, 51));
        label_quantite->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        btn_supprimer = new QPushButton(tab_13);
        btn_supprimer->setObjectName("btn_supprimer");
        btn_supprimer->setGeometry(QRect(310, 800, 131, 51));
        btn_supprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/supprimer/supprimer.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_supprimer->setIcon(icon1);
        label_nom = new QLabel(tab_13);
        label_nom->setObjectName("label_nom");
        label_nom->setGeometry(QRect(30, 330, 121, 41));
        label_nom->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        btn_supprimer_2 = new QPushButton(tab_13);
        btn_supprimer_2->setObjectName("btn_supprimer_2");
        btn_supprimer_2->setGeometry(QRect(1010, 710, 131, 51));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        btn_supprimer_2->setPalette(palette5);
        btn_supprimer_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/affichr/mettre-a-jour-les-fleches.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_supprimer_2->setIcon(icon2);
        label_cout = new QLabel(tab_13);
        label_cout->setObjectName("label_cout");
        label_cout->setGeometry(QRect(30, 540, 111, 51));
        label_cout->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        fill_infos = new QLineEdit(tab_13);
        fill_infos->setObjectName("fill_infos");
        fill_infos->setGeometry(QRect(190, 680, 271, 51));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        fill_infos->setPalette(palette6);
        btn_modifier = new QPushButton(tab_13);
        btn_modifier->setObjectName("btn_modifier");
        btn_modifier->setGeometry(QRect(60, 870, 131, 51));
        btn_modifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/modify/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_modifier->setIcon(icon3);
        fill_nom = new QLineEdit(tab_13);
        fill_nom->setObjectName("fill_nom");
        fill_nom->setGeometry(QRect(190, 330, 271, 51));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        fill_nom->setPalette(palette7);
        btn_evaluation = new QPushButton(tab_13);
        btn_evaluation->setObjectName("btn_evaluation");
        btn_evaluation->setGeometry(QRect(1370, 860, 161, 51));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        btn_evaluation->setPalette(palette8);
        btn_evaluation->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/eva/eva.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_evaluation->setIcon(icon4);
        btn_evaluation->setIconSize(QSize(45, 45));
        fill_produit = new QLineEdit(tab_13);
        fill_produit->setObjectName("fill_produit");
        fill_produit->setGeometry(QRect(190, 400, 271, 51));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette9.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        fill_produit->setPalette(palette9);
        lineEdit_ID = new QLineEdit(tab_13);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(310, 870, 131, 51));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        lineEdit_ID->setPalette(palette10);
        button_tri = new QPushButton(tab_13);
        button_tri->setObjectName("button_tri");
        button_tri->setGeometry(QRect(1110, 800, 141, 51));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette11.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        button_tri->setPalette(palette11);
        button_tri->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/filtre/filtre.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        button_tri->setIcon(icon5);
        fill_type = new QComboBox(tab_13);
        fill_type->addItem(QString());
        fill_type->addItem(QString());
        fill_type->addItem(QString());
        fill_type->addItem(QString());
        fill_type->addItem(QString());
        fill_type->addItem(QString());
        fill_type->setObjectName("fill_type");
        fill_type->setGeometry(QRect(190, 470, 271, 51));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette12.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        fill_type->setPalette(palette12);
        btn_gestion_stocks = new QPushButton(tab_13);
        btn_gestion_stocks->setObjectName("btn_gestion_stocks");
        btn_gestion_stocks->setGeometry(QRect(1370, 720, 161, 51));
        btn_gestion_stocks->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/gestionn/logistics-delivery.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_gestion_stocks->setIcon(icon6);
        btn_gestion_stocks->setIconSize(QSize(45, 45));
        label_id = new QLabel(tab_13);
        label_id->setObjectName("label_id");
        label_id->setGeometry(QRect(0, 260, 171, 51));
        label_id->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        btn_rechercher = new QPushButton(tab_13);
        btn_rechercher->setObjectName("btn_rechercher");
        btn_rechercher->setGeometry(QRect(1050, 260, 31, 31));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette13.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        btn_rechercher->setPalette(palette13);
        btn_rechercher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/chercher/chercher.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_rechercher->setIcon(icon7);
        btn_rechercher->setIconSize(QSize(30, 30));
        btn_ajouter = new QPushButton(tab_13);
        btn_ajouter->setObjectName("btn_ajouter");
        btn_ajouter->setGeometry(QRect(60, 800, 131, 51));
        btn_ajouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ajouter/ajouter-un-bouton.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_ajouter->setIcon(icon8);
        lineEdit_valeurRecherche = new QLineEdit(tab_13);
        lineEdit_valeurRecherche->setObjectName("lineEdit_valeurRecherche");
        lineEdit_valeurRecherche->setGeometry(QRect(710, 250, 391, 51));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette14.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        lineEdit_valeurRecherche->setPalette(palette14);
        lineEdit_valeurRecherche->setReadOnly(false);
        btn_pdf = new QPushButton(tab_13);
        btn_pdf->setObjectName("btn_pdf");
        btn_pdf->setGeometry(QRect(1470, 240, 61, 61));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush13(QColor(90, 84, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette15.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        btn_pdf->setPalette(palette15);
        btn_pdf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/pdf/pdf.png);\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: rgb(90, 84, 255); /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        fill_id = new QLineEdit(tab_13);
        fill_id->setObjectName("fill_id");
        fill_id->setGeometry(QRect(190, 260, 271, 51));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette16.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        fill_id->setPalette(palette16);
        fill_id->setReadOnly(false);
        label_description = new QLabel(tab_13);
        label_description->setObjectName("label_description");
        label_description->setGeometry(QRect(20, 400, 131, 41));
        label_description->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        label_fournisseurs = new QLabel(tab_13);
        label_fournisseurs->setObjectName("label_fournisseurs");
        label_fournisseurs->setGeometry(QRect(-10, 670, 191, 61));
        label_fournisseurs->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        lineEdit = new QLineEdit(tab_13);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(-10, 110, 1561, 951));
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/bg/bg.jpg);"));
        combo_critere_tri = new QComboBox(tab_13);
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->setObjectName("combo_critere_tri");
        combo_critere_tri->setGeometry(QRect(740, 800, 151, 51));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette17.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        combo_critere_tri->setPalette(palette17);
        combo_critere = new QComboBox(tab_13);
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->setObjectName("combo_critere");
        combo_critere->setGeometry(QRect(1160, 250, 151, 51));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette18.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        combo_critere->setPalette(palette18);
        combo_tri = new QComboBox(tab_13);
        combo_tri->addItem(QString());
        combo_tri->addItem(QString());
        combo_tri->setObjectName("combo_tri");
        combo_tri->setGeometry(QRect(930, 800, 141, 51));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette19.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        combo_tri->setPalette(palette19);
        button_tri_2 = new QPushButton(tab_13);
        button_tri_2->setObjectName("button_tri_2");
        button_tri_2->setGeometry(QRect(10, 130, 281, 101));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette20.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        button_tri_2->setPalette(palette20);
        button_tri_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/logoo/logoo.png);\n"
" font-size: 28px; /* Sets font size */\n"
"    color: black; \n"
"	font: 600 12px;\n"
"\n"
"        background-color: white; /* Button background color */\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3; /* Darker background on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #003f7f; /* Even darker background on press */\n"
"    }"));
        tabWidget->addTab(tab_13, QString());
        lineEdit->raise();
        lineEdit_valeurRecherche->raise();
        fill_quanite->raise();
        tab_pieces_de_rechange->raise();
        label_type->raise();
        btn_statistiques->raise();
        fill_cout->raise();
        label_quantite->raise();
        btn_supprimer->raise();
        label_nom->raise();
        btn_supprimer_2->raise();
        label_cout->raise();
        fill_infos->raise();
        btn_modifier->raise();
        fill_nom->raise();
        btn_evaluation->raise();
        fill_produit->raise();
        lineEdit_ID->raise();
        button_tri->raise();
        fill_type->raise();
        btn_gestion_stocks->raise();
        label_id->raise();
        btn_rechercher->raise();
        btn_ajouter->raise();
        btn_pdf->raise();
        fill_id->raise();
        label_description->raise();
        label_fournisseurs->raise();
        combo_critere_tri->raise();
        combo_critere->raise();
        combo_tri->raise();
        button_tri_2->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1968, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        fill_quanite->setPlaceholderText(QCoreApplication::translate("MainWindow", "Quantit\303\251", nullptr));
        label_type->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        btn_statistiques->setText(QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        fill_cout->setPlaceholderText(QCoreApplication::translate("MainWindow", "co\303\273t", nullptr));
        label_quantite->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251", nullptr));
        btn_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_nom->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        btn_supprimer_2->setText(QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        label_cout->setText(QCoreApplication::translate("MainWindow", "Co\303\273t", nullptr));
        fill_infos->setPlaceholderText(QCoreApplication::translate("MainWindow", "info", nullptr));
        btn_modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        fill_nom->setPlaceholderText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        btn_evaluation->setText(QCoreApplication::translate("MainWindow", "Evaluation", nullptr));
        fill_produit->setPlaceholderText(QCoreApplication::translate("MainWindow", "detail", nullptr));
        lineEdit_ID->setPlaceholderText(QCoreApplication::translate("MainWindow", "id", nullptr));
        button_tri->setText(QCoreApplication::translate("MainWindow", "Tri", nullptr));
        fill_type->setItemText(0, QCoreApplication::translate("MainWindow", "Pieces moteur", nullptr));
        fill_type->setItemText(1, QCoreApplication::translate("MainWindow", "Propulsion", nullptr));
        fill_type->setItemText(2, QCoreApplication::translate("MainWindow", "Electrique", nullptr));
        fill_type->setItemText(3, QCoreApplication::translate("MainWindow", "Carburant", nullptr));
        fill_type->setItemText(4, QCoreApplication::translate("MainWindow", "Hydrauliques", nullptr));
        fill_type->setItemText(5, QCoreApplication::translate("MainWindow", "Refroidissement", nullptr));

        btn_gestion_stocks->setText(QCoreApplication::translate("MainWindow", "Gestion Stocks", nullptr));
        label_id->setText(QCoreApplication::translate("MainWindow", "Identifiant ", nullptr));
        btn_rechercher->setText(QString());
        btn_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        lineEdit_valeurRecherche->setText(QString());
        lineEdit_valeurRecherche->setPlaceholderText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        btn_pdf->setText(QString());
        fill_id->setPlaceholderText(QCoreApplication::translate("MainWindow", "id", nullptr));
        label_description->setText(QCoreApplication::translate("MainWindow", "D\303\251tails", nullptr));
        label_fournisseurs->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        combo_critere_tri->setItemText(0, QCoreApplication::translate("MainWindow", "IDP", nullptr));
        combo_critere_tri->setItemText(1, QCoreApplication::translate("MainWindow", "NOM_PRODUIT", nullptr));
        combo_critere_tri->setItemText(2, QCoreApplication::translate("MainWindow", "DETAILS_DES_PRODUITS", nullptr));
        combo_critere_tri->setItemText(3, QCoreApplication::translate("MainWindow", "TYPE_DE_PIECES", nullptr));
        combo_critere_tri->setItemText(4, QCoreApplication::translate("MainWindow", "PRIX", nullptr));
        combo_critere_tri->setItemText(5, QCoreApplication::translate("MainWindow", "QUANTIT\303\211S", nullptr));
        combo_critere_tri->setItemText(6, QCoreApplication::translate("MainWindow", "INFO_F", nullptr));

        combo_critere->setItemText(0, QCoreApplication::translate("MainWindow", "IDP", nullptr));
        combo_critere->setItemText(1, QCoreApplication::translate("MainWindow", "NOM_PRODUIT", nullptr));
        combo_critere->setItemText(2, QCoreApplication::translate("MainWindow", "DETAILS_DES_PRODUITS", nullptr));
        combo_critere->setItemText(3, QCoreApplication::translate("MainWindow", "TYPE_DE_PIECES", nullptr));
        combo_critere->setItemText(4, QCoreApplication::translate("MainWindow", "PRIX", nullptr));
        combo_critere->setItemText(5, QCoreApplication::translate("MainWindow", "QUANTIT\303\211S", nullptr));
        combo_critere->setItemText(6, QCoreApplication::translate("MainWindow", "INFO_F", nullptr));

        combo_tri->setItemText(0, QCoreApplication::translate("MainWindow", "ASC", nullptr));
        combo_tri->setItemText(1, QCoreApplication::translate("MainWindow", "DESC", nullptr));

        button_tri_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
