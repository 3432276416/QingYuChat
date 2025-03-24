/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <register.h>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *centralwidget;
    QLabel *lab_summit;
    LabelAva *lab_ava;
    QPushButton *confirmBtn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *answer_lineEdit;
    QLineEdit *verifyCode_lineEdit;
    QLabel *lab_summit_6;
    QLineEdit *username_lineEdit;
    QLineEdit *confirmPasswor_lineEdit;
    QLabel *lab_summit_10;
    QLineEdit *password_lineEdit;
    QLabel *lab_summit_9;
    QLabel *lab_summit_5;
    QLineEdit *question_lineEdit;
    QLabel *lab_summit_8;
    QLabel *lab_summit_7;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(350, 510);
        centralwidget = new QWidget(Register);
        centralwidget->setObjectName("centralwidget");
        lab_summit = new QLabel(centralwidget);
        lab_summit->setObjectName("lab_summit");
        lab_summit->setGeometry(QRect(50, 20, 71, 61));
        lab_summit->setStyleSheet(QString::fromUtf8("font:12px;\n"
""));
        lab_ava = new LabelAva(centralwidget);
        lab_ava->setObjectName("lab_ava");
        lab_ava->setGeometry(QRect(140, 20, 80, 80));
        confirmBtn = new QPushButton(centralwidget);
        confirmBtn->setObjectName("confirmBtn");
        confirmBtn->setGeometry(QRect(90, 430, 151, 61));
        confirmBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 14pt \"Microsoft YaHei UI\";\n"
"    background-color: rgb(167, 214, 255); \n"
"    color: white;; \n"
"   border-radius: 15px;\n"
"}\n"
""));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 120, 311, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        answer_lineEdit = new QLineEdit(gridLayoutWidget);
        answer_lineEdit->setObjectName("answer_lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(answer_lineEdit->sizePolicy().hasHeightForWidth());
        answer_lineEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        answer_lineEdit->setFont(font);
        answer_lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-focus:1px solid blue;\n"
"border-radius: 10px;\n"
"color:grey;border:solid;"));
        answer_lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(answer_lineEdit, 6, 1, 1, 1);

        verifyCode_lineEdit = new QLineEdit(gridLayoutWidget);
        verifyCode_lineEdit->setObjectName("verifyCode_lineEdit");
        sizePolicy.setHeightForWidth(verifyCode_lineEdit->sizePolicy().hasHeightForWidth());
        verifyCode_lineEdit->setSizePolicy(sizePolicy);
        verifyCode_lineEdit->setFont(font);
        verifyCode_lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-focus:1px solid blue;\n"
"border-radius: 10px;\n"
"color:grey;border:solid;"));
        verifyCode_lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(verifyCode_lineEdit, 7, 1, 1, 1);

        lab_summit_6 = new QLabel(gridLayoutWidget);
        lab_summit_6->setObjectName("lab_summit_6");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_summit_6->sizePolicy().hasHeightForWidth());
        lab_summit_6->setSizePolicy(sizePolicy1);
        lab_summit_6->setMinimumSize(QSize(55, 0));
        lab_summit_6->setStyleSheet(QString::fromUtf8("font:12px;\n"
""));
        lab_summit_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lab_summit_6, 2, 0, 1, 1);

        username_lineEdit = new QLineEdit(gridLayoutWidget);
        username_lineEdit->setObjectName("username_lineEdit");
        sizePolicy.setHeightForWidth(username_lineEdit->sizePolicy().hasHeightForWidth());
        username_lineEdit->setSizePolicy(sizePolicy);
        username_lineEdit->setFont(font);
        username_lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-focus:1px solid blue;\n"
"border-radius: 10px;\n"
"color:grey;border:solid;"));
        username_lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(username_lineEdit, 0, 1, 1, 1);

        confirmPasswor_lineEdit = new QLineEdit(gridLayoutWidget);
        confirmPasswor_lineEdit->setObjectName("confirmPasswor_lineEdit");
        sizePolicy.setHeightForWidth(confirmPasswor_lineEdit->sizePolicy().hasHeightForWidth());
        confirmPasswor_lineEdit->setSizePolicy(sizePolicy);
        confirmPasswor_lineEdit->setFont(font);
        confirmPasswor_lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-focus:1px solid blue;\n"
"border-radius: 10px;\n"
"color:grey;border:solid;"));
        confirmPasswor_lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(confirmPasswor_lineEdit, 2, 1, 1, 1);

        lab_summit_10 = new QLabel(gridLayoutWidget);
        lab_summit_10->setObjectName("lab_summit_10");
        lab_summit_10->setMinimumSize(QSize(40, 0));
        lab_summit_10->setStyleSheet(QString::fromUtf8("font:12px;\n"
""));
        lab_summit_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lab_summit_10, 0, 0, 1, 1);

        password_lineEdit = new QLineEdit(gridLayoutWidget);
        password_lineEdit->setObjectName("password_lineEdit");
        sizePolicy.setHeightForWidth(password_lineEdit->sizePolicy().hasHeightForWidth());
        password_lineEdit->setSizePolicy(sizePolicy);
        password_lineEdit->setFont(font);
        password_lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-focus:1px solid blue;\n"
"border-radius: 10px;\n"
"color:grey;border:solid;"));
        password_lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(password_lineEdit, 1, 1, 1, 1);

        lab_summit_9 = new QLabel(gridLayoutWidget);
        lab_summit_9->setObjectName("lab_summit_9");
        lab_summit_9->setMinimumSize(QSize(40, 0));
        lab_summit_9->setStyleSheet(QString::fromUtf8("font:12px;\n"
""));
        lab_summit_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lab_summit_9, 7, 0, 1, 1);

        lab_summit_5 = new QLabel(gridLayoutWidget);
        lab_summit_5->setObjectName("lab_summit_5");
        lab_summit_5->setMinimumSize(QSize(40, 0));
        lab_summit_5->setStyleSheet(QString::fromUtf8("font:12px;\n"
""));
        lab_summit_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lab_summit_5, 1, 0, 1, 1);

        question_lineEdit = new QLineEdit(gridLayoutWidget);
        question_lineEdit->setObjectName("question_lineEdit");
        sizePolicy.setHeightForWidth(question_lineEdit->sizePolicy().hasHeightForWidth());
        question_lineEdit->setSizePolicy(sizePolicy);
        question_lineEdit->setFont(font);
        question_lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgba(0, 0, 0, 0.3);\n"
"border-focus:1px solid blue;\n"
"border-radius: 10px;\n"
"color:grey;border:solid;"));
        question_lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(question_lineEdit, 5, 1, 1, 1);

        lab_summit_8 = new QLabel(gridLayoutWidget);
        lab_summit_8->setObjectName("lab_summit_8");
        lab_summit_8->setMinimumSize(QSize(40, 0));
        lab_summit_8->setStyleSheet(QString::fromUtf8("font:12px;\n"
""));
        lab_summit_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lab_summit_8, 6, 0, 1, 1);

        lab_summit_7 = new QLabel(gridLayoutWidget);
        lab_summit_7->setObjectName("lab_summit_7");
        lab_summit_7->setMinimumSize(QSize(40, 0));
        lab_summit_7->setStyleSheet(QString::fromUtf8("font:12px;\n"
""));
        lab_summit_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lab_summit_7, 5, 0, 1, 1);

        Register->setCentralWidget(centralwidget);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "MainWindow", nullptr));
        lab_summit->setText(QCoreApplication::translate("Register", "\344\270\212\344\274\240\345\233\276\345\203\217", nullptr));
        lab_ava->setText(QString());
        confirmBtn->setText(QCoreApplication::translate("Register", "\346\217\220\344\272\244", nullptr));
        answer_lineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\345\257\206\344\277\235\347\255\224\346\241\210", nullptr));
        verifyCode_lineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\351\252\214\350\257\201\347\240\201", nullptr));
        lab_summit_6->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
        username_lineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        confirmPasswor_lineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        lab_summit_10->setText(QCoreApplication::translate("Register", "\350\264\246\345\217\267:", nullptr));
        password_lineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lab_summit_9->setText(QCoreApplication::translate("Register", "\351\252\214\350\257\201\347\240\201", nullptr));
        lab_summit_5->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201:", nullptr));
        question_lineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\345\257\206\344\277\235\351\227\256\351\242\230", nullptr));
        lab_summit_8->setText(QCoreApplication::translate("Register", "\345\257\206\344\277\235\347\255\224\346\241\210:", nullptr));
        lab_summit_7->setText(QCoreApplication::translate("Register", "\345\257\206\344\277\235\351\227\256\351\242\230:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
