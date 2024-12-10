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
    QPushButton *pushButton_2;
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
    QLabel *label_5;
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
    QWidget *page_4;
    QPushButton *clients;
    QPushButton *fournisseur;
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
        stackedWidget->setGeometry(QRect(80, 20, 1321, 411));
        page = new QWidget();
        page->setObjectName("page");
        mailLogin = new QLineEdit(page);
        mailLogin->setObjectName("mailLogin");
        mailLogin->setGeometry(QRect(430, 150, 261, 31));
        pushButton_Confirmer = new QPushButton(page);
        pushButton_Confirmer->setObjectName("pushButton_Confirmer");
        pushButton_Confirmer->setGeometry(QRect(480, 300, 141, 51));
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
        PwLogin->setGeometry(QRect(430, 220, 261, 31));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 751, 391));
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
        label_10->setGeometry(QRect(10, 210, 161, 31));
        label_10->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        tableViewc = new QTableView(page_2);
        tableViewc->setObjectName("tableViewc");
        tableViewc->setGeometry(QRect(500, 70, 271, 161));
        tableViewc->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 91, 152);"));
        bt_supprimer = new QPushButton(page_2);
        bt_supprimer->setObjectName("bt_supprimer");
        bt_supprimer->setGeometry(QRect(680, 310, 71, 31));
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
        SERVICE_EFFECTUE->setGeometry(QRect(130, 240, 111, 21));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 240, 131, 21));
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
        label_8->setGeometry(QRect(10, 100, 81, 41));
        label_8->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        bt_modifier = new QPushButton(page_2);
        bt_modifier->setObjectName("bt_modifier");
        bt_modifier->setGeometry(QRect(10, 340, 81, 31));
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
        NOM->setGeometry(QRect(130, 120, 111, 21));
        CONTACT = new QLineEdit(page_2);
        CONTACT->setObjectName("CONTACT");
        CONTACT->setGeometry(QRect(130, 150, 111, 21));
        lineEdit_valeurRecherche = new QLineEdit(page_2);
        lineEdit_valeurRecherche->setObjectName("lineEdit_valeurRecherche");
        lineEdit_valeurRecherche->setGeometry(QRect(590, 250, 81, 21));
        actionGenerer_Rapport_PDF = new QPushButton(page_2);
        actionGenerer_Rapport_PDF->setObjectName("actionGenerer_Rapport_PDF");
        actionGenerer_Rapport_PDF->setGeometry(QRect(1760, 180, 61, 31));
        actionGenerer_Rapport_PDF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        lineEdit_supprimer->setGeometry(QRect(530, 320, 101, 21));
        Historic = new QPushButton(page_2);
        Historic->setObjectName("Historic");
        Historic->setGeometry(QRect(660, 360, 131, 31));
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
        label_2->setGeometry(QRect(10, 170, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        ID = new QLineEdit(page_2);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(130, 90, 111, 21));
        bt_ajouter = new QPushButton(page_2);
        bt_ajouter->setObjectName("bt_ajouter");
        bt_ajouter->setGeometry(QRect(100, 340, 91, 31));
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
        DESCRIPTION->setGeometry(QRect(130, 210, 111, 21));
        label_27 = new QLabel(page_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(10, 80, 111, 21));
        label_27->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        type = new QLineEdit(page_2);
        type->setObjectName("type");
        type->setGeometry(QRect(130, 180, 111, 21));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 140, 121, 31));
        label_15->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        stat_bateau = new QPushButton(page_2);
        stat_bateau->setObjectName("stat_bateau");
        stat_bateau->setGeometry(QRect(200, 340, 91, 31));
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
        btn_rechercher->setGeometry(QRect(680, 250, 91, 31));
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
        historiqueLabel->setGeometry(QRect(990, 250, 241, 191));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 801, 401));
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
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        dateEdit_dateexp = new QDateEdit(page_3);
        dateEdit_dateexp->setObjectName("dateEdit_dateexp");
        dateEdit_dateexp->setGeometry(QRect(120, 260, 110, 25));
        dateEdit_dateexp->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 0, 661, 401));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/bg/Screenshot 2024-11-21 110143.png);\n"
"border-image: url(:/pag/pag.jpg);"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 140, 47, 13));
        tableView = new QTableView(page_3);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(290, 100, 331, 191));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(86, 105, 134);"));
        pushButton_Afficher = new QPushButton(page_3);
        pushButton_Afficher->setObjectName("pushButton_Afficher");
        pushButton_Afficher->setGeometry(QRect(400, 300, 111, 23));
        pushButton_Afficher->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        pushButton_Email = new QPushButton(page_3);
        pushButton_Email->setObjectName("pushButton_Email");
        pushButton_Email->setGeometry(QRect(610, 370, 31, 21));
        pushButton_Email->setStyleSheet(QString::fromUtf8("border-image: url(:/mail/mail.png);"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 290, 111, 16));
        lineEdit_numtel = new QLineEdit(page_3);
        lineEdit_numtel->setObjectName("lineEdit_numtel");
        lineEdit_numtel->setGeometry(QRect(120, 110, 113, 20));
        lineEdit_numtel->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        label = new QLabel(page_3);
        label->setObjectName("label");
        label->setGeometry(QRect(-970, 110, 61, 16));
        lineEdit_email = new QLineEdit(page_3);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(120, 140, 113, 20));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        lineEdit_nbrN = new QLineEdit(page_3);
        lineEdit_nbrN->setObjectName("lineEdit_nbrN");
        lineEdit_nbrN->setGeometry(QRect(120, 230, 113, 20));
        lineEdit_nbrN->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 230, 101, 16));
        label_5 = new QLabel(page_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 110, 121, 16));
        notifier = new QPushButton(page_3);
        notifier->setObjectName("notifier");
        notifier->setGeometry(QRect(590, 370, 21, 21));
        notifier->setStyleSheet(QString::fromUtf8("border-image: url(:/notif/notif.png);"));
        comboBox_catP = new QComboBox(page_3);
        comboBox_catP->addItem(QString());
        comboBox_catP->addItem(QString());
        comboBox_catP->addItem(QString());
        comboBox_catP->addItem(QString());
        comboBox_catP->setObjectName("comboBox_catP");
        comboBox_catP->setGeometry(QRect(120, 290, 111, 24));
        comboBox_catP->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        statButton = new QPushButton(page_3);
        statButton->setObjectName("statButton");
        statButton->setGeometry(QRect(570, 370, 21, 21));
        statButton->setStyleSheet(QString::fromUtf8("border-image: url(:/stat/stat.png);"));
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 200, 111, 16));
        pushButton_modifier = new QPushButton(page_3);
        pushButton_modifier->setObjectName("pushButton_modifier");
        pushButton_modifier->setGeometry(QRect(90, 360, 75, 23));
        pushButton_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        Supprimer = new QPushButton(page_3);
        Supprimer->setObjectName("Supprimer");
        Supprimer->setGeometry(QRect(170, 360, 75, 23));
        Supprimer->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        pushButton_sort = new QPushButton(page_3);
        pushButton_sort->setObjectName("pushButton_sort");
        pushButton_sort->setGeometry(QRect(380, 360, 31, 23));
        pushButton_sort->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 260, 91, 16));
        label_14 = new QLabel(page_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 170, 81, 16));
        label_16 = new QLabel(page_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(300, 340, 41, 16));
        pushButton_ajouter = new QPushButton(page_3);
        pushButton_ajouter->setObjectName("pushButton_ajouter");
        pushButton_ajouter->setGeometry(QRect(10, 360, 75, 23));
        pushButton_ajouter->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 94);"));
        pushButton_rechercher = new QPushButton(page_3);
        pushButton_rechercher->setObjectName("pushButton_rechercher");
        pushButton_rechercher->setGeometry(QRect(240, 80, 21, 16));
        pushButton_rechercher->setStyleSheet(QString::fromUtf8("border-image: url(:/rech/rech.png);"));
        lineEdit_ID = new QLineEdit(page_3);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(120, 80, 113, 20));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        lineEdit_typeP = new QLineEdit(page_3);
        lineEdit_typeP->setObjectName("lineEdit_typeP");
        lineEdit_typeP->setGeometry(QRect(120, 170, 113, 20));
        lineEdit_typeP->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        lineEdit_moyenT = new QLineEdit(page_3);
        lineEdit_moyenT->setObjectName("lineEdit_moyenT");
        lineEdit_moyenT->setGeometry(QRect(120, 200, 113, 20));
        lineEdit_moyenT->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 227);\n"
"color: rgb(16, 25, 66);"));
        back2 = new QPushButton(page_3);
        back2->setObjectName("back2");
        back2->setGeometry(QRect(550, 20, 80, 24));
        exporter = new QPushButton(page_3);
        exporter->setObjectName("exporter");
        exporter->setGeometry(QRect(570, 63, 71, 21));
        label_17 = new QLabel(page_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 80, 121, 16));
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
        label_5->raise();
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
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        clients = new QPushButton(page_4);
        clients->setObjectName("clients");
        clients->setGeometry(QRect(220, 100, 80, 24));
        fournisseur = new QPushButton(page_4);
        fournisseur->setObjectName("fournisseur");
        fournisseur->setGeometry(QRect(340, 100, 80, 24));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


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

        label_7->setText(QCoreApplication::translate("MainWindow", "Service effecute :", nullptr));
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
        actionGenerer_Rapport_PDF->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
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
        label_12->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "E-mail", nullptr));
        pushButton_Afficher->setText(QCoreApplication::translate("MainWindow", "afficher", nullptr));
        pushButton_Email->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "categorie des pieces", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Identifiant:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Nombre de notes:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Numero de tel:", nullptr));
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
        exporter->setText(QCoreApplication::translate("MainWindow", "exporter", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        clients->setText(QCoreApplication::translate("MainWindow", "clients", nullptr));
        fournisseur->setText(QCoreApplication::translate("MainWindow", "fournisseur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
