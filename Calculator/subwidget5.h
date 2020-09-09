#ifndef SUBWIDGET5_H
#define SUBWIDGET5_H

#include <QWidget>

namespace Ui {
class subwidget5;
}

class subwidget5 : public QWidget
{
    Q_OBJECT

public:
    explicit subwidget5(QWidget *parent = 0);
    ~subwidget5();

private:
    Ui::subwidget5 *ui;
};

#endif // SUBWIDGET5_H
