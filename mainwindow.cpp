#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "operacjematematyczne.h"
#include <QChar>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->wyswietlacz->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_0){
        if(ui->wyswietlacz->text() != "0")
        ui->wyswietlacz->insert("0");
    }
    if(event->key() == Qt::Key_1){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("1");
        } else ui->wyswietlacz->insert("1");
    }
    if(event->key() == Qt::Key_2){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("2");
        } else ui->wyswietlacz->insert("2");
    }
    if(event->key() == Qt::Key_3){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("3");
        } else ui->wyswietlacz->insert("3");
    }
    if(event->key() == Qt::Key_4){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("4");
        } else ui->wyswietlacz->insert("4");
    }
    if(event->key() == Qt::Key_5){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("5");
        } else ui->wyswietlacz->insert("5");
    }
    if(event->key() == Qt::Key_6){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("6");
        } else ui->wyswietlacz->insert("6");
    }
    if(event->key() == Qt::Key_7){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("7");
        } else ui->wyswietlacz->insert("7");
    }
    if(event->key() == Qt::Key_8){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("8");
        } else ui->wyswietlacz->insert("8");
    }
    if(event->key() == Qt::Key_9){
        if(ui->wyswietlacz->text() == "0"){
        ui->wyswietlacz->clear();
        ui->wyswietlacz->setText("9");
        } else ui->wyswietlacz->insert("9");
    }
    if(event->key() == Qt::Key_Plus){
        lewa = ui->wyswietlacz->text().toFloat();
        dzialanie = 1;
        ui->wyswietlacz->clear();
    }
    if(event->key() == Qt::Key_Minus){
        lewa = ui->wyswietlacz->text().toFloat();
        dzialanie = 2;
        ui->wyswietlacz->clear();
    }
    if(event->key() == Qt::Key_Slash){
        lewa = ui->wyswietlacz->text().toFloat();
        dzialanie = 3;
        ui->wyswietlacz->clear();
    }
    if(event->key() == Qt::Key_multiply){
        lewa = ui->wyswietlacz->text().toFloat();
        dzialanie = 4;
        ui->wyswietlacz->clear();
    }
    if(event->key() == Qt::Key_Enter){
        operacjeMatematyczne obiekt_operacje;
        switch (dzialanie) {
        case 1:
            prawa = ui->wyswietlacz->text().toFloat();
            wynik = QString::number(obiekt_operacje.dodawanie(lewa, prawa));
            ui->wyswietlacz->setText(wynik);
            break;
        case 2:
            prawa = ui->wyswietlacz->text().toFloat();
            wynik = QString::number(obiekt_operacje.odejmowanie(lewa, prawa));
            ui->wyswietlacz->setText(wynik);
            break;
        case 3:
            prawa = ui->wyswietlacz->text().toFloat();
            wynik = QString::number(obiekt_operacje.dzielenie(lewa, prawa));
            ui->wyswietlacz->setText(wynik);
            break;
        case 4:
            prawa = ui->wyswietlacz->text().toFloat();
            wynik = QString::number(obiekt_operacje.mnozenie(lewa, prawa));
            ui->wyswietlacz->setText(wynik);
            break;
        case 5:
            prawa = ui->wyswietlacz->text().toFloat();
            wynik = QString::number(obiekt_operacje.potega_x(lewa, prawa));
            ui->wyswietlacz->setText(wynik);
            break;
        case 6:
            prawa = ui->wyswietlacz->text().toFloat();
            wynik = QString::number(obiekt_operacje.pierwiastkowanie(lewa, prawa));
            ui->wyswietlacz->setText(wynik);
            break;
        }
    }
}


void MainWindow::on_button_1_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("1");
    } else ui->wyswietlacz->insert("1");
}

void MainWindow::on_button_2_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("2");
    } else ui->wyswietlacz->insert("2");
}

void MainWindow::on_button_3_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("3");
    } else ui->wyswietlacz->insert("3");
}

void MainWindow::on_button_4_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("4");
    } else ui->wyswietlacz->insert("4");
}

void MainWindow::on_button_5_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("5");
    } else ui->wyswietlacz->insert("5");
}

void MainWindow::on_button_6_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("6");
    } else ui->wyswietlacz->insert("6");
}

void MainWindow::on_button_7_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("7");
    } else ui->wyswietlacz->insert("7");
}

void MainWindow::on_button_8_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("8");
    } else ui->wyswietlacz->insert("8");
}

void MainWindow::on_button_9_clicked()
{
    if(ui->wyswietlacz->text() == "0"){
    ui->wyswietlacz->clear();
    ui->wyswietlacz->setText("9");
    } else ui->wyswietlacz->insert("9");
}

void MainWindow::on_button_0_clicked()
{
    if(ui->wyswietlacz->text() != "0")
    ui->wyswietlacz->insert("0");
}

void MainWindow::on_button_kropka_clicked()
{
    ui->wyswietlacz->insert(".");
}

void MainWindow::on_button_plus_clicked()
{
    lewa = ui->wyswietlacz->text().toFloat();
    dzialanie = 1;
    ui->wyswietlacz->clear();
}

void MainWindow::on_button_minus_clicked()
{
    lewa = ui->wyswietlacz->text().toFloat();
    dzialanie = 2;
    ui->wyswietlacz->clear();
}

void MainWindow::on_button_podziel_clicked()
{
    lewa = ui->wyswietlacz->text().toFloat();
    dzialanie = 3;
    ui->wyswietlacz->clear();
}

void MainWindow::on_button_razy_clicked()
{
    lewa = ui->wyswietlacz->text().toFloat();
    dzialanie = 4;
    ui->wyswietlacz->clear();
}

void MainWindow::on_button_potega_x_clicked()
{
    lewa = ui->wyswietlacz->text().toFloat();
    dzialanie = 5;
    ui->wyswietlacz->clear();
}

void MainWindow::on_button_pierwiastek_clicked()
{
    lewa = ui->wyswietlacz->text().toFloat();
    dzialanie = 6;
    ui->wyswietlacz->clear();
}


void MainWindow::on_button_rowna_sie_clicked()
{
    operacjeMatematyczne obiekt_operacje;
    switch (dzialanie) {
    case 1:
        prawa = ui->wyswietlacz->text().toFloat();
        wynik = QString::number(obiekt_operacje.dodawanie(lewa, prawa));
        ui->wyswietlacz->setText(wynik);
        break;
    case 2:
        prawa = ui->wyswietlacz->text().toFloat();
        wynik = QString::number(obiekt_operacje.odejmowanie(lewa, prawa));
        ui->wyswietlacz->setText(wynik);
        break;
    case 3:
        prawa = ui->wyswietlacz->text().toFloat();
        wynik = QString::number(obiekt_operacje.dzielenie(lewa, prawa));
        ui->wyswietlacz->setText(wynik);
        break;
    case 4:
        prawa = ui->wyswietlacz->text().toFloat();
        wynik = QString::number(obiekt_operacje.mnozenie(lewa, prawa));
        ui->wyswietlacz->setText(wynik);
        break;
    case 5:
        prawa = ui->wyswietlacz->text().toFloat();
        wynik = QString::number(obiekt_operacje.potega_x(lewa, prawa));
        ui->wyswietlacz->setText(wynik);
        break;
    case 6:
        prawa = ui->wyswietlacz->text().toFloat();
        wynik = QString::number(obiekt_operacje.pierwiastkowanie(lewa, prawa));
        ui->wyswietlacz->setText(wynik);
        break;
    }
}

void MainWindow::on_button_clear_clicked()
{
    ui->wyswietlacz->setText("0");
    lewa = 0;
    prawa =0;
}

void MainWindow::on_button_memory_plus_clicked()
{
    pamiec.push_back(ui->wyswietlacz->text().toFloat());
}

void MainWindow::on_button_memory_minus_clicked()
{
    pamiec.pop_back();
}

void MainWindow::on_button_memory_clicked()
{
    if(licznik <= pamiec.size()){
     QString mem = QString::number(pamiec[licznik]);
     ui->wyswietlacz->setText(mem);
     licznik++;
    } else licznik = 0;

}

void MainWindow::on_button_silnia_clicked()
{
    operacjeMatematyczne obiekt_operacje;
    lewa = ui->wyswietlacz->text().toFloat();
    wynik = QString::number(obiekt_operacje.silnia(lewa));
    ui->wyswietlacz->setText(wynik);
}


void MainWindow::on_button_odwrotnosc_clicked()
{
    operacjeMatematyczne obiekt_operacje;
    lewa = ui->wyswietlacz->text().toFloat();
    wynik = QString::number(obiekt_operacje.odwrotnosc(lewa));
    ui->wyswietlacz->setText(wynik);
}


void MainWindow::on_button_potega_2_clicked()
{
    operacjeMatematyczne obiek_operacje;
    lewa = ui->wyswietlacz->text().toFloat();
    wynik = QString::number(obiek_operacje.potega(lewa));
    ui->wyswietlacz->setText(wynik);
}
