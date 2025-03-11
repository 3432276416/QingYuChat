#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QValidator>
#include <QDialog>
#include <QPainter>
#include <QPainterPath>
#include <QMouseEvent>
#include <QRegularExpression>
#include <QLineEdit>

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


private:
    Ui::Login *ui;
    void setBackGround();
    void setAva();//初始化头像
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
};

#endif // LOGIN_H
