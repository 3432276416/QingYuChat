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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *sql_btn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *open_btn;
    QPushButton *flush_btn;
    QPushButton *add_btn;
    QPushButton *insert_btn;
    QPushButton *remove_btn;
    QPushButton *revoke_btn;

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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 520, 1071, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(900, 0));

        horizontalLayout->addWidget(lineEdit);

        sql_btn = new QPushButton(layoutWidget);
        sql_btn->setObjectName("sql_btn");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sql_btn->sizePolicy().hasHeightForWidth());
        sql_btn->setSizePolicy(sizePolicy1);
        sql_btn->setMinimumSize(QSize(85, 0));

        horizontalLayout->addWidget(sql_btn);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(220, 10, 581, 41));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        open_btn = new QPushButton(widget);
        open_btn->setObjectName("open_btn");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(open_btn->sizePolicy().hasHeightForWidth());
        open_btn->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(open_btn);

        flush_btn = new QPushButton(widget);
        flush_btn->setObjectName("flush_btn");
        sizePolicy2.setHeightForWidth(flush_btn->sizePolicy().hasHeightForWidth());
        flush_btn->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(flush_btn);

        add_btn = new QPushButton(widget);
        add_btn->setObjectName("add_btn");
        sizePolicy2.setHeightForWidth(add_btn->sizePolicy().hasHeightForWidth());
        add_btn->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(add_btn);

        insert_btn = new QPushButton(widget);
        insert_btn->setObjectName("insert_btn");
        sizePolicy2.setHeightForWidth(insert_btn->sizePolicy().hasHeightForWidth());
        insert_btn->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(insert_btn);

        remove_btn = new QPushButton(widget);
        remove_btn->setObjectName("remove_btn");
        sizePolicy2.setHeightForWidth(remove_btn->sizePolicy().hasHeightForWidth());
        remove_btn->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(remove_btn);

        revoke_btn = new QPushButton(widget);
        revoke_btn->setObjectName("revoke_btn");
        sizePolicy2.setHeightForWidth(revoke_btn->sizePolicy().hasHeightForWidth());
        revoke_btn->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(revoke_btn);

        Server->setCentralWidget(centralwidget);

        retranslateUi(Server);

        ckb_select->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QMainWindow *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
        ckb_select->setCurrentText(QString());
        sql_btn->setText(QCoreApplication::translate("Server", "\346\217\220\344\272\244", nullptr));
        open_btn->setText(QCoreApplication::translate("Server", "\345\274\200\345\220\257\346\234\215\345\212\241\345\231\250", nullptr));
        flush_btn->setText(QCoreApplication::translate("Server", "\345\210\267\346\226\260\350\241\250\346\240\274", nullptr));
        add_btn->setText(QCoreApplication::translate("Server", "\346\267\273\345\212\240", nullptr));
        insert_btn->setText(QCoreApplication::translate("Server", "\346\217\222\345\205\245", nullptr));
        remove_btn->setText(QCoreApplication::translate("Server", "\345\210\240\351\231\244", nullptr));
        revoke_btn->setText(QCoreApplication::translate("Server", "\346\222\244\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
