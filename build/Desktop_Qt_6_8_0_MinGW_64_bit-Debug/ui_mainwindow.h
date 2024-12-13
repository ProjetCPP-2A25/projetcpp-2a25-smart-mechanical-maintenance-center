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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *mailLogin;
    QPushButton *pushButton_Confirmer;
    QLineEdit *PwLogin;
    QLabel *pushButton_2;
    QWidget *page_2;
    QLabel *label_10;
    QTableView *tableViewc;
    QPushButton *bt_supprimer;
    QComboBox *combo_critere_tri;
    QLineEdit *SERVICE_EFFECTUE;
    QLabel *label_7;
    QPushButton *button_tri;
    QComboBox *combo_critere;
    QLabel *label_8;
    QPushButton *bt_modifier;
    QLabel *label_28;
    QLineEdit *NOM;
    QLineEdit *CONTACT;
    QLineEdit *lineEdit_valeurRecherche;
    QPushButton *actionGenerer_Rapport_PDF;
    QLineEdit *lineEdit_supprimer;
    QPushButton *Historic;
    QLabel *label_2;
    QLineEdit *ID;
    QPushButton *bt_ajouter;
    QLineEdit *DESCRIPTION;
    QLabel *label_27;
    QLineEdit *type;
    QLabel *label_15;
    QPushButton *stat_bateau;
    QPushButton *btn_rechercher;
    QLabel *historiqueLabel;
    QLabel *label_3;
    QPushButton *back;
    QWidget *page_5;
    QLineEdit *fill_nom_2;
    QLabel *label_cout_2;
    QPushButton *btn_gestion_stockss;
    QLineEdit *lineEdit_ID_3;
    QPushButton *btn_evaluationn;
    QPushButton *btn_pdff;
    QLabel *label_description_2;
    QLineEdit *fill_quanite_2;
    QLabel *label_nom_2;
    QLineEdit *fill_infos_2;
    QPushButton *button_tri_5;
    QLineEdit *lineEdit_2;
    QTableView *tab_pieces_de_rechange_2;
    QComboBox *combo_critere_3;
    QLineEdit *lineEdit_valeurRecherche_3;
    QPushButton *btn_ajouterr;
    QPushButton *btn_modifierr;
    QComboBox *combo_tri_2;
    QLabel *label_id_2;
    QLineEdit *fill_id_2;
    QPushButton *btn_supprimerr2;
    QLabel *label_type_2;
    QLineEdit *fill_cout_2;
    QPushButton *button_trii;
    QPushButton *btn_rechercherr;
    QPushButton *btn_supprimerr;
    QComboBox *combo_critere_tri_3;
    QComboBox *fill_type_2;
    QLabel *label_quantite_2;
    QPushButton *btn_statistiques_2;
    QLabel *label_fournisseurs_2;
    QLineEdit *fill_produit_2;
    QPushButton *back3;
    QWidget *page_3;
    QDateEdit *dateEdit_dateexp;
    QLabel *label_12;
    QLabel *label_4;
    QTableView *tableView;
    QPushButton *pushButton_Afficher;
    QPushButton *pushButton_Email;
    QLabel *label_9;
    QLineEdit *lineEdit_numtel;
    QLabel *label;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_nbrN;
    QLabel *label_6;
    QPushButton *notifier;
    QComboBox *comboBox_catP;
    QPushButton *statButton;
    QLabel *label_11;
    QPushButton *pushButton_modifier;
    QPushButton *Supprimer;
    QPushButton *pushButton_sort;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_16;
    QPushButton *pushButton_ajouter;
    QPushButton *pushButton_rechercher;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_typeP;
    QLineEdit *lineEdit_moyenT;
    QPushButton *back2;
    QPushButton *exporter;
    QLabel *label_17;
    QLabel *label_5;
    QWidget *page_4;
    QPushButton *clients;
    QPushButton *fournisseur;
    QPushButton *piecerechange;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, -20, 1921, 1071));
        stackedWidget->setMinimumSize(QSize(1921, 0));
        page = new QWidget();
        page->setObjectName("page");
        mailLogin = new QLineEdit(page);
        mailLogin->setObjectName("mailLogin");
        mailLogin->setGeometry(QRect(950, 360, 571, 51));
        pushButton_Confirmer = new QPushButton(page);
        pushButton_Confirmer->setObjectName("pushButton_Confirmer");
        pushButton_Confirmer->setGeometry(QRect(1070, 690, 291, 61));
        pushButton_Confirmer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        PwLogin = new QLineEdit(page);
        PwLogin->setObjectName("PwLogin");
        PwLogin->setGeometry(QRect(940, 510, 581, 51));
        pushButton_2 = new QLabel(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 20, 1651, 841));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/wav/wav.png);"));
        stackedWidget->addWidget(page);
        pushButton_2->raise();
        mailLogin->raise();
        pushButton_Confirmer->raise();
        PwLogin->raise();
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 360, 161, 31));
        label_10->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        tableViewc = new QTableView(page_2);
        tableViewc->setObjectName("tableViewc");
        tableViewc->setGeometry(QRect(890, 190, 631, 451));
        tableViewc->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 91, 152);"));
        bt_supprimer = new QPushButton(page_2);
        bt_supprimer->setObjectName("bt_supprimer");
        bt_supprimer->setGeometry(QRect(660, 380, 131, 31));
        bt_supprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        combo_critere_tri = new QComboBox(page_2);
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->addItem(QString());
        combo_critere_tri->setObjectName("combo_critere_tri");
        combo_critere_tri->setGeometry(QRect(530, 280, 41, 21));
        combo_critere_tri->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        SERVICE_EFFECTUE = new QLineEdit(page_2);
        SERVICE_EFFECTUE->setObjectName("SERVICE_EFFECTUE");
        SERVICE_EFFECTUE->setGeometry(QRect(220, 410, 111, 21));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 400, 191, 41));
        label_7->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        button_tri = new QPushButton(page_2);
        button_tri->setObjectName("button_tri");
        button_tri->setGeometry(QRect(580, 280, 61, 31));
        button_tri->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        combo_critere = new QComboBox(page_2);
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->addItem(QString());
        combo_critere->setObjectName("combo_critere");
        combo_critere->setGeometry(QRect(530, 240, 51, 31));
        combo_critere->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 200, 81, 41));
        label_8->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        bt_modifier = new QPushButton(page_2);
        bt_modifier->setObjectName("bt_modifier");
        bt_modifier->setGeometry(QRect(40, 480, 111, 51));
        bt_modifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        label_28 = new QLabel(page_2);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(620, 80, 16, 16));
        label_28->setStyleSheet(QString::fromUtf8("backgrouns:blue;"));
        label_28->setScaledContents(true);
        NOM = new QLineEdit(page_2);
        NOM->setObjectName("NOM");
        NOM->setGeometry(QRect(220, 220, 111, 21));
        CONTACT = new QLineEdit(page_2);
        CONTACT->setObjectName("CONTACT");
        CONTACT->setGeometry(QRect(220, 270, 111, 21));
        lineEdit_valeurRecherche = new QLineEdit(page_2);
        lineEdit_valeurRecherche->setObjectName("lineEdit_valeurRecherche");
        lineEdit_valeurRecherche->setGeometry(QRect(590, 250, 81, 21));
        actionGenerer_Rapport_PDF = new QPushButton(page_2);
        actionGenerer_Rapport_PDF->setObjectName("actionGenerer_Rapport_PDF");
        actionGenerer_Rapport_PDF->setGeometry(QRect(1140, 110, 61, 51));
        actionGenerer_Rapport_PDF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/pdf/pdf.png);\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        lineEdit_supprimer = new QLineEdit(page_2);
        lineEdit_supprimer->setObjectName("lineEdit_supprimer");
        lineEdit_supprimer->setGeometry(QRect(510, 380, 101, 21));
        Historic = new QPushButton(page_2);
        Historic->setObjectName("Historic");
        Historic->setGeometry(QRect(670, 440, 131, 31));
        Historic->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 310, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        ID = new QLineEdit(page_2);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(220, 170, 111, 21));
        bt_ajouter = new QPushButton(page_2);
        bt_ajouter->setObjectName("bt_ajouter");
        bt_ajouter->setGeometry(QRect(170, 490, 91, 51));
        bt_ajouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        DESCRIPTION = new QLineEdit(page_2);
        DESCRIPTION->setObjectName("DESCRIPTION");
        DESCRIPTION->setGeometry(QRect(220, 370, 111, 21));
        label_27 = new QLabel(page_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(20, 160, 121, 21));
        label_27->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        type = new QLineEdit(page_2);
        type->setObjectName("type");
        type->setGeometry(QRect(220, 320, 111, 21));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 260, 121, 31));
        label_15->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        stat_bateau = new QPushButton(page_2);
        stat_bateau->setObjectName("stat_bateau");
        stat_bateau->setGeometry(QRect(290, 530, 121, 31));
        stat_bateau->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        btn_rechercher = new QPushButton(page_2);
        btn_rechercher->setObjectName("btn_rechercher");
        btn_rechercher->setGeometry(QRect(660, 320, 111, 31));
        btn_rechercher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 28 px; /* Sets font size */\n"
"    color: black; \n"
" font: 600 28 px \"Sitka Display Semibold\";\n"
"\n"
"        background-color: rgb(16, 91, 152); /* Button background color */\n"
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
        historiqueLabel = new QLabel(page_2);
        historiqueLabel->setObjectName("historiqueLabel");
        historiqueLabel->setGeometry(QRect(590, 480, 241, 191));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 1571, 761));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/pag/pag.jpg);"));
        back = new QPushButton(page_2);
        back->setObjectName("back");
        back->setGeometry(QRect(690, 20, 80, 24));
        stackedWidget->addWidget(page_2);
        label_3->raise();
        historiqueLabel->raise();
        label_10->raise();
        tableViewc->raise();
        bt_supprimer->raise();
        combo_critere_tri->raise();
        SERVICE_EFFECTUE->raise();
        label_7->raise();
        button_tri->raise();
        combo_critere->raise();
        label_8->raise();
        bt_modifier->raise();
        label_28->raise();
        NOM->raise();
        CONTACT->raise();
        lineEdit_valeurRecherche->raise();
        actionGenerer_Rapport_PDF->raise();
        lineEdit_supprimer->raise();
        Historic->raise();
        label_2->raise();
        ID->raise();
        bt_ajouter->raise();
        DESCRIPTION->raise();
        label_27->raise();
        type->raise();
        label_15->raise();
        stat_bateau->raise();
        btn_rechercher->raise();
        back->raise();
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        fill_nom_2 = new QLineEdit(page_5);
        fill_nom_2->setObjectName("fill_nom_2");
        fill_nom_2->setGeometry(QRect(200, 220, 271, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(127, 127, 127, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        fill_nom_2->setPalette(palette);
        label_cout_2 = new QLabel(page_5);
        label_cout_2->setObjectName("label_cout_2");
        label_cout_2->setGeometry(QRect(40, 430, 111, 51));
        label_cout_2->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        btn_gestion_stockss = new QPushButton(page_5);
        btn_gestion_stockss->setObjectName("btn_gestion_stockss");
        btn_gestion_stockss->setGeometry(QRect(1380, 610, 161, 51));
        btn_gestion_stockss->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon.addFile(QString::fromUtf8(":/gestionn/logistics-delivery.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_gestion_stockss->setIcon(icon);
        btn_gestion_stockss->setIconSize(QSize(45, 45));
        lineEdit_ID_3 = new QLineEdit(page_5);
        lineEdit_ID_3->setObjectName("lineEdit_ID_3");
        lineEdit_ID_3->setGeometry(QRect(320, 760, 131, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        lineEdit_ID_3->setPalette(palette1);
        btn_evaluationn = new QPushButton(page_5);
        btn_evaluationn->setObjectName("btn_evaluationn");
        btn_evaluationn->setGeometry(QRect(1380, 750, 161, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush7(QColor(212, 212, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(85, 85, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(113, 113, 170, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush10(QColor(170, 170, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(85, 85, 127, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush12(QColor(246, 246, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        btn_evaluationn->setPalette(palette2);
        btn_evaluationn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon1.addFile(QString::fromUtf8(":/eva/eva.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_evaluationn->setIcon(icon1);
        btn_evaluationn->setIconSize(QSize(45, 45));
        btn_pdff = new QPushButton(page_5);
        btn_pdff->setObjectName("btn_pdff");
        btn_pdff->setGeometry(QRect(1480, 130, 61, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush13(QColor(90, 84, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        btn_pdff->setPalette(palette3);
        btn_pdff->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_description_2 = new QLabel(page_5);
        label_description_2->setObjectName("label_description_2");
        label_description_2->setGeometry(QRect(30, 290, 131, 41));
        label_description_2->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        fill_quanite_2 = new QLineEdit(page_5);
        fill_quanite_2->setObjectName("fill_quanite_2");
        fill_quanite_2->setGeometry(QRect(200, 500, 271, 51));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        fill_quanite_2->setPalette(palette4);
        label_nom_2 = new QLabel(page_5);
        label_nom_2->setObjectName("label_nom_2");
        label_nom_2->setGeometry(QRect(40, 220, 121, 41));
        label_nom_2->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        fill_infos_2 = new QLineEdit(page_5);
        fill_infos_2->setObjectName("fill_infos_2");
        fill_infos_2->setGeometry(QRect(200, 570, 271, 51));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        fill_infos_2->setPalette(palette5);
        button_tri_5 = new QPushButton(page_5);
        button_tri_5->setObjectName("button_tri_5");
        button_tri_5->setGeometry(QRect(40, 30, 281, 101));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        button_tri_5->setPalette(palette6);
        button_tri_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        lineEdit_2 = new QLineEdit(page_5);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 20, 1601, 931));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-image: url(:/bg/bg.jpg);\n"
"border-image: url(:/pag/pag.jpg);"));
        tab_pieces_de_rechange_2 = new QTableView(page_5);
        tab_pieces_de_rechange_2->setObjectName("tab_pieces_de_rechange_2");
        tab_pieces_de_rechange_2->setGeometry(QRect(720, 210, 731, 381));
        tab_pieces_de_rechange_2->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"font: 700 9pt \"Segoe UI\";"));
        combo_critere_3 = new QComboBox(page_5);
        combo_critere_3->addItem(QString());
        combo_critere_3->addItem(QString());
        combo_critere_3->addItem(QString());
        combo_critere_3->addItem(QString());
        combo_critere_3->addItem(QString());
        combo_critere_3->addItem(QString());
        combo_critere_3->addItem(QString());
        combo_critere_3->setObjectName("combo_critere_3");
        combo_critere_3->setGeometry(QRect(1170, 140, 151, 51));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        combo_critere_3->setPalette(palette7);
        lineEdit_valeurRecherche_3 = new QLineEdit(page_5);
        lineEdit_valeurRecherche_3->setObjectName("lineEdit_valeurRecherche_3");
        lineEdit_valeurRecherche_3->setGeometry(QRect(720, 140, 391, 51));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        lineEdit_valeurRecherche_3->setPalette(palette8);
        lineEdit_valeurRecherche_3->setReadOnly(false);
        btn_ajouterr = new QPushButton(page_5);
        btn_ajouterr->setObjectName("btn_ajouterr");
        btn_ajouterr->setGeometry(QRect(70, 690, 131, 51));
        btn_ajouterr->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon2.addFile(QString::fromUtf8(":/ajouter/ajouter-un-bouton.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_ajouterr->setIcon(icon2);
        btn_modifierr = new QPushButton(page_5);
        btn_modifierr->setObjectName("btn_modifierr");
        btn_modifierr->setGeometry(QRect(70, 760, 131, 51));
        btn_modifierr->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_modifierr->setIcon(icon3);
        combo_tri_2 = new QComboBox(page_5);
        combo_tri_2->addItem(QString());
        combo_tri_2->addItem(QString());
        combo_tri_2->setObjectName("combo_tri_2");
        combo_tri_2->setGeometry(QRect(940, 690, 141, 51));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette9.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        combo_tri_2->setPalette(palette9);
        label_id_2 = new QLabel(page_5);
        label_id_2->setObjectName("label_id_2");
        label_id_2->setGeometry(QRect(10, 150, 171, 51));
        label_id_2->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        fill_id_2 = new QLineEdit(page_5);
        fill_id_2->setObjectName("fill_id_2");
        fill_id_2->setGeometry(QRect(200, 150, 271, 51));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette10.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        fill_id_2->setPalette(palette10);
        fill_id_2->setReadOnly(false);
        btn_supprimerr2 = new QPushButton(page_5);
        btn_supprimerr2->setObjectName("btn_supprimerr2");
        btn_supprimerr2->setGeometry(QRect(1020, 600, 131, 51));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette11.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        btn_supprimerr2->setPalette(palette11);
        btn_supprimerr2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon4.addFile(QString::fromUtf8(":/affichr/mettre-a-jour-les-fleches.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_supprimerr2->setIcon(icon4);
        label_type_2 = new QLabel(page_5);
        label_type_2->setObjectName("label_type_2");
        label_type_2->setGeometry(QRect(40, 360, 101, 51));
        label_type_2->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        fill_cout_2 = new QLineEdit(page_5);
        fill_cout_2->setObjectName("fill_cout_2");
        fill_cout_2->setGeometry(QRect(200, 430, 271, 51));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette12.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        fill_cout_2->setPalette(palette12);
        button_trii = new QPushButton(page_5);
        button_trii->setObjectName("button_trii");
        button_trii->setGeometry(QRect(1120, 690, 141, 51));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette13.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        button_trii->setPalette(palette13);
        button_trii->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        button_trii->setIcon(icon5);
        btn_rechercherr = new QPushButton(page_5);
        btn_rechercherr->setObjectName("btn_rechercherr");
        btn_rechercherr->setGeometry(QRect(1060, 150, 31, 31));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette14.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        btn_rechercherr->setPalette(palette14);
        btn_rechercherr->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon6.addFile(QString::fromUtf8(":/chercher/chercher.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_rechercherr->setIcon(icon6);
        btn_rechercherr->setIconSize(QSize(30, 30));
        btn_supprimerr = new QPushButton(page_5);
        btn_supprimerr->setObjectName("btn_supprimerr");
        btn_supprimerr->setGeometry(QRect(320, 690, 131, 51));
        btn_supprimerr->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon7.addFile(QString::fromUtf8(":/supprimer/supprimer.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_supprimerr->setIcon(icon7);
        combo_critere_tri_3 = new QComboBox(page_5);
        combo_critere_tri_3->addItem(QString());
        combo_critere_tri_3->addItem(QString());
        combo_critere_tri_3->addItem(QString());
        combo_critere_tri_3->addItem(QString());
        combo_critere_tri_3->addItem(QString());
        combo_critere_tri_3->addItem(QString());
        combo_critere_tri_3->addItem(QString());
        combo_critere_tri_3->setObjectName("combo_critere_tri_3");
        combo_critere_tri_3->setGeometry(QRect(750, 690, 151, 51));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette15.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        combo_critere_tri_3->setPalette(palette15);
        fill_type_2 = new QComboBox(page_5);
        fill_type_2->addItem(QString());
        fill_type_2->addItem(QString());
        fill_type_2->addItem(QString());
        fill_type_2->addItem(QString());
        fill_type_2->addItem(QString());
        fill_type_2->addItem(QString());
        fill_type_2->setObjectName("fill_type_2");
        fill_type_2->setGeometry(QRect(200, 360, 271, 51));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette16.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        fill_type_2->setPalette(palette16);
        label_quantite_2 = new QLabel(page_5);
        label_quantite_2->setObjectName("label_quantite_2");
        label_quantite_2->setGeometry(QRect(20, 500, 161, 51));
        label_quantite_2->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        btn_statistiques_2 = new QPushButton(page_5);
        btn_statistiques_2->setObjectName("btn_statistiques_2");
        btn_statistiques_2->setGeometry(QRect(1380, 680, 161, 51));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette17.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        btn_statistiques_2->setPalette(palette17);
        btn_statistiques_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon8.addFile(QString::fromUtf8(":/stata/stata.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_statistiques_2->setIcon(icon8);
        btn_statistiques_2->setIconSize(QSize(45, 45));
        label_fournisseurs_2 = new QLabel(page_5);
        label_fournisseurs_2->setObjectName("label_fournisseurs_2");
        label_fournisseurs_2->setGeometry(QRect(0, 560, 191, 61));
        label_fournisseurs_2->setStyleSheet(QString::fromUtf8(" font-size: 28px; /* Sets font size */\n"
"    color: white; \n"
"	font: 600 28px \"Sitka Display Semibold\";\n"
"\n"
"        border: none; /* Remove default border */\n"
"        border-radius: 15px; /* Make edges round */\n"
"        padding: 10px 20px; /* Add padding */"));
        fill_produit_2 = new QLineEdit(page_5);
        fill_produit_2->setObjectName("fill_produit_2");
        fill_produit_2->setGeometry(QRect(200, 290, 271, 51));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette18.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        fill_produit_2->setPalette(palette18);
        back3 = new QPushButton(page_5);
        back3->setObjectName("back3");
        back3->setGeometry(QRect(760, 40, 83, 29));
        stackedWidget->addWidget(page_5);
        lineEdit_2->raise();
        fill_nom_2->raise();
        label_cout_2->raise();
        btn_gestion_stockss->raise();
        lineEdit_ID_3->raise();
        btn_evaluationn->raise();
        btn_pdff->raise();
        label_description_2->raise();
        fill_quanite_2->raise();
        label_nom_2->raise();
        fill_infos_2->raise();
        button_tri_5->raise();
        tab_pieces_de_rechange_2->raise();
        combo_critere_3->raise();
        lineEdit_valeurRecherche_3->raise();
        btn_ajouterr->raise();
        btn_modifierr->raise();
        combo_tri_2->raise();
        label_id_2->raise();
        fill_id_2->raise();
        btn_supprimerr2->raise();
        label_type_2->raise();
        fill_cout_2->raise();
        button_trii->raise();
        btn_rechercherr->raise();
        btn_supprimerr->raise();
        combo_critere_tri_3->raise();
        fill_type_2->raise();
        label_quantite_2->raise();
        btn_statistiques_2->raise();
        label_fournisseurs_2->raise();
        fill_produit_2->raise();
        back3->raise();
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        dateEdit_dateexp = new QDateEdit(page_3);
        dateEdit_dateexp->setObjectName("dateEdit_dateexp");
        dateEdit_dateexp->setGeometry(QRect(250, 530, 181, 25));
        dateEdit_dateexp->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 20, 1561, 881));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/bg/Screenshot 2024-11-21 110143.png);\n"
"border-image: url(:/pag/pag.jpg);"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 300, 121, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        tableView = new QTableView(page_3);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(610, 190, 901, 471));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(86, 105, 134);"));
        pushButton_Afficher = new QPushButton(page_3);
        pushButton_Afficher->setObjectName("pushButton_Afficher");
        pushButton_Afficher->setGeometry(QRect(1000, 680, 141, 31));
        pushButton_Afficher->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        pushButton_Email = new QPushButton(page_3);
        pushButton_Email->setObjectName("pushButton_Email");
        pushButton_Email->setGeometry(QRect(1500, 750, 41, 31));
        pushButton_Email->setStyleSheet(QString::fromUtf8("border-image: url(:/mail/mail.png);"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 585, 221, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"font: 14pt \"Segoe UI\";"));
        lineEdit_numtel = new QLineEdit(page_3);
        lineEdit_numtel->setObjectName("lineEdit_numtel");
        lineEdit_numtel->setGeometry(QRect(250, 250, 181, 20));
        lineEdit_numtel->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        label = new QLabel(page_3);
        label->setObjectName("label");
        label->setGeometry(QRect(-970, 110, 61, 16));
        lineEdit_email = new QLineEdit(page_3);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(250, 310, 181, 20));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        lineEdit_nbrN = new QLineEdit(page_3);
        lineEdit_nbrN->setObjectName("lineEdit_nbrN");
        lineEdit_nbrN->setGeometry(QRect(250, 480, 181, 21));
        lineEdit_nbrN->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 470, 191, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        notifier = new QPushButton(page_3);
        notifier->setObjectName("notifier");
        notifier->setGeometry(QRect(1430, 750, 41, 31));
        notifier->setStyleSheet(QString::fromUtf8("border-image: url(:/notif/notif.png);"));
        comboBox_catP = new QComboBox(page_3);
        comboBox_catP->addItem(QString());
        comboBox_catP->addItem(QString());
        comboBox_catP->addItem(QString());
        comboBox_catP->addItem(QString());
        comboBox_catP->setObjectName("comboBox_catP");
        comboBox_catP->setGeometry(QRect(250, 590, 181, 24));
        comboBox_catP->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        statButton = new QPushButton(page_3);
        statButton->setObjectName("statButton");
        statButton->setGeometry(QRect(1360, 750, 41, 31));
        statButton->setStyleSheet(QString::fromUtf8("border-image: url(:/stat/stat.png);"));
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 410, 211, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        pushButton_modifier = new QPushButton(page_3);
        pushButton_modifier->setObjectName("pushButton_modifier");
        pushButton_modifier->setGeometry(QRect(170, 750, 111, 31));
        pushButton_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        Supprimer = new QPushButton(page_3);
        Supprimer->setObjectName("Supprimer");
        Supprimer->setGeometry(QRect(290, 750, 101, 31));
        Supprimer->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        pushButton_sort = new QPushButton(page_3);
        pushButton_sort->setObjectName("pushButton_sort");
        pushButton_sort->setGeometry(QRect(830, 750, 81, 31));
        pushButton_sort->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 520, 171, 51));
        label_13->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        label_14 = new QLabel(page_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 350, 171, 41));
        label_14->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        label_16 = new QLabel(page_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(610, 740, 71, 41));
        pushButton_ajouter = new QPushButton(page_3);
        pushButton_ajouter->setObjectName("pushButton_ajouter");
        pushButton_ajouter->setGeometry(QRect(40, 750, 121, 31));
        pushButton_ajouter->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        pushButton_rechercher = new QPushButton(page_3);
        pushButton_rechercher->setObjectName("pushButton_rechercher");
        pushButton_rechercher->setGeometry(QRect(460, 200, 21, 21));
        pushButton_rechercher->setStyleSheet(QString::fromUtf8("border-image: url(:/rech/rech.png);"));
        lineEdit_ID = new QLineEdit(page_3);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(250, 200, 181, 20));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        lineEdit_typeP = new QLineEdit(page_3);
        lineEdit_typeP->setObjectName("lineEdit_typeP");
        lineEdit_typeP->setGeometry(QRect(250, 370, 181, 20));
        lineEdit_typeP->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        lineEdit_moyenT = new QLineEdit(page_3);
        lineEdit_moyenT->setObjectName("lineEdit_moyenT");
        lineEdit_moyenT->setGeometry(QRect(250, 420, 181, 20));
        lineEdit_moyenT->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        back2 = new QPushButton(page_3);
        back2->setObjectName("back2");
        back2->setGeometry(QRect(1490, 90, 80, 24));
        exporter = new QPushButton(page_3);
        exporter->setObjectName("exporter");
        exporter->setGeometry(QRect(1510, 130, 61, 51));
        exporter->setStyleSheet(QString::fromUtf8("border-image: url(:/pdf/pdf.png);"));
        label_17 = new QLabel(page_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 200, 181, 21));
        label_17->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 240, 171, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        stackedWidget->addWidget(page_3);
        label_12->raise();
        dateEdit_dateexp->raise();
        label_4->raise();
        tableView->raise();
        pushButton_Afficher->raise();
        pushButton_Email->raise();
        label_9->raise();
        lineEdit_numtel->raise();
        label->raise();
        lineEdit_email->raise();
        lineEdit_nbrN->raise();
        label_6->raise();
        notifier->raise();
        comboBox_catP->raise();
        statButton->raise();
        label_11->raise();
        pushButton_modifier->raise();
        Supprimer->raise();
        pushButton_sort->raise();
        label_13->raise();
        label_14->raise();
        label_16->raise();
        pushButton_ajouter->raise();
        pushButton_rechercher->raise();
        lineEdit_ID->raise();
        lineEdit_typeP->raise();
        lineEdit_moyenT->raise();
        back2->raise();
        exporter->raise();
        label_17->raise();
        label_5->raise();
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        clients = new QPushButton(page_4);
        clients->setObjectName("clients");
        clients->setGeometry(QRect(220, 100, 80, 31));
        fournisseur = new QPushButton(page_4);
        fournisseur->setObjectName("fournisseur");
        fournisseur->setGeometry(QRect(340, 100, 80, 31));
        piecerechange = new QPushButton(page_4);
        piecerechange->setObjectName("piecerechange");
        piecerechange->setGeometry(QRect(470, 100, 101, 31));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1920, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        pushButton_Confirmer->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        pushButton_2->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Description :", nullptr));
        bt_supprimer->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        combo_critere_tri->setItemText(0, QCoreApplication::translate("MainWindow", "IDC", nullptr));
        combo_critere_tri->setItemText(1, QCoreApplication::translate("MainWindow", "SERVICE_EFFECTUE", nullptr));
        combo_critere_tri->setItemText(2, QCoreApplication::translate("MainWindow", "TYPE_BATEAU", nullptr));
        combo_critere_tri->setItemText(3, QCoreApplication::translate("MainWindow", "NOM", nullptr));
        combo_critere_tri->setItemText(4, QCoreApplication::translate("MainWindow", "CONTACT_C", nullptr));
        combo_critere_tri->setItemText(5, QCoreApplication::translate("MainWindow", "DESCRIPTION", nullptr));
        combo_critere_tri->setItemText(6, QString());

        label_7->setText(QCoreApplication::translate("MainWindow", "Service effectue :", nullptr));
        button_tri->setText(QCoreApplication::translate("MainWindow", "tri", nullptr));
        combo_critere->setItemText(0, QCoreApplication::translate("MainWindow", "IDC", nullptr));
        combo_critere->setItemText(1, QCoreApplication::translate("MainWindow", "SERVICE_EFFECTUE", nullptr));
        combo_critere->setItemText(2, QCoreApplication::translate("MainWindow", "NOM", nullptr));
        combo_critere->setItemText(3, QCoreApplication::translate("MainWindow", "DESCRIPTION", nullptr));
        combo_critere->setItemText(4, QCoreApplication::translate("MainWindow", "TYPE_BATEAU", nullptr));
        combo_critere->setItemText(5, QCoreApplication::translate("MainWindow", "CONTACT_C", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "Nom :", nullptr));
        bt_modifier->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        label_28->setText(QString());
        actionGenerer_Rapport_PDF->setText(QString());
        Historic->setText(QCoreApplication::translate("MainWindow", "historique", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Type :", nullptr));
        bt_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Identifiant : ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Contact :", nullptr));
        stat_bateau->setText(QCoreApplication::translate("MainWindow", "stat_bateau", nullptr));
        btn_rechercher->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        historiqueLabel->setText(QString());
        label_3->setText(QString());
        back->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        fill_nom_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        label_cout_2->setText(QCoreApplication::translate("MainWindow", "Co\303\273t", nullptr));
        btn_gestion_stockss->setText(QCoreApplication::translate("MainWindow", "Gestion Stocks", nullptr));
        lineEdit_ID_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "id", nullptr));
        btn_evaluationn->setText(QCoreApplication::translate("MainWindow", "Evaluation", nullptr));
        btn_pdff->setText(QString());
        label_description_2->setText(QCoreApplication::translate("MainWindow", "D\303\251tails", nullptr));
        fill_quanite_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Quantit\303\251", nullptr));
        label_nom_2->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        fill_infos_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "info", nullptr));
        button_tri_5->setText(QString());
        combo_critere_3->setItemText(0, QCoreApplication::translate("MainWindow", "IDP", nullptr));
        combo_critere_3->setItemText(1, QCoreApplication::translate("MainWindow", "NOM_PRODUIT", nullptr));
        combo_critere_3->setItemText(2, QCoreApplication::translate("MainWindow", "DETAILS_DES_PRODUITS", nullptr));
        combo_critere_3->setItemText(3, QCoreApplication::translate("MainWindow", "TYPE_DE_PIECES", nullptr));
        combo_critere_3->setItemText(4, QCoreApplication::translate("MainWindow", "PRIX", nullptr));
        combo_critere_3->setItemText(5, QCoreApplication::translate("MainWindow", "QUANTIT\303\211S", nullptr));
        combo_critere_3->setItemText(6, QCoreApplication::translate("MainWindow", "INFO_F", nullptr));

        lineEdit_valeurRecherche_3->setText(QString());
        lineEdit_valeurRecherche_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        btn_ajouterr->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        btn_modifierr->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        combo_tri_2->setItemText(0, QCoreApplication::translate("MainWindow", "ASC", nullptr));
        combo_tri_2->setItemText(1, QCoreApplication::translate("MainWindow", "DESC", nullptr));

        label_id_2->setText(QCoreApplication::translate("MainWindow", "Identifiant ", nullptr));
        fill_id_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "id", nullptr));
        btn_supprimerr2->setText(QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        label_type_2->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        fill_cout_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "co\303\273t", nullptr));
        button_trii->setText(QCoreApplication::translate("MainWindow", "Tri", nullptr));
        btn_rechercherr->setText(QString());
        btn_supprimerr->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        combo_critere_tri_3->setItemText(0, QCoreApplication::translate("MainWindow", "IDP", nullptr));
        combo_critere_tri_3->setItemText(1, QCoreApplication::translate("MainWindow", "NOM_PRODUIT", nullptr));
        combo_critere_tri_3->setItemText(2, QCoreApplication::translate("MainWindow", "DETAILS_DES_PRODUITS", nullptr));
        combo_critere_tri_3->setItemText(3, QCoreApplication::translate("MainWindow", "TYPE_DE_PIECES", nullptr));
        combo_critere_tri_3->setItemText(4, QCoreApplication::translate("MainWindow", "PRIX", nullptr));
        combo_critere_tri_3->setItemText(5, QCoreApplication::translate("MainWindow", "QUANTIT\303\211S", nullptr));
        combo_critere_tri_3->setItemText(6, QCoreApplication::translate("MainWindow", "INFO_F", nullptr));

        fill_type_2->setItemText(0, QCoreApplication::translate("MainWindow", "Pieces moteur", nullptr));
        fill_type_2->setItemText(1, QCoreApplication::translate("MainWindow", "Propulsion", nullptr));
        fill_type_2->setItemText(2, QCoreApplication::translate("MainWindow", "Electrique", nullptr));
        fill_type_2->setItemText(3, QCoreApplication::translate("MainWindow", "Carburant", nullptr));
        fill_type_2->setItemText(4, QCoreApplication::translate("MainWindow", "Hydrauliques", nullptr));
        fill_type_2->setItemText(5, QCoreApplication::translate("MainWindow", "Refroidissement", nullptr));

        label_quantite_2->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251", nullptr));
        btn_statistiques_2->setText(QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        label_fournisseurs_2->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        fill_produit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "detail", nullptr));
        back3->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        label_12->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "E-mail", nullptr));
        pushButton_Afficher->setText(QCoreApplication::translate("MainWindow", "afficher", nullptr));
        pushButton_Email->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "categorie des pieces", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Identifiant:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Nombre de notes:", nullptr));
        notifier->setText(QString());
        comboBox_catP->setItemText(0, QString());
        comboBox_catP->setItemText(1, QCoreApplication::translate("MainWindow", "pieces de restoration", nullptr));
        comboBox_catP->setItemText(2, QCoreApplication::translate("MainWindow", "pieces de rechange", nullptr));
        comboBox_catP->setItemText(3, QString());

        statButton->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Moyen de transport", nullptr));
        pushButton_modifier->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        Supprimer->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        pushButton_sort->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "date expiration", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Type de produit", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "tri par:", nullptr));
        pushButton_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_rechercher->setText(QString());
        back2->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        exporter->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Numero de tel:", nullptr));
        clients->setText(QCoreApplication::translate("MainWindow", "clients", nullptr));
        fournisseur->setText(QCoreApplication::translate("MainWindow", "fournisseur", nullptr));
        piecerechange->setText(QCoreApplication::translate("MainWindow", "piece rechange", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
