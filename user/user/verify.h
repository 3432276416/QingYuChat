#ifndef VERIFY_H
#define VERIFY_H

#include <QWidget>

namespace Ui {
class Verify;
}

class Verify : public QWidget
{
    Q_OBJECT

public:
    explicit Verify(QWidget *parent = nullptr);
    ~Verify();
    void generateRandNum();
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);
    QString code;

private:
    Ui::Verify *ui;
};

#endif // VERIFY_H
