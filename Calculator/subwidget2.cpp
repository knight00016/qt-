#include "subwidget2.h"
#include "ui_subwidget2.h"

subwidget2::subwidget2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::subwidget2)
{
      ui->setupUi(this);
      setFixedSize(500,700);
      setWindowTitle("常见进制大小比较");
      group1.addButton(ui->radioButton,2);
      group1.addButton(ui->radioButton_2,8);
      group1.addButton(ui->radioButton_3,10);
      group1.addButton(ui->radioButton_4,16);
      group2.addButton(ui->radioButton_5,2);
      group2.addButton(ui->radioButton_6,8);
      group2.addButton(ui->radioButton_7,10);
      group2.addButton(ui->radioButton_8,16);
      group3.addButton(ui->radioButton_9,2);
      group3.addButton(ui->radioButton_10,8);
      group3.addButton(ui->radioButton_11,10);
      group3.addButton(ui->radioButton_12,16);
      group4.addButton(ui->radioButton_13,2);
      group4.addButton(ui->radioButton_14,8);
      group4.addButton(ui->radioButton_15,10);
      group4.addButton(ui->radioButton_16,16);
      connect(ui->radioButton,&QRadioButton::toggled,
                [=](){
            QRegExp regx1("^[1][0-1]+$");
            QValidator *validator1=new QRegExpValidator(regx1);
            ui->lineEdit->setValidator(validator1);
        });
        connect(ui->radioButton_2,&QRadioButton::toggled,
                [=](){
            QRegExp regx2("^[1-7][0-7]+$");
            QValidator *validator2=new QRegExpValidator(regx2);
            ui->lineEdit->setValidator(validator2);
        });
        connect(ui->radioButton_3,&QRadioButton::toggled,
                [=](){
            QRegExp regx3("^[1-9][0-9]+$");
            QValidator *validator3=new QRegExpValidator(regx3);
            ui->lineEdit->setValidator(validator3);
        });
        connect(ui->radioButton_4,&QRadioButton::toggled,
                [=](){
            QRegExp regx4("^[1-9a-fA-F][0-9a-fA-F]+$");
            QValidator *validator4=new QRegExpValidator(regx4);
          ui->lineEdit->setValidator(validator4);
        });
        connect(ui->radioButton_5,&QRadioButton::toggled,
                [=](){
            QRegExp regx1("^[1][0-1]+$");
            QValidator *validator1=new QRegExpValidator(regx1);
            ui->lineEdit_2->setValidator(validator1);
        });
        connect(ui->radioButton_6,&QRadioButton::toggled,
                [=](){
            QRegExp regx2("^[1-7][0-7]+$");
            QValidator *validator2=new QRegExpValidator(regx2);
            ui->lineEdit_2->setValidator(validator2);
        });
        connect(ui->radioButton_7,&QRadioButton::toggled,
                [=](){
            QRegExp regx3("^[1-9][0-9]+$");
            QValidator *validator3=new QRegExpValidator(regx3);
            ui->lineEdit_2->setValidator(validator3);
        });
        connect(ui->radioButton_8,&QRadioButton::toggled,
                [=](){
            QRegExp regx4("^[1-9a-fA-F][0-9a-fA-F]+$");
            QValidator *validator4=new QRegExpValidator(regx4);
          ui->lineEdit_2->setValidator(validator4);
        });
    connect(ui->pushButton_3,&QPushButton::clicked,
            [=]()
            {
              emit mySignal2();

    }
    );
    connect(ui->pushButton,&QPushButton::clicked,
            [=]()
    {
        ui->lineEdit->editingFinished();
        ui->lineEdit_2->editingFinished();
        QString str1=ui->lineEdit->text();
        QString str2=ui->lineEdit_2->text();
        QString str3;
        QString str4;
        bool ok;
        int v1,v2;
        int a1,a2,a3,a4;
        a1=group1.checkedId();
        a2=group2.checkedId();
        a3=group3.checkedId();
        a4=group4.checkedId();
        switch (a1) {
        case 2:
             v1=str1.toInt(&ok,2);
            break;
        case 8:
            v1=str1.toInt(&ok,8);
            break;
        case 10:
            v1=str1.toInt(&ok,10);
            break;
        case 16:
            v1=str1.toInt(&ok,16);
            break;
        }
        switch (a2) {
        case 2:
             v2=str2.toInt(&ok,2);
            break;
        case 8:
            v2=str2.toInt(&ok,8);
            break;
        case 10:
            v2=str2.toInt(&ok,10);
            break;
        case 16:
            v2=str2.toInt(&ok,16);
            break;
        }
        if(v1>v2){
            ui->lineEdit_3->setText("输入一大于输入二");
        }
        else if(v1<v2){
            ui->lineEdit_3->setText("输入一小于输入二");
        }
        else {
            ui->lineEdit_3->setText("输入一等于输入二");
        }
        int gcd=v1<v2?v1:v2;
        while (true) {
           if(v1%gcd==0&&v2%gcd==0)
               break;
           gcd--;
        }
        switch (a3) {
        case 2:
             str3=str3.setNum(gcd,2);
            break;
        case 8:
            str3=str3.setNum(gcd,8);
            break;
        case 10:
            str3=str3.setNum(gcd,10);
            break;
        case 16:
            str3=str3.setNum(gcd,16);
            break;
        }
        ui->lineEdit_4->setText(str3);
        int adc=v1>v2?v1:v2;
        while (true) {
           if(adc%v1==0&&adc%v2==0)
               break;
           adc++;
        }
        switch (a4) {
        case 2:
             str4=str4.setNum(adc,2);
            break;
        case 8:
            str4=str4.setNum(adc,8);
            break;
        case 10:
            str4=str4.setNum(adc,10);
            break;
        case 16:
            str4=str4.setNum(adc,16);
            break;
        }
        ui->lineEdit_5->setText(str4);
    }
    );
    connect(ui->pushButton_2,&QPushButton::clicked,
            [=](){
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
        ui->lineEdit_5->clear();
    });
}
void subwidget2::closeEvent(QCloseEvent *event2){
    emit Exitsub2();
}
subwidget2::~subwidget2()
{
    delete ui;
}
