/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lab_avator;
    QLabel *lab_appText;
    QSpacerItem *horizontalSpacer;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_userName;
    QLineEdit *line_password;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *ckb_rememberPwd;
    QCheckBox *ckb_autoLogin;
    QPushButton *pushButton_3;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(450, 330);
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(80, 280, 301, 37));
        pushButton_2->setMinimumSize(QSize(287, 37));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 12pt \"Microsoft YaHei UI\";\n"
"    background-color: rgb(167, 214, 255); \n"
"    color: white;; \n"
"    border-radius: 15px;\n"
"}\n"
""));
        widget = new QWidget(Login);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 391, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lab_avator = new QLabel(widget);
        lab_avator->setObjectName("lab_avator");
        lab_avator->setMinimumSize(QSize(30, 30));

        horizontalLayout->addWidget(lab_avator);

        lab_appText = new QLabel(widget);
        lab_appText->setObjectName("lab_appText");
        QFont font;
        font.setPointSize(12);
        lab_appText->setFont(font);

        horizontalLayout->addWidget(lab_appText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget1 = new QWidget(Login);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(80, 50, 301, 102));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(widget1);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 100));
        label->setStyleSheet(QString::fromUtf8("border: 3px solid black;\n"
"border-radius: 8px;\n"
""));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget2 = new QWidget(Login);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(80, 160, 301, 121));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_userName = new QLineEdit(widget2);
        line_userName->setObjectName("line_userName");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_userName->sizePolicy().hasHeightForWidth());
        line_userName->setSizePolicy(sizePolicy);
        line_userName->setMinimumSize(QSize(287, 37));
        line_userName->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-radius: 10px;\n"
"color:grey;\n"
""));
        line_userName->setMaxLength(12);
        line_userName->setAlignment(Qt::AlignCenter);
        line_userName->setCursorMoveStyle(Qt::VisualMoveStyle);

        verticalLayout->addWidget(line_userName);

        line_password = new QLineEdit(widget2);
        line_password->setObjectName("line_password");
        sizePolicy.setHeightForWidth(line_password->sizePolicy().hasHeightForWidth());
        line_password->setSizePolicy(sizePolicy);
        line_password->setMinimumSize(QSize(287, 37));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        line_password->setFont(font1);
        line_password->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-radius: 10px;\n"
"color:grey;\n"
""));
        line_password->setMaxLength(12);
        line_password->setAlignment(Qt::AlignCenter);
        line_password->setCursorMoveStyle(Qt::VisualMoveStyle);

        verticalLayout->addWidget(line_password);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ckb_rememberPwd = new QCheckBox(widget2);
        ckb_rememberPwd->setObjectName("ckb_rememberPwd");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ckb_rememberPwd->sizePolicy().hasHeightForWidth());
        ckb_rememberPwd->setSizePolicy(sizePolicy1);
        ckb_rememberPwd->setLayoutDirection(Qt::LeftToRight);
        ckb_rememberPwd->setStyleSheet(QString::fromUtf8(" color: gray;\n"
""));

        horizontalLayout_3->addWidget(ckb_rememberPwd);

        ckb_autoLogin = new QCheckBox(widget2);
        ckb_autoLogin->setObjectName("ckb_autoLogin");
        sizePolicy1.setHeightForWidth(ckb_autoLogin->sizePolicy().hasHeightForWidth());
        ckb_autoLogin->setSizePolicy(sizePolicy1);
        ckb_autoLogin->setStyleSheet(QString::fromUtf8(" color: gray;\n"
""));

        horizontalLayout_3->addWidget(ckb_autoLogin);

        pushButton_3 = new QPushButton(widget2);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"       font: 10pt \"Microsoft YaHei UI\";\n"
"       border: none;\n"
"       text-decoration: none; \n"
"      color: gray;\n"
"   }\n"
"\n"
"   QPushButton:hover {\n"
"       text-decoration: underline; \n"
"       color: gray;\n"
"   }\n"
""));

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_3);

        widget3 = new QWidget(Login);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(10, 160, 61, 151));
        verticalLayout_2 = new QVBoxLayout(widget3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(widget3);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"       font: 10pt \"Microsoft YaHei UI\";\n"
"       border: none;\n"
"       text-decoration: none; \n"
"       color: gray;\n"
"   }\n"
"\n"
"   QPushButton:hover {\n"
"       text-decoration: underline; \n"
"       color: gray;\n"
"   }"));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        lab_avator->setText(QString());
        lab_appText->setText(QCoreApplication::translate("Login", "\350\275\273\350\257\255", nullptr));
        label->setText(QString());
        line_userName->setText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\350\264\246\345\217\267", nullptr));
        line_password->setText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\345\257\206\347\240\201", nullptr));
        ckb_rememberPwd->setText(QCoreApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        ckb_autoLogin->setText(QCoreApplication::translate("Login", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Login", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
