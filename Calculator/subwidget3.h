#ifndef SUBWIDGET3_H
#define SUBWIDGET3_H

#include <QWidget>
#include<QPushButton>
#include<QButtonGroup>
#include<QLineEdit>
#include<QLabel>
#include<QString>
#include <QValidator>
#include<QCloseEvent>
namespace Ui {
class subwidget3;
}

class subwidget3 : public QWidget
{
    Q_OBJECT

public:
    explicit subwidget3(QWidget *parent = 0);
        void closeEvent(QCloseEvent *event3);
    ~subwidget3();
    QButtonGroup gp;
    QButtonGroup gp2;
    QButtonGroup gp3;
    QButtonGroup gp4;
signals:
    void mySignal3();
    void Exitsub3();
private:
    Ui::subwidget3 *ui;
};

#endif // SUBWIDGET3_H
