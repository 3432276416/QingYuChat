#ifndef VERIFY_H
#define VERIFY_H

#include <QWidget>
#include<QFont>
#include<QLabel>
#include<QFontMetrics>
#include<QTime>
#include<QtGlobal>
#include<QRandomGenerator>
#include<QMouseEvent>
#include <QPainter>

namespace Ui {
class Verify;
}

class Verify : public QWidget
{
    Q_OBJECT

public:
    explicit Verify(QWidget *parent = nullptr);
    ~Verify();
    QStringList code;  //验证码字符串
    QString codePool; //验证码的取值范围
    int m_iPressed;
    int boxHeight;//部件的宽高，由字体确定
    int boxWidth;
    QVector<QColor> m_vecColor;//验证码的颜色集


private:
    Ui::Verify *ui;
    void initColorAndFont();
    void generateVerifyCode(int count); ///生成count位的验证码
    void drawDisturb(QPainter &painter);
    void rotateRangle(QPainter &painter);
    void shearForm(QPainter &painter);
    void scaleSize(QPainter &painter);
    void rotateAngle(QPainter &painter);
    void draw(QPainter &painter);
    void paintEvent(QPaintEvent *event);

};

#endif // VERIFY_H
