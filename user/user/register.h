#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include<QLabel>
#include<QTcpSocket>
#include<QJsonObject>
#include<QJsonDocument>
#include<QMouseEvent>
#include<QFileDialog>
#include<QLineEdit>
#include<QFocusEvent>

namespace Ui {
class Register;
}

class Register : public QMainWindow
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private:
    Ui::Register *ui;
    void setAva();
    void mousePressEvent(QMouseEvent *event);//点击窗口空白让所有输入框失去焦点

};

class LabelAva:public QLabel
{
    Q_OBJECT;

public:
    LabelAva(QWidget *parent=nullptr):QLabel(parent){}
    void mousePressEvent(QMouseEvent* event);

};

class RegisterLineEdit:public QLineEdit
{
    Q_OBJECT;
};

#endif // REGISTER_H
