#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include  "clients.h"

#include <QSqlQueryModel>
#include <QTableWidgetItem>

#include <QTextEdit>
#include "wavebot.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_bt_ajouter_clicked();

    void on_bt_modifier_clicked();

    void on_bt_supprimer_clicked();

    void on_stat_bateau_clicked(); // Slot pour le bouton Statistiques par type de

    void on_btn_rechercher_clicked(); // Slot pour le bouton de recherche

    // void on_exportButton_6_clicked(); // Slot pour le bouton d'exportation
    void on_actionGenerer_Rapport_PDF_clicked();

    void on_button_tri_clicked();

     void on_Historic_clicked(); // Slot pour afficher l'historique

     void afficherHistorique(); // Méthode pour charger et afficher l'historique

     void on_pushButton_Confirmer_clicked();

     void on_tabBarClicked(int index); // Déclaration de la méthode pour gérer les clics sur les onglets

     void on_chatButton_clicked();
     void handleResponse(QNetworkReply *reply);



private:
    Ui::MainWindow *ui;
    clients c;
     bool isAscending;
 bool isAuthenticated;        // Variable pour déterminer l'ordre de tri
      WaveBot *waveBot;  // Déclaration du membre WaveBot
     clients currentClient;  // Stocke le client actuel pour le chatbot
      QNetworkAccessManager *networkManager;
      const QString OPENAI_API_KEY = "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"; // Définir la clé API ici
      const QString OPENAI_API_URL = "https://api.openai.com/v1/chat/completions";


};
#endif // MAINWINDOW_H
