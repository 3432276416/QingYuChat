/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QComboBox *ckb_select;
    QPushButton *open_btn;
    QPushButton *flush_btn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QMainWindow *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName("Server");
        Server->resize(1100, 600);
        centralwidget = new QWidget(Server);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 60, 1061, 440));
        ckb_select = new QComboBox(centralwidget);
        ckb_select->setObjectName("ckb_select");
        ckb_select->setGeometry(QRect(20, 10, 191, 41));
        open_btn = new QPushButton(centralwidget);
        open_btn->setObjectName("open_btn");
        open_btn->setGeometry(QRect(220, 10, 81, 41));
        flush_btn = new QPushButton(centralwidget);
        flush_btn->setObjectName("flush_btn");
        flush_btn->setGeometry(QRect(310, 10, 81, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 520, 1071, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(900, 0));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(85, 0));

        horizontalLayout->addWidget(pushButton);

        Server->setCentralWidget(centralwidget);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QMainWindow *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
        ckb_select->setCurrentText(QString());
        open_btn->setText(QCoreApplication::translate("Server", "\345\274\200\345\220\257\346\234\215\345\212\241\345\231\250", nullptr));
        flush_btn->setText(QCoreApplication::translate("Server", "\345\210\267\346\226\260\350\241\250\346\240\274", nullptr));
        pushButton->setText(QCoreApplication::translate("Server", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
