#ifndef SUBWIDGET2_H
#define SUBWIDGET2_H

#include <QWidget>
#include<QPushButton>
#include <QButtonGroup>
namespace Ui {
class subwidget2;
}

class subwidget2 : public QWidget
{
    Q_OBJECT

public:
    explicit subwidget2(QWidget *parent = 0);
    void closeEvent(QCloseEvent *event2);
    ~subwidget2();
    QButtonGroup group1;
    QButtonGroup group2;
    QButtonGroup group3;
    QButtonGroup group4;
signals:
    void mySignal2();
    void Exitsub2();
private:
    Ui::subwidget2 *ui;
};

#endif // SUBWIDGET2_H
