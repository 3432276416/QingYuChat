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
    // this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    this->setWindowTitle(tr("轻语app"));
    setBackGround();
    setAva();
    setUserLineEdit();
    setPasswordLineEdit();
}

void Login::setUserLineEdit()
{

    ui->userName_lineEdit->setStyleSheet("QLineEdit {border: 1px solid rgba(0, 0, 0, 0.3);"
                                         "border-radius: 10px; color:grey;}"
                                         "QLineEdit:focus { border: 2px solid blue; }");
    ui->userName_lineEdit->setFont(QFont("Microsoft YaHei UI",12));
    connect(ui->userName_lineEdit, &QLineEdit::textChanged, this, [this](const QString &text) {
        if (text.isEmpty()) {
            ui->userName_lineEdit->setToolTip("用户名不能为空");
            ui->userName_lineEdit->setStyleSheet("QLineEdit { QLineEdit {border: 1px solid rgba(0, 0, 0, 0.3);"
                                         "border-radius: 10px; color:grey;}"
                                         "QLineEdit:focus { border: 2px solid blue; }");
        } else {
            // 文本不为空时的处理
        }
    });
}

void Login::setPasswordLineEdit()
{
    ui->userName_lineEdit->setStyleSheet("QLineEdit {border: 1px solid rgba(0, 0, 0, 0.3);"
                                         "border-radius: 10px; color:grey;}"
                                         "QLineEdit:focus { border: 2px solid blue; }");
    ui->userName_lineEdit->setFont(QFont("Microsoft YaHei UI",12));
}

void Login::setBackGround()
{
    QIcon icon(":/images/Resources/background/loginBG.png");

    setWindowIcon(icon);
    // setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
}

void Login::setAva() //设置头像
{
    ui->ava_btn->setFixedSize(100,100);
    QIcon icon=QIcon(":images/icon/default_ava.png");
    ui->ava_btn->setIcon(icon);
    ui->ava_btn->setIconSize(QSize(50,50));
    // ui->ava_btn->setWindowFlag(Qt::WindowStaysOnTopHint);
    ui->ava_btn->raise();
    ui->bg_movie->lower();

}

void Login::setPwdLineEdit()
{
    QCheckBox* checkBox=new QCheckBox(ui->password_lineEdit);
    checkBox->setGeometry(ui->password_lineEdit->pos().x() + 255,ui->password_lineEdit->pos().y() + 8,20,20);

    checkBox->setStyleSheet("QCheckBox {spacing: 5px;border: none;background-color: transparent;}"
                            "QCheckBox::indicator {width: 20px;height: 20px;border: none;image: url(:/images/vi.png);}"
                            "QCheckBox::indicator:checked {image: url(:/images/vi.png);}");


}
