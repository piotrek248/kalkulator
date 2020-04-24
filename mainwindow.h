#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

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
    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_kropka_clicked();

    void on_button_plus_clicked();

    void on_button_minus_clicked();

    void on_button_podziel_clicked();

    void on_button_razy_clicked();

    void on_button_rowna_sie_clicked();

    void on_button_clear_clicked();

    void on_button_memory_plus_clicked();

    void on_button_memory_minus_clicked();

    void on_button_memory_clicked();

private:
    Ui::MainWindow *ui;
    std::vector <float> pamiec;
    unsigned long i = 0;
    unsigned long licznik =0;
    QString wynik;
    float lewa,prawa;
    int dzialanie = 0; //numer dzialania 1 - dodawania, 2 - odejmowanie, 3 dzielenie, 4 - mnozenie 0 - pozycja wyjsciowa
};
#endif // MAINWINDOW_H
