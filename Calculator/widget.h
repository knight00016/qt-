#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>
#include"subwidget.h"
#include"subwidget2.h"
#include"subwidget3.h"
#include"subwidget4.h"
#include <QLineEdit>
#include <QLabel>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QPushButton b1;
    QPushButton b2;
    QPushButton b3;
    QPushButton b4;
    QPushButton b5;
    QPushButton b6;
    subwidget s;
    subwidget2 s2;
    subwidget3 s3;
    subwidget4 s4;
};

#endif // WIDGET_H
