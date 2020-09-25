#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"xianshi.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    xianshi xs;
};

#endif // WIDGET_H
