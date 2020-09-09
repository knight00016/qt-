#include "subwidget5.h"
#include "ui_subwidget5.h"

subwidget5::subwidget5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::subwidget5)
{
    ui->setupUi(this);
}

subwidget5::~subwidget5()
{
    delete ui;
}
