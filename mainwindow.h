#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include  "clients.h"
#include"fournisseur.h"
#include"piecerechange.h"

#include <QSqlQueryModel>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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
 protected:
     void keyPressEvent(QKeyEvent *event) override;



private:
    Ui::MainWindow *ui;
    clients c;
    fournisseur Ftmp;
     bool isPasswordVisible = false;
     bool isAscending;
 bool isAuthenticated;        // Variable pour déterminer l'ordre de tri
     PieceRechange pr;
     QString comparerImpactEnvironnemental(const PieceRechange &piece); // Comparer les impacts environnementaux

};
#endif // MAINWINDOW_H
