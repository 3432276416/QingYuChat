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
    int m_radius=50; //头像半径
    QString appDir=QCoreApplication::applicationDirPath();
    QDir dir(appDir);
    qDebug()<<appDir;
    if(!dir.exists())
    {

    }

    QPixmap pixmap(":images/icon/default_ava.png");
    pixmap.fill(Qt::transparent);

    //用Qpainter绘制圆形头像
    QPainter painter(&pixmap);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    QPainterPath paintpath;
    paintpath.addEllipse(rect().center(),m_radius,m_radius);

    //设置裁剪区域
    painter.setClipPath(paintpath);
    painter.drawPixmap(QRect(0,0,m_radius,m_radius),pixmap);

    ui->lab_ava->setFixedSize(100,100);
     ui->lab_ava->setScaledContents(true);
    ui->lab_ava->setPixmap(pixmap);

}

void Login::setPwdLineEdit()
{
    QCheckBox* checkBox=new QCheckBox(ui->password_lineEdit);
    checkBox->setGeometry(ui->password_lineEdit->pos().x() + 255,ui->password_lineEdit->pos().y() + 8,20,20);
    // ui->password_lineEdit->setEchoMode(QLineEdit::Password);
    checkBox->setStyleSheet("QCheckBox {spacing: 5px;border: none;background-color: transparent;}"
                            "QCheckBox::indicator {width: 20px;height: 20px;border: none;image: url(:/images/icon/password_visible.png);}"
                            "QCheckBox::indicator:checked {image: url(:/images/icon/password_invisible.png);}");
    connect(checkBox, &QCheckBox::stateChanged, this, [this](int state) {  //设计密码可见度
        if (state) {
            ui->password_lineEdit->setEchoMode(QLineEdit::Normal);
        } else {
            ui->password_lineEdit->setEchoMode(QLineEdit::Password);
        }
    });
}




