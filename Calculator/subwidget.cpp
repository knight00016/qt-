#include "subwidget.h"

subwidget::subwidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("进制转化");
    s1.setParent(this);
    s1.setText("返回");
    s1.move(300,240);
    connect(&s1,&QPushButton::clicked,
            [=]()
            {
              emit mySignal();

    }
    );

    l1.setParent(this);
    l1.move(80,0);
    QRegExp regx1("^[1][0-1]+$");
    QValidator *validator1=new QRegExpValidator(regx1);
    l1.setValidator(validator1);
    lb1.setParent(this);
    lb1.setText("二进制：");
    lb1.move(0,0);
    s2.setParent(this);
    s2.setText("输入结束");
    s2.move(300,0);
    connect(&s2,&QPushButton::clicked,
            [=]()
    {
        l1.editingFinished();
        QString a1 =l1.text();
        bool ok;
        int val1 = a1.toInt(&ok,2);
        a1=a1.setNum(val1,8);
        l2.setText(a1);
        a1=a1.setNum(val1,10);
        l3.setText(a1);
        a1=a1.setNum(val1,16);
        l4.setText(a1);
    });

    l2.setParent(this);
    l2.move(80,60);
    QRegExp regx2("^[1-7][0-7]+$");
    QValidator *validator2=new QRegExpValidator(regx2);
    l2.setValidator(validator2);
    lb2.setParent(this);
    lb2.setText("八进制：");
    lb2.move(0,60);
    s3.setParent(this);
    s3.setText("输入结束");
    s3.move(300,60);
    connect(&s3,&QPushButton::clicked,
            [=]()
    {
        l2.editingFinished();
        QString a2 =l2.text();
        bool ok;
        int val2 = a2.toInt(&ok,8);
        a2=a2.setNum(val2,2);
        l1.setText(a2);
        a2=a2.setNum(val2,10);
        l3.setText(a2);
        a2=a2.setNum(val2,16);
        l4.setText(a2);
    });

    l3.setParent(this);
    l3.move(80,120);
    QRegExp regx3("^[1-9][0-9]+$");
    QValidator *validator3=new QRegExpValidator(regx3);
    l3.setValidator(validator3);
    lb3.setParent(this);
    lb3.setText("十进制：");
    lb3.move(0,120);
    s4.setParent(this);
    s4.setText("输入结束");
    s4.move(300,120);
    connect(&s4,&QPushButton::clicked,
            [=]()
    {
        l3.editingFinished();
        QString a3 =l3.text();
        bool ok;
        int val3 = a3.toInt(&ok,10);
        a3=a3.setNum(val3,2);
        l1.setText(a3);
        a3=a3.setNum(val3,8);
        l2.setText(a3);
        a3=a3.setNum(val3,16);
        l4.setText(a3);
    });


    l4.setParent(this);
    l4.move(80,180);
    QRegExp regx4("^[1-9a-fA-F][0-9a-fA-F]+$");
    QValidator *validator4=new QRegExpValidator(regx4);
    l4.setValidator(validator4);
    lb4.setParent(this);
    lb4.setText("十六进制：");
    lb4.move(0,180);
    s5.setParent(this);
    s5.setText("输入结束");
    s5.move(300,180);
    connect(&s5,&QPushButton::clicked,
            [=]()
    {
        l4.editingFinished();
        QString a4 =l4.text();
        bool ok;
        int val4 = a4.toInt(&ok,16);
        a4=a4.setNum(val4,2);
        l1.setText(a4);
        a4=a4.setNum(val4,8);
        l2.setText(a4);
        a4=a4.setNum(val4,10);
        l3.setText(a4);
    });
    s6.setParent(this);
    s6.setText("清空");
    s6.move(60,240);
    connect(&s6,&QPushButton::clicked,
            [=]()
    {
        l1.clear();
        l2.clear();
        l3.clear();
        l4.clear();
    });

    setFixedSize(400,300);
}
void subwidget::closeEvent(QCloseEvent *event){
    emit Exitsub();
}
