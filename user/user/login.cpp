#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    InitView();
}

Login::~Login()
{
    delete ui;
}

void Login::InitView()
{
    this->setWindowTitle(tr("登录界面"));
    ui->userName_lineEdit->setText(tr("请输入用户名"));
    ui->password_lineEdit->setText(tr("请输入密码"));
    setBackGround();
    setAva();
    setPwdLineEdit();
}

void Login::setBackGround()
{
    QIcon icon(":/images/Resources/background/loginBG.png");

    setWindowIcon(icon);
    // setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
}

void Login::setAva() //设置头像
{
    QString appDir=QCoreApplication::applicationDirPath();
    QDir dir(appDir);
    qDebug()<<appDir;
    if(!dir.exists())
    {

    }
    // saveAvatorPath=dir.filePath();
    QPixmap pix(":images/icon/default_ava");
    ui->lab_ava->setScaledContents(true);
    pix=pix.scaled(ui->lab_ava->height(),ui->lab_ava->width(),Qt::KeepAspectRatio);
    ui->lab_ava->setPixmap(pix);
}

void Login::setPwdLineEdit()
{
    QCheckBox* checkBox=new QCheckBox(ui->password_lineEdit);
    checkBox->setGeometry(ui->password_lineEdit->pos().x() + 255,ui->password_lineEdit->pos().y() + 8,20,20);

    checkBox->setStyleSheet("QCheckBox {spacing: 5px;border: none;background-color: transparent;}"
                            "QCheckBox::indicator {width: 20px;height: 20px;border: none;image: url(:/images/vi.png);}"
                            "QCheckBox::indicator:checked {image: url(:/images/vi.png);}");


}
