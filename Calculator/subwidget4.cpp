#include "subwidget4.h"
#include "ui_subwidget4.h"

subwidget4::subwidget4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::subwidget4)
{
    ui->setupUi(this);
    setFixedSize(660,400);
    ui->pushButton_deng->move(570,295);
    ui->lineEdit->setFocusPolicy(Qt::NoFocus);
    connect(ui->pushButton_one,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '1';
        biaodashi.push_back(nows);
        input += '1';
        ENDS++;
        ui->lineEdit->setText(input);
    });

    connect(ui->pushButton_two,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '2';
        biaodashi.push_back(nows);
        input += '2';
        ENDS++;
        ui->lineEdit->setText(input);
    });

    connect(ui->pushButton_three,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '3';
        biaodashi.push_back(nows);
        input += '3';
        ENDS++;
        ui->lineEdit->setText(input);
    });

    connect(ui->pushButton_four,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '4';
        biaodashi.push_back(nows);
        input += '4';
        ENDS++;
        ui->lineEdit->setText(input);
    });
    connect(ui->pushButton_five,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '5';
        biaodashi.push_back(nows);
        input += '5';
        ENDS++;
        ui->lineEdit->setText(input);
    });
    connect(ui->pushButton_six,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '6';
        biaodashi.push_back(nows);
        input += '6';
        ENDS++;
        ui->lineEdit->setText(input);
    });

    connect(ui->pushButton_seven,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '7';
        biaodashi.push_back(nows);
        input += '7';
        ENDS++;
        ui->lineEdit->setText(input);
    });

    connect(ui->pushButton_eight,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '8';
        biaodashi.push_back(nows);
        input += '8';
        ENDS++;
        ui->lineEdit->setText(input);
    });

    connect(ui->pushButton_nine,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '9';
        biaodashi.push_back(nows);
        input += '9';
        ENDS++;
        ui->lineEdit->setText(input);
    });
    connect(ui->pushButton_zero,&QPushButton::clicked,[=](){
        if(flag==0){
        if(input==" "){
         input=gg;
         ENDS++;
         biaodashi.push_back('0');
         ui->lineEdit->setText(input);
        }
        else if(input==gg){
            input==gg;
        }
        else{
            nows = '0';
            biaodashi.push_back(nows);
            input += '0';
            ENDS++;
            ui->lineEdit->setText(input);
        }}
        else{
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
            nows = '0';
            biaodashi.push_back(nows);
            input =gg;
            ENDS++;
            ui->lineEdit->setText(input);
        }
    });

    connect(ui->pushButton_jia,&QPushButton::clicked,[=](){
        nows = '+';
        biaodashi.push_back(nows);
        input += '+';
        ENDS++;
        ui->lineEdit->setText(input);
        flag=0;
    });

    connect(ui->pushButton_jian,&QPushButton::clicked,[=](){
        nows = '-';
        biaodashi.push_back(nows);
        input += '-';
        ENDS++;
        ui->lineEdit->setText(input);
        flag=0;
    });

    connect(ui->pushButton_cheng,&QPushButton::clicked,[=](){
        nows = '*';
        biaodashi.push_back(nows);
        input += '*';
        ENDS++;
        ui->lineEdit->setText(input);
        flag=0;
    });

    connect(ui->pushButton_chu,&QPushButton::clicked,[=](){
        nows = '/';
        biaodashi.push_back(nows);
        input += '/';
        ENDS++;
        ui->lineEdit->setText(input);
        flag=0;
    });

    connect(ui->pushButton_point,&QPushButton::clicked,[=](){
        nows = '.';
        biaodashi.push_back(nows);
        input += '.';
        ENDS++;
        ui->lineEdit->setText(input);
    });

    connect(ui->pushButton_zuo,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = '(';
        biaodashi.push_back(nows);
        input += '(';
        ENDS++;
        zuo++;
        ui->lineEdit->setText(input);
    });
    connect(ui->pushButton_you,&QPushButton::clicked,[=](){
        if(input==gg||flag==1){
            input.clear();
            flat=false;
             ENDS = 0, hh=0;
            biaodashi.clear();
            flag=0;
        }
        nows = ')';
        biaodashi.push_back(nows);
        input += ')';
        ENDS++;
        you++;
        ui->lineEdit->setText(input);
    });

    connect(ui->pushButton_DEL,&QPushButton::clicked,[=](){
        biaodashi.pop_back();
        ENDS--;
        input=input.left(input.size()-1);
        ui->lineEdit->setText(input);
    });
    connect(ui->pushButton_AC,&QPushButton::clicked,[=](){
        input=" ";
        flat=false;
        zuo = 0, you = 0;
         ENDS = 0, hh=0;
        biaodashi.clear();
        ui->lineEdit->setText(input);
    });
    connect(ui->pushButton_deng,&QPushButton::clicked,[=](){
        nows = '=';
        biaodashi.push_back(nows);
        if (hh == 0)
        {
            hh = 1;
            biaodashi.push_back(' ');
        }
        ENDS++;
        input += '=';
        ui->lineEdit->setText(input);
        int i, j;
        double rs;
        if (zuo != you)
        {
            input=input+"=Error";
            ui->lineEdit->setText(input);
        }
        else
            while (zuo > 0)
            {
            for (i = 0; i < ENDS; i++)
                if (biaodashi[i] == '(')
                {
                for (j = i; j <= ENDS; j++)
                    if (biaodashi[j] == ')')
                    {
                    calculate(i + 1, j-1);
                    break;
                    }
                break;
                }
            zuo--;
            you--;
            }
        if (zuo == 0 && you == 0)
            rs = calculate(0, ENDS);
        flag=1;
        input=QString::number(rs);
        ui->lineEdit->setText(input);
        flat=false;
        zuo = 0, you = 0;
         ENDS = input.length(), hh=0;
         biaodashi.clear();
        int jkl=0;
        while (jkl<ENDS) {
            biaodashi.push_back(input[jkl]);
                 jkl++;
        }
        });
    connect(ui->pushButton_sin,&QPushButton::clicked,[=](){
        nows = '=';
        biaodashi.push_back(nows);
        if (hh == 0)
        {
            hh = 1;
            biaodashi.push_back(' ');
        }
        ENDS++;
        input += '=';
        int i, j;
        double rs;
        if (zuo != you)
        {
            input=input+"=Error";
            ui->lineEdit->setText(input);
        }
        else
            while (zuo > 0)
            {
            for (i = 0; i < ENDS; i++)
                if (biaodashi[i] == '(')
                {
                for (j = i; j <= ENDS; j++)
                    if (biaodashi[j] == ')')
                    {
                    calculate(i + 1, j-1);
                    break;
                    }
                break;
                }
            zuo--;
            you--;
            }
        if (zuo == 0 && you == 0)
            rs = calculate(0, ENDS);
        flag=1;
        double rt=sin(rs/180*pai);
        input=QString::number(rt);
        ui->lineEdit->setText(input);
        flat=false;
        zuo = 0, you = 0;
         ENDS = input.length(), hh=0;
         biaodashi.clear();
        int jkl=0;
        while (jkl<ENDS) {
            biaodashi.push_back(input[jkl]);
                 jkl++;
        }

    });
    connect(ui->pushButton_cos,&QPushButton::clicked,[=](){
        nows = '=';
        biaodashi.push_back(nows);
        if (hh == 0)
        {
            hh = 1;
            biaodashi.push_back(' ');
        }
        ENDS++;
        input += '=';
        int i, j;
        double rs;
        if (zuo != you)
        {
            input=input+"=Error";
            ui->lineEdit->setText(input);
        }
        else
            while (zuo > 0)
            {
            for (i = 0; i < ENDS; i++)
                if (biaodashi[i] == '(')
                {
                for (j = i; j <= ENDS; j++)
                    if (biaodashi[j] == ')')
                    {
                    calculate(i + 1, j-1);
                    break;
                    }
                break;
                }
            zuo--;
            you--;
            }
        if (zuo == 0 && you == 0)
            rs = calculate(0, ENDS);
        flag=1;
        double rt=cos(rs/180*pai);
        input=QString::number(rt);
        ui->lineEdit->setText(input);
        flat=false;
        zuo = 0, you = 0;
         ENDS = input.length(), hh=0;
         biaodashi.clear();
        int jkl=0;
        while (jkl<ENDS) {
            biaodashi.push_back(input[jkl]);
                 jkl++;
        }
    });
    connect(ui->pushButton_ln,&QPushButton::clicked,[=](){
        nows = '=';
        biaodashi.push_back(nows);
        if (hh == 0)
        {
            hh = 1;
            biaodashi.push_back(' ');
        }
        ENDS++;
        input += '=';
        int i, j;
        double rs;
        if (zuo != you)
        {
            input=input+"=Error";
            ui->lineEdit->setText(input);
        }
        else
            while (zuo > 0)
            {
            for (i = 0; i < ENDS; i++)
                if (biaodashi[i] == '(')
                {
                for (j = i; j <= ENDS; j++)
                    if (biaodashi[j] == ')')
                    {
                    calculate(i + 1, j-1);
                    break;
                    }
                break;
                }
            zuo--;
            you--;
            }
        if (zuo == 0 && you == 0)
            rs = calculate(0, ENDS);
        flag=1;
        double rt=qLn(rs);
        input=QString::number(rt);
        ui->lineEdit->setText(input);
        flat=false;
        zuo = 0, you = 0;
         ENDS = input.length(), hh=0;
         biaodashi.clear();
        int jkl=0;
        while (jkl<ENDS) {
            biaodashi.push_back(input[jkl]);
                 jkl++;
        }
    });
    connect(ui->pushButton_tan,&QPushButton::clicked,[=](){
        nows = '=';
        biaodashi.push_back(nows);
        if (hh == 0)
        {
            hh = 1;
            biaodashi.push_back(' ');
        }
        ENDS++;
        input += '=';
        int i, j;
        double rs;
        if (zuo != you)
        {
            input=input+"=Error";
            ui->lineEdit->setText(input);
        }
        else
            while (zuo > 0)
            {
            for (i = 0; i < ENDS; i++)
                if (biaodashi[i] == '(')
                {
                for (j = i; j <= ENDS; j++)
                    if (biaodashi[j] == ')')
                    {
                    calculate(i + 1, j-1);
                    break;
                    }
                break;
                }
            zuo--;
            you--;
            }
        if (zuo == 0 && you == 0)
            rs = calculate(0, ENDS);
        flag=1;
        double rt=tan(rs/180*pai);
        input=QString::number(rt);
        ui->lineEdit->setText(input);
        flat=false;
        zuo = 0, you = 0;
         ENDS = input.length(), hh=0;
         biaodashi.clear();
        int jkl=0;
        while (jkl<ENDS) {
            biaodashi.push_back(input[jkl]);
                 jkl++;
        }
    });
}
void subwidget4::closeEvent(QCloseEvent *event4){
    input=" ";
    flat=false;
    zuo = 0, you = 0;
     ENDS = 0, hh=0;
    biaodashi.clear();
    ui->lineEdit->setText(input);
    emit Exitsub4();
}

double subwidget4::calculate(int x, int y)
{
    int starts, start;
    start = x;
    mark = x;
    double num1, num2, num3;
    num1 = number1(start, y);
    start = mark;
    starts = start;
    while (mark < y)
    {
        start ++;
        num2 = number1(start, y);
        start = mark;
        if (biaodashi[start] == '*' || biaodashi[start] == '/')
        {
            start++;
            num2 = panduan(start , num2, y);
            start = mark;
        }
            if (biaodashi[starts] == '+')
                num1 = num1 + num2;
            else
                if (biaodashi[starts] == '-')
                    num1 = num1 - num2;
                else
                    if (biaodashi[starts] == '*')
                        num1 = num1 * num2;
                    else
                        if (biaodashi[starts] == '/')
                            num1 = num1 /(int) num2;
            starts = mark;
        num3 = num1;
        if (biaodashi[mark + 1] == '='||biaodashi[mark]=='=')
            break;
    }
    if (zuo!=0)
        solve(x-1, y+1, num3);
    return num3;
}
double subwidget4::number1(int start, int end)
{
    QString num = "";
    double temp;
    while ((biaodashi[start] >= '0'&&biaodashi[start]<='9') || biaodashi[start] == '.')
    {
        num += biaodashi[start];
        start++;
        mark = start;
    }
    temp = atof(num.toStdString().c_str());//转double
    return temp;
}

double subwidget4::panduan(int start, double number, int y)
{
    double num3;
    if (biaodashi[start-1] == '*')
    {
        num3 = number1(start, y);
        start = mark;
        num3 = number*num3;
    }
    else
    {
        num3 = number1(start, y);
        start = mark;
        num3 = number / (int)num3;
    }

    if (biaodashi[start] == '*' || biaodashi[start] == '/')
        num3 = panduan(start+1, num3,y);

    return num3;
}

void subwidget4::solve(int x, int y, double num)
{
    QString b=QString::number(num);

    QByteArray cpath = b.toLocal8Bit();
    char*buffer = cpath.data();

    int len;
    len = strlen(buffer);
    biaodashi.erase(biaodashi.begin() + x, biaodashi.begin() + y+1);
    ENDS = ENDS - y + x;

    for (int i = 0; i < len; i++)
    {
        biaodashi.insert(biaodashi.begin() + x, buffer[i]);
        ENDS++;
        x++;
    }

    return ;
}
subwidget4::~subwidget4()
{
    delete ui;
}
