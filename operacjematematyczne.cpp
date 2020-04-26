#include "operacjematematyczne.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

operacjeMatematyczne::operacjeMatematyczne(QWidget *parent) : QMainWindow(parent)
{

}

float operacjeMatematyczne::dzielenie (float lew, float praw){
    return lew / praw;
}

float operacjeMatematyczne::mnozenie(float lew, float praw){
    return lew * praw;
}

float operacjeMatematyczne::dodawanie(float lew, float praw){
    return lew + praw;
}

float operacjeMatematyczne::odejmowanie(float lew, float praw){
    return lew - praw;
}

float operacjeMatematyczne::pierwiastkowanie(float lew, float praw){
    return pow(lew, 1.0f/praw);
}

float operacjeMatematyczne::potega(float lew){
    return pow(lew, 2);
}

float operacjeMatematyczne::potega_x(float lew, float praw){
    return pow(lew, praw);
}

float operacjeMatematyczne::silnia(float lew){
    float wynik = 1;
    if (lew == 0) return 1;
    else{
        while(lew > 0){
            wynik = wynik * lew;
            lew--;
        }
    }
    return wynik;
}

float operacjeMatematyczne::odwrotnosc(float lew){
    return 1 / lew;
}
