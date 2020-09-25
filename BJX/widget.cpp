#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(&xs,&xianshi::mySignal,
           [=]()
    {
        this->show();
        xs.close();
    }
     );
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_pushButton_clicked()
{
    this->hide();
    xs.show();
    xs.XS();
}
