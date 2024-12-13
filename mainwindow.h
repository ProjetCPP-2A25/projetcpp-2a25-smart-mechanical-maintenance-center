#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "arduino.h"
#include  "clients.h"
#include"fournisseur.h"
#include"piecerechange.h"
#include "arduino2.h"
#include <QSqlQueryModel>
#include <QTableWidgetItem>
#include <QProgressBar>
#include <Qstring>

#include "employec.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void exportToPdf();
    void readKeypadInput();

//private slots:


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
     void on_pushButton_ajouter_clicked();
     void on_Supprimer_clicked();
     void on_Modifier_clicked();
     void on_Afficher_clicked();
     void on_Rechercher_clicked();
     void on_sortButton_clicked();
     void on_pb_notfier_clicked();
     void on_btn_statistiques_clicked();
     void on_exporter_clicked();
     void sendEmail(const QString &to, const QString &subject, const QString &body);
     void on_pushButton_sendEmail_clicked();
     void on_tableView_clicked(const QModelIndex &index);
     void on_btn_ajouterr_clicked();
     void on_btn_supprimerr_clicked();
     void on_btn_modifierr_clicked();
     bool validateInputs();
     bool isValidText(const QString &text);
     void on_tab_pieces_de_rechange_2_clicked(const QModelIndex &index);
     void on_btn_supprimerr2_clicked();
     void on_btn_rechercherr_clicked();
     void on_button_trii_clicked();
     void on_btn_gestion_stockss_clicked();
     void on_btn_statistiques_2_clicked();
     void on_btn_pdff_clicked();
     void on_btn_evaluationn_clicked();
     void afficherGraphique(const PieceRechange &pieceSelectionnee, const PieceRechange &meilleurPiece);
     void on_btn_eye_clicked();
     void startTextAnimation(const QString &text);
     void updateTextAnimation();
 protected:
     void keyPressEvent(QKeyEvent *event) override;
     void keyNavigationEvent(QKeyEvent *event);
     void keyPreviousPageEvent(QKeyEvent *event);

 private slots:
     void update_label();

     void handle_fan_button(); // Slot pour le bouton ventilateur
     void show_alert_history();
     void update_label2();   // slot permettant la mise à jour du label état de la lampe 1,
     // ce slot est lancé à chaque réception d'un message de Arduino

     void on_buzzerButton_clicked();
      void switchToPageByObjectName(const QString &objectName);

    // moha
      void on_ajout_clicked();
      void clearFields();


      void on_afficher_clicked();

      void on_modif_clicked();
      QString isCodeExists(const int code);

      void on_supprimer_clicked();

      void on_rech_clicked();

      void on_tabWidget_2_currentChanged(int index);

      void on_tabWidget_2_tabBarClicked(int index);

      void on_exporter_2_clicked();

      void on_tri_clicked();

      void on_tri_nom_clicked();

      void on_tri_statut_clicked();

      void on_tri_salaire_clicked();

      void on_tri_poste_clicked();

      void on_tri_diplome_clicked();

      void on_tri_points_clicked();

      void on_tri_conge_clicked();

      void on_QR_clicked();




private:
    Ui::MainWindow *ui;
    clients c;
    fournisseur Ftmp;
     bool isPasswordVisible = false;
     bool isAscending;
 bool isAuthenticated;        // Variable pour déterminer l'ordre de tri
     PieceRechange pr;
     QString comparerImpactEnvironnemental(const PieceRechange &piece); // Comparer les impacts environnementaux
     QList<QString> alertHistory; // Conteneur pour l'historique des alertes


     QString buffer; // Tampon pour stocker les données reçues.

     Arduino A; // Objet pour gérer Arduino
     void update_progress_bar(QProgressBar *progressBar, float value, int seuilVert, int seuilRouge); // Couleur dynamique
     void update_alert_button(float temperature, float humidite, int tempSeuilVert, int tempSeuilRouge, int humSeuilVert, int humSeuilRouge);
     bool buzzerOn = true;  // État du buzzer (par défaut activé)


     QByteArray data2; // variable contenant les données reçues

     arduino a; // objet temporaire

     employec Ptmp;
     employec e;
     QSerialPort *arduino;
     QString arduinoportname;
     bool arduinoIsAvailable;

};
#endif // MAINWINDOW_H
