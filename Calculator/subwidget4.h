#ifndef SUBWIDGET4_H
#define SUBWIDGET4_H
#define  pai 3.1415926
#include <QWidget>
#include<QPushButton>
#include<QLineEdit>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QGridLayout>
#include<QString>
#include<QStack>
#include<QVector>
#include<vector>
#include<QChar>
#include<qmath.h>
namespace Ui {
class subwidget4;
}

class subwidget4 : public QWidget
{
    Q_OBJECT

public:
    explicit subwidget4(QWidget *parent = 0);
    void closeEvent(QCloseEvent *event4);
    ~subwidget4();
    char nows;//现在对应的符号
        int zuo = 0, you = 0;//左括号和右括号
        int ENDS = 0, hh=0;
        int flag=0;
        int mark;
        QVector<QChar>biaodashi;//用于计算的表达式存放在这里

signals:
    void Exitsub4();
private:
    Ui::subwidget4 *ui;
    QString input=" "; //输入框
    QString gg="0";
    bool flat=false;
private slots:



      double calculate(int x, int y);//

      double number1(int start, int end);//

      double panduan(int start, double number, int y);

      void solve(int x, int y, double num);


};

#endif // SUBWIDGET4_H
