#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    setBackGround();
}

Login::~Login()
{
    delete ui;
}

void Login::setBackGround()
{
    QIcon icon(":/images/Resources/background/loginBG.png");
    setWindowIcon(icon);
    // setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
}

void Login::setAva() //设置头像
{

}


