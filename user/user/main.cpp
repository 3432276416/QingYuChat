#include "mainwindow.h"
#include"login.h"
#include"register.h"
#include"verify.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Verify w;
    w.show();
    return a.exec();
}
