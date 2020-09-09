#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include<QPushButton>
#include<QLineEdit>
#include<QLabel>
#include<QString>
#include<QDebug>
#include <QValidator>
#include<QCloseEvent>
class subwidget : public QWidget
{
    Q_OBJECT
public:
    explicit subwidget(QWidget *parent = nullptr);
    void closeEvent(QCloseEvent *event);
signals:
       void mySignal();
       void Exitsub();
public slots:

private:
    QPushButton s1;
    QPushButton s2;
    QPushButton s3;
    QPushButton s4;
    QPushButton s5;
    QPushButton s6;
    QLineEdit l1;
    QLineEdit l2;
    QLineEdit l3;
    QLineEdit l4;
    QLabel lb1;
    QLabel lb2;
    QLabel lb3;
    QLabel lb4;
};

#endif // SUBWIDGET_H
