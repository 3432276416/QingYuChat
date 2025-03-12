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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lab_tubiao;
    QLabel *lab_appText;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lab_ava;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLineEdit *userName_lineEdit;
    QLineEdit *password_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *ckb_rememberPwd;
    QCheckBox *ckb_autoLogin;
    QPushButton *pushButton_3;
    QWidget *layoutWidget3;
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
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 391, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lab_tubiao = new QLabel(layoutWidget);
        lab_tubiao->setObjectName("lab_tubiao");
        lab_tubiao->setMinimumSize(QSize(30, 30));

        horizontalLayout->addWidget(lab_tubiao);

        lab_appText = new QLabel(layoutWidget);
        lab_appText->setObjectName("lab_appText");
        QFont font;
        font.setPointSize(12);
        lab_appText->setFont(font);

        horizontalLayout->addWidget(lab_appText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(Login);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(80, 50, 301, 102));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lab_ava = new QLabel(layoutWidget1);
        lab_ava->setObjectName("lab_ava");
        lab_ava->setMinimumSize(QSize(100, 100));
        lab_ava->setStyleSheet(QString::fromUtf8("border: 3px solid black;\n"
"border-radius: 8px;\n"
""));

        horizontalLayout_2->addWidget(lab_ava);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        layoutWidget2 = new QWidget(Login);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(80, 160, 301, 121));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userName_lineEdit = new QLineEdit(layoutWidget2);
        userName_lineEdit->setObjectName("userName_lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userName_lineEdit->sizePolicy().hasHeightForWidth());
        userName_lineEdit->setSizePolicy(sizePolicy);
        userName_lineEdit->setMinimumSize(QSize(287, 37));
        userName_lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-radius: 10px;\n"
"color:grey;\n"
""));
        userName_lineEdit->setMaxLength(12);
        userName_lineEdit->setAlignment(Qt::AlignCenter);
        userName_lineEdit->setCursorMoveStyle(Qt::VisualMoveStyle);

        verticalLayout->addWidget(userName_lineEdit);

        password_lineEdit = new QLineEdit(layoutWidget2);
        password_lineEdit->setObjectName("password_lineEdit");
        sizePolicy.setHeightForWidth(password_lineEdit->sizePolicy().hasHeightForWidth());
        password_lineEdit->setSizePolicy(sizePolicy);
        password_lineEdit->setMinimumSize(QSize(287, 37));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        password_lineEdit->setFont(font1);
        password_lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-radius: 10px;\n"
"color:grey;\n"
""));
        password_lineEdit->setMaxLength(12);
        password_lineEdit->setAlignment(Qt::AlignCenter);
        password_lineEdit->setCursorMoveStyle(Qt::VisualMoveStyle);

        verticalLayout->addWidget(password_lineEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ckb_rememberPwd = new QCheckBox(layoutWidget2);
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

        ckb_autoLogin = new QCheckBox(layoutWidget2);
        ckb_autoLogin->setObjectName("ckb_autoLogin");
        sizePolicy1.setHeightForWidth(ckb_autoLogin->sizePolicy().hasHeightForWidth());
        ckb_autoLogin->setSizePolicy(sizePolicy1);
        ckb_autoLogin->setStyleSheet(QString::fromUtf8(" color: gray;\n"
""));

        horizontalLayout_3->addWidget(ckb_autoLogin);

        pushButton_3 = new QPushButton(layoutWidget2);
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

        layoutWidget3 = new QWidget(Login);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 160, 61, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(layoutWidget3);
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
        lab_tubiao->setText(QString());
        lab_appText->setText(QCoreApplication::translate("Login", "\350\275\273\350\257\255", nullptr));
        lab_ava->setText(QString());
        userName_lineEdit->setText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\350\264\246\345\217\267", nullptr));
        password_lineEdit->setText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\345\257\206\347\240\201", nullptr));
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
