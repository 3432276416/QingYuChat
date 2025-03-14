#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonObject>
#include <QByteArray>
#include <QRegularExpressionValidator>
#include <QRegularExpression>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include<QLabel>
#include<QMovie>
#include <QLineEdit>
#include <QFocusEvent>
#include <QSettings>
#include <QMessageBox>
#include<QLineEdit>
#include <QStyle>
#include <QPixmap>
#include<QPainterPath>
#include <QPainter>
#include<QPainterPath>
#include <QBitmap>
#include <QIcon>
#include<QDir>
#include <QBrush>
#include <QTimer>
#include <QLinearGradient>
#include <QStandardPaths>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

public:
    bool tcpConnect();
    void remeberPassword();
    void InitView();
    void setBackGround();
    void setAva();//初始化头像
    void setPwdLineEdit();
    void setUserLineEdit();
    void setPasswordLineEdit();
    void setVal();
    void setBGMovie();
    void mouseMoveEvent(QMouseEvent *event);

private slots:


    void on_ckb_autoLogin_toggled(bool checked);

    void on_ckb_rememberPwd_toggled(bool checked);

    void on_register_btn_clicked();

private:
    Ui::Login *ui;
    QString hostIP;
    int hostPort;
    QString saveAvatorPath; //存放保存头像路径
    QSettings settings = QSettings("settings.ini", QSettings::IniFormat);
    /*存储
    /  lastlogin: 上次成功登录的用户名。如果有说明则有人记住密码了 没有则说明没人记住密码 不必理会
    /  账号/password: 与特定用户相关联的密码。分组存储 组名是账号
    */
    QSettings logSetting = QSettings("set.ini", QSettings::IniFormat);
    /*存储
    /  autologin: 是否启用自动登录的布尔值。
    /  autologinuser: 自动登录的用户名。加载后去setting中找密码
    */
    QTimer *timer;
    int moveFlag = 0;
    QPoint dragPosition;
    QRegularExpressionValidator *validator; //验证密码用户合法性
    QTcpSocket* socket;


};

#endif // LOGIN_H
