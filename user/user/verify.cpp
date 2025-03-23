#include "verify.h"
#include "ui_verify.h"
#include<QTime>
Verify::Verify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Verify)
{
    ui->setupUi(this);
}

Verify::~Verify()
{
    delete ui;
}
void Verify::generateRandNum()
{
    int num=rand
    // this->code.clear();
    // for(int i = 0;i < 4;++i)
    // {
    //     int num;
    //     if(num == 0)
    //     {
    //         //数字
    //         this->code += QString::number(qrand()%10);
    //     }
    //     else if(num == 1)
    //     {
    //         //大写字母
    //         int temp = 'A';
    //         this->code += static_cast<QChar>(temp + qrand()%26);
    //     }
    //     else if(num == 2)
    //     {
    //         //小写字母
    //         int temp = 'a';
    //         this->code += static_cast<QChar>(temp + qrand()%26);
    //     }
    // }

}
void paintEvent(QPaintEvent *)
{

}
void mousePressEvent(QMouseEvent *event)
{

}
