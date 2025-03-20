#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    InitView();
    hostIP="10.61.108.83";
    hostPort=6677;
}

Login::~Login()
{
    delete ui;
}

void Login::InitView()
{
    // this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    // this->setWindowFlags(Qt::Dialog);
    this->setWindowTitle(tr("轻语app"));
    setBackGround();
    setAva();
    setUserLineEdit();
    setPasswordLineEdit();
    setBGMovie();
}

void Login::paintEvent(QPaintEvent *event)//绘画渐变背景
{
    // QPainter painter(this);
    // painter.setRenderHint(QPainter::Antialiasing);//反锯齿
    // QLinearGradient gradient(0, 0, width(), height());//创建渐变
    // int g1 = 220 + (sin(0 * 0.06) * 30);//增加绿色分量变化
    // gradient.setColorAt(0.0, QColor(255, g1, 235));//动态渐变开始颜色
    // gradient.setColorAt(1.0, QColor(172, 224, 249));//动态渐变结束颜色
    // painter.setBrush(gradient);//使用渐变作为背景
    // painter.drawRect(rect());
}

void Login::mouseMoveEvent(QMouseEvent *event)//拖拽移动窗口位置
{

}

void Login::setBGMovie()
{
    ui->bg_movie->setGeometry(0,0,460,170);
    QMovie* movie=new QMovie(":movies/movie/bg_movie.gif");
    if(movie->isValid())
    {
        ui->bg_movie->setAlignment(Qt::AlignCenter); // 可以根据需要设置对齐方式
        ui->bg_movie->setMovie(movie);
        ui->bg_movie->setScaledContents(true);
        movie->start(); // 开始播放GIF动画
    }
    ui->bg_movie->lower(); //将背景动画设定为图层低层
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


    QLabel* userLogo=new QLabel(ui->userName_lineEdit);
    userLogo->setStyleSheet("QLabel{background:transparent;border:none;}");
    userLogo->setGeometry(7,8,20,20);
    QPixmap pixmap_normal(":images/icon/user.png");
    userLogo->setPixmap(pixmap_normal);
    userLogo->setScaledContents(true);
}

void Login::setPasswordLineEdit()
{
    ui->password_lineEdit->setStyleSheet("QLineEdit {border: 1px solid rgba(0, 0, 0, 0.3);"
                                         "border-radius: 10px; color:grey;}"
                                         "QLineEdit:focus { border: 2px solid blue; }");
    ui->password_lineEdit->setFont(QFont("Microsoft YaHei UI",12));

    QCheckBox* checkBox=new QCheckBox(ui->password_lineEdit);
    checkBox->setGeometry(ui->password_lineEdit->pos().x() + 255,ui->password_lineEdit->pos().y() + 8,20,20);
    ui->password_lineEdit->setEchoMode(QLineEdit::Password);
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

    QLabel* pwdLogo=new QLabel(ui->password_lineEdit);
    pwdLogo->setStyleSheet("QLabel{background:transparent;border:none;}");
    pwdLogo->setGeometry(7,8,20,20);
    QPixmap pixmap_normal(":images/icon/lock_icon.png");
    QPixmap pixmap_focus(":images/icon/unlock_icon.png");
    pwdLogo->setPixmap(pixmap_normal);
    pwdLogo->setScaledContents(true);
    connect(ui->password_lineEdit,&QLineEdit::selectionChanged,this,[](){

    });
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
    ui->ava_btn->raise();
}

void Login::setVal()
{
    QRegularExpression regExp("[a-zA-Z0-9]{1,12}$");
    validator=new QRegularExpressionValidator(regExp,this);
    ui->password_lineEdit->setValidator(validator);
    ui->userName_lineEdit->setValidator(validator);
}

bool Login::tcpConnect()
{
    if(socket->state()!=QAbstractSocket::ConnectedState)
    {
        socket->connectToHost(hostIP,hostPort);
        if(socket->waitForConnected(2000))
        {
            qDebug()<<"连接服务器成功";
            return true;
        }
        else
        {
            qDebug()<<"连接失败"<<socket->errorString();
            return false;
        }
    }
    return true;
}

void Login::remeberPassword()
{
    settings.beginGroup(ui->userName_lineEdit->text());
    settings.setValue("userName",ui->userName_lineEdit->text());
    settings.setValue("password",ui->password_lineEdit->text());
    settings.endGroup();
}




void Login::on_ckb_autoLogin_toggled(bool checked)
{
    if(ui->ckb_autoLogin->isChecked())
    {
        ui->ckb_rememberPwd->setChecked(checked);
    }
}


void Login::on_ckb_rememberPwd_toggled(bool checked)
{
    if(!checked && ui->ckb_autoLogin->isChecked())
    {
        ui->ckb_autoLogin->setChecked(false);
    }
}

void Login::rememberAvator()//记住头像
{
    qDebug()<<"要发送索要头像的请求了";
    QJsonObject jsonObj;
    QJsonDocument jsonDoc;
    QByteArray jsonData;
    jsonObj["tag"] = "askforavator";//向服务器索要头像
    jsonObj["qq_number"] = ui->userName_lineEdit->text();
    jsonDoc = QJsonDocument(jsonObj);
    jsonData = jsonDoc.toJson();
    //发送消息
    jsonDoc = QJsonDocument(jsonObj);
    jsonData = jsonDoc.toJson();
    //添加标识符
    QByteArray messageWithSeparator = jsonData + "END";
    //发送JSON 数据
    socket->write(messageWithSeparator);
    socket->flush();
    jsonData.clear();
}

void Login::loginSuccess()//登录成功
{
    qDebug() << "登录成功";
    loginFlag = true;
    settings.setValue("lastlogin", ui->userName_lineEdit->text());//记录上次登录账号
    if (ui->ckb_rememberPwd->isChecked() && ui->ckb_autoLogin->isChecked()) {
        remeberPassword();//记住密码
        rememberAvator();//记住头像
        preSetting.setValue("autologin", true);
        preSetting.setValue("autologinuser", ui->userName_lineEdit->text());
        qDebug() << "记住密码和头像了,下次自动登录";
    } else if (ui->ckb_rememberPwd->isChecked()) {
        remeberPassword();//记住密码
        rememberAvator();//记住头像
        preSetting.setValue("autologin", false);
        preSetting.setValue("autologinuser", "");
        qDebug() << "记住密码和头像了,下次不自动登录";
    } else {
        rememberAvator();//记住头像
        settings.remove(ui->userName_lineEdit->text());
        QFile::remove(saveAvatorPath);
        settings.setValue("lastlogin", "");
        preSetting.setValue("autologin", false);
        preSetting.setValue("autologinuser", "");
        qDebug() << "移除记住的账号与密码与头像了";
    }
}

void Login::loginFail()//登录失败
{
    settings.remove(ui->userName_lineEdit->text());
    QFile::remove(saveAvatorPath);
    settings.setValue("lastlogin", "");
    preSetting.setValue("autologin", false);
    preSetting.setValue("autologinuser", "");
    qDebug() << "移除记住的账号与密码与头像了";
    if (socket->state() == QAbstractSocket::ConnectedState) {
        Dialog msgBox(this);
        msgBox.transText("请检查您的账号密码!");
        msgBox.setWindowFlags(Qt::WindowStaysOnTopHint | Qt::Dialog |Qt::FramelessWindowHint);
        msgBox.exec();
    }
}


void Login::on_register_btn_clicked()
{
    tcpConnect(); //连接服务器
}

