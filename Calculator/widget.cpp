#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
       b1.setParent(this);
       b1.setText("进制转化");
       b1.move(150,50);
       connect(&b1, &QPushButton::clicked,
       [=]()
       {
           s.show();
           this->hide();
       }
       );
       b2.setParent(this);
       b2.setText("常见进制大小比较和求公约数和公倍数");
       b2.move(70,100);
       connect(&b2, &QPushButton::clicked,
       [=]()
       {
           s2.show();
           this->hide();
       }
       );
       b3.setParent(this);
       b3.setText("常见进制四则运算");
       b3.move(130,150);
       connect(&b3, &QPushButton::clicked,
       [=]()
       {
           s3.show();
           this->hide();
       }
       );
       b4.setParent(this);
       b4.setText("解方程");
       b4.move(150,250);
       b5.setParent(this);
       b5.setText("常见运算");
       b5.move(150,200);
       connect(&b5, &QPushButton::clicked,
       [=]()
       {
           s4.show();
           this->hide();
       }
       );
       b6.setParent(this);
       b6.setText("关闭");
       b6.move(150,300);
       connect(&b6,&QPushButton::clicked,
               [=]()
       {
           this->close();
       }
       );
       connect(&s,&subwidget::mySignal,
              [=]()
       {
           this->show();
           s.close();
       }
        );
       connect(&s,&subwidget::Exitsub,
               [=]()
       {
           this->show();
       });
       connect(&s2,&subwidget2::mySignal2,
              [=]()
       {
           this->show();
           s2.close();
       }
        );
       connect(&s2,&subwidget2::Exitsub2,
               [=]()
       {
           this->show();
       });
       connect(&s3,&subwidget3::mySignal3,
              [=]()
       {
           this->show();
           s3.close();
       }
        );
       connect(&s3,&subwidget3::Exitsub3,
               [=]()
       {
           this->show();
       });
       connect(&s4,&subwidget4::Exitsub4,
               [=]()
       {
           this->show();
       });
    ui->setupUi(this);
    setFixedSize(420,350);
}

Widget::~Widget()
{
    delete ui;
}
