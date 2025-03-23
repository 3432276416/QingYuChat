#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Register)
{

    ui->setupUi(this);
    // this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    setAva();
}

Register::~Register()
{
    delete ui;
}
void Register::mousePressEvent(QMouseEvent *event)//点击窗口空白让所有输入框失去焦点
{

}

void Register::setAva()
{
    QPixmap pixmap(":/images/icon/default_ava.png");
    ui->lab_ava->setPixmap(pixmap);
    ui->lab_ava->setScaledContents(true);
}


void LabelAva::mousePressEvent(QMouseEvent* event)
{
    QDir dir=QFileDialog::getOpenFileName(this,tr("请选择头像"),"","Image(*.png,*.jpg,*.jpeg,*.bmp,*.gif)");

}
