#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "piecerechange.h"
#include <QProgressBar>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_ajouter_clicked();
    void on_btn_supprimer_clicked();
    void on_btn_modifier_clicked();
    bool validateInputs();
    bool isValidText(const QString &text);
    void on_tab_pieces_de_rechange_clicked(const QModelIndex &index);
    void on_btn_supprimer_2_clicked();
    void on_btn_rechercher_clicked();
    void on_button_tri_clicked();
    void on_btn_gestion_stocks_clicked();
    void on_btn_statistiques_clicked();
    void on_btn_pdf_clicked();
    void on_btn_evaluation_clicked();
    void afficherGraphique(const PieceRechange &pieceSelectionnee, const PieceRechange &meilleurPiece);


protected:
      void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::MainWindow *ui;
    PieceRechange pr;
     QString comparerImpactEnvironnemental(const PieceRechange &piece); // Comparer les impacts environnementaux

};

#endif
