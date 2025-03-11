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
};

#endif // LOGIN_H
