#include "xianshi.h"
#include "ui_xianshi.h"

xianshi::xianshi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xianshi)
{
    ui->setupUi(this);
}

xianshi::~xianshi()
{
    delete ui;
}
void xianshi::XS(){
    QFile file("C:/Users/Knight/Desktop/qt/BJX/emm.txt");
    bool isOk=file.open(QIODevice::ReadOnly);
    QTime time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);
    int i = qrand() % 6;    //产生5以内的随机数
    if(isOk==true){
        while(i--){
     array=file.readLine();
     array=file.readLine();
     array=file.readLine();
     array=file.readLine();
     array=file.readLine();
     array=file.readLine();
     array=file.readLine();
        }
     array=file.readLine();
    ui->label->setText(array);
    array=file.readLine();
     ui->label_2->setText(array);
    array=file.readLine();
    ui->label_3->setText(array);
     array=file.readLine();
    ui->label_4->setText(array);
    array=file.readLine();
    ui->label_5->setText(array);
    array=file.readLine();
    ui->label_6->setText(array);
    array=file.readLine();
    bool ok;
    n=array.toInt(&ok,10);
    qDebug()<<n;
    qDebug()<<array;
    }
    file.close();
}
void xianshi::closeEvent(QCloseEvent *event){
    emit mySignal();
}
