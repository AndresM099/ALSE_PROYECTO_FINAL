/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_user;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_loging;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_register;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QString::fromUtf8("DialogLogin"));
        DialogLogin->resize(400, 300);
        gridLayout = new QGridLayout(DialogLogin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_user = new QLabel(DialogLogin);
        label_user->setObjectName(QString::fromUtf8("label_user"));

        verticalLayout->addWidget(label_user);

        lineEdit_username = new QLineEdit(DialogLogin);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        verticalLayout->addWidget(lineEdit_username);

        label_password = new QLabel(DialogLogin);
        label_password->setObjectName(QString::fromUtf8("label_password"));

        verticalLayout->addWidget(label_password);

        lineEdit_password = new QLineEdit(DialogLogin);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        verticalLayout->addWidget(lineEdit_password);

        pushButton_loging = new QPushButton(DialogLogin);
        pushButton_loging->setObjectName(QString::fromUtf8("pushButton_loging"));

        verticalLayout->addWidget(pushButton_loging);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_register = new QPushButton(DialogLogin);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));

        verticalLayout->addWidget(pushButton_register);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);


        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Login", nullptr));
        label_user->setText(QApplication::translate("DialogLogin", "Usuario", nullptr));
        label_password->setText(QApplication::translate("DialogLogin", "Contrase\303\261a", nullptr));
        pushButton_loging->setText(QApplication::translate("DialogLogin", "INGRESAR", nullptr));
        pushButton_register->setText(QApplication::translate("DialogLogin", "CREAR USUARIO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
