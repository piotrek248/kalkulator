#include "operacjematematyczne.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

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
