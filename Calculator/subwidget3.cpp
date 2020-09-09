#include "subwidget3.h"
#include "ui_subwidget3.h"

subwidget3::subwidget3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::subwidget3)
{
    ui->setupUi(this);
    setFixedSize(420,500);
    setWindowTitle("常见进制四则运算");
    gp.addButton(ui->radioButton,2);
    gp.addButton(ui->radioButton_2,10);
    gp.addButton(ui->radioButton_3,16);
    gp2.addButton(ui->radioButton_4,2);
    gp2.addButton(ui->radioButton_5,10);
    gp2.addButton(ui->radioButton_6,16);
    gp3.addButton(ui->radioButton_7,0);
    gp3.addButton(ui->radioButton_8,1);
    gp3.addButton(ui->radioButton_9,2);
    gp3.addButton(ui->radioButton_10,3);
    gp4.addButton(ui->radioButton_11,2);
    gp4.addButton(ui->radioButton_12,10);
    gp4.addButton(ui->radioButton_13,16);
    connect(ui->radioButton,&QRadioButton::toggled,
              [=](){
          QRegExp regx1("^[1][0-1]+$");
          QValidator *validator1=new QRegExpValidator(regx1);
          ui->lineEdit->setValidator(validator1);
      });
    connect(ui->radioButton_2,&QRadioButton::toggled,
            [=](){
        QRegExp regx2("^[1-9][0-9]+$");
        QValidator *validator2=new QRegExpValidator(regx2);
        ui->lineEdit->setValidator(validator2);
    });
    connect(ui->radioButton_3,&QRadioButton::toggled,
            [=](){
        QRegExp regx3("^[1-9a-fA-F][0-9a-fA-F]+$");
        QValidator *validator3=new QRegExpValidator(regx3);
        ui->lineEdit->setValidator(validator3);
    });
    connect(ui->radioButton_4,&QRadioButton::toggled,
              [=](){
          QRegExp regx1("^[1][0-1]+$");
          QValidator *validator1=new QRegExpValidator(regx1);
          ui->lineEdit_2->setValidator(validator1);
      });
    connect(ui->radioButton_5,&QRadioButton::toggled,
            [=](){
        QRegExp regx2("^[1-9][0-9]+$");
        QValidator *validator2=new QRegExpValidator(regx2);
        ui->lineEdit_2->setValidator(validator2);
    });
    connect(ui->radioButton_6,&QRadioButton::toggled,
            [=](){
        QRegExp regx3("^[1-9a-fA-F][0-9a-fA-F]+$");
        QValidator *validator3=new QRegExpValidator(regx3);
        ui->lineEdit_2->setValidator(validator3);
    });
    connect(ui->pushButton_3,&QPushButton::clicked,
            [=](){
        emit mySignal3();
    });
    connect(ui->pushButton,&QPushButton::clicked,
            [=](){
       ui->lineEdit->editingFinished();
       ui->lineEdit_2->editingFinished();
       QString str1=ui->lineEdit->text();
       QString str2=ui->lineEdit_2->text();
       bool ok;
       int v1,v2,v3;
       int a1,a2,a3,a4;
       a1=gp.checkedId();
       a2=gp2.checkedId();
       switch (a1) {
       case 2:
            v1=str1.toInt(&ok,2);
           break;
       case 10:
           v1=str1.toInt(&ok,10);
           break;
       case 16:
           v1=str1.toInt(&ok,16);
           break;
       default:
           break;
       }
       switch (a2) {
       case 2:
            v2=str2.toInt(&ok,2);
           break;
       case 10:
           v2=str2.toInt(&ok,10);
           break;
       case 16:
           v2=str2.toInt(&ok,16);
           break;
       default:
           break;
       }
       a3=gp3.checkedId();
       switch (a3) {
       case 0:
           v3=v1+v2;
           break;
       case 1:
           v3=v1-v2;
           break;
       case 2:
           v3=v1*v2;
           break;
       case 3:
           v3=v1/v2;
           break;
       default:
           break;
       }
       a4=gp4.checkedId();
       QString str3;
       switch (a4){
       case 2:
            str3=QString::number(v3,2);
           break;
       case 10:
           str3=QString::number(v3,10);
           break;
       case 16:
           str3=QString::number(v3,16);
           break;
       default:
           break;
       }
       ui->lineEdit_3->setText(str3);
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
    });
}
void subwidget3::closeEvent(QCloseEvent *event3){
    emit Exitsub3();
}
subwidget3::~subwidget3()
{
    delete ui;
}
