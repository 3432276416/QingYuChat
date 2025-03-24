/********************************************************************************
** Form generated from reading UI file 'verify.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFY_H
#define UI_VERIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Verify
{
public:

    void setupUi(QWidget *Verify)
    {
        if (Verify->objectName().isEmpty())
            Verify->setObjectName("Verify");
        Verify->resize(379, 165);

        retranslateUi(Verify);

        QMetaObject::connectSlotsByName(Verify);
    } // setupUi

    void retranslateUi(QWidget *Verify)
    {
        Verify->setWindowTitle(QCoreApplication::translate("Verify", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Verify: public Ui_Verify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFY_H
