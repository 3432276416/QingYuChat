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
#include <QLineEdit>
#include <QFocusEvent>
#include <QSettings>
#include<QLabel>
#include <QMessageBox>
#include <QStyle>
#include <QPixmap>
#include<QPainterPath>
#include <QPainter>
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
    int moveFlag = 0;
    QPoint dragPosition;
    QValidator *validator;

public:
     void InitView();
    void setBackGround();
    void setAva();//初始化头像
    void setPwdLineEdit();
    void setUserLineEdit();
    void setPasswordLineEdit();
    // void setIcon();//初始化左上角图标
    // void setVal();//设置输入验证器
    // void setTimer();//设置一些计时器 用于动态背景与动态按钮
    // bool tcpConnect();//连接服务器
    // void remeberPassword();//记住密码
    // void rememberAvator();//记住头像
    // void ifAutoLogin();//检查自动登录设置
    // void ifRememberPassword();//如果没有自动登录的检查是否有人记住密码
    // void paintEvent(QPaintEvent *event);//绘制渐变背景
    // void mouseMoveEvent(QMouseEvent *event);//拖拽移动窗口位置
    // void mouseReleaseEvent(QMouseEvent *event);//重置移动状态
    // void saveAvator(QString avator);//保存头像
    // void loginFail();//登录失败
    // void loginSuccess();//登录失败


private:
    Ui::Login *ui;
    QString saveAvatorPath; //存放保存头像路径

};

#endif // LOGIN_H
