#ifndef OPERACJEMATEMATYCZNE_H
#define OPERACJEMATEMATYCZNE_H

#include <QMainWindow>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class operacjeMatematyczne; }
QT_END_NAMESPACE

class operacjeMatematyczne : public QMainWindow
{
    Q_OBJECT

public:
    explicit operacjeMatematyczne(QWidget *parent = nullptr);
    float dzielenie (float lew, float praw);
    float mnozenie (float lew, float praw);
    float dodawanie (float lew, float praw);
    float odejmowanie (float lew, float praw);
    float pierwiastkowanie (float lew, float praw);
    float potega (float lew);
    float potega_x (float lew, float praw);
    float silnia (float lew);
    float odwrotnosc (float lew);
signals:

};

#endif // OPERACJEMATEMATYCZNE_H
