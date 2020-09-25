#ifndef XIANSHI_H
#define XIANSHI_H

#include<QWidget>
#include<QLabel>
#include<QFile>
#include<vector>
#include<QTime>
#include<QDebug>
using namespace std;
namespace Ui {
class xianshi;
}

class xianshi : public QWidget
{
    Q_OBJECT
public:
    explicit xianshi(QWidget *parent = 0);
    ~xianshi();
    void XS();
    QByteArray array;
    void closeEvent(QCloseEvent *event);
    int n;
private:
    Ui::xianshi *ui;
signals:
    void mySignal();
};

#endif // XIANSHI_H
