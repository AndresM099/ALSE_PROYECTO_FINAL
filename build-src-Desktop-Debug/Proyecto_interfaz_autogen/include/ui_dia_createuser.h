/********************************************************************************
** Form generated from reading UI file 'dia_createuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIA_CREATEUSER_H
#define UI_DIA_CREATEUSER_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dia_createUser
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFormLayout *formLayout;
    QLabel *label_temperatura;
    QSpinBox *spinBox_temperatura;
    QLabel *label_humedad;
    QSpinBox *spinBox_humedad;
    QLabel *label_velocidadViento;
    QSpinBox *spinBox_velocidadViento;
    QLabel *label_direccioViento;
    QSpinBox *spinBox_direccionViento;
    QLabel *label_precipitacion;
    QSpinBox *spinBox_precipitacion;
    QLabel *label_intensidadLuz;
    QSpinBox *spinBox_intensidadLuz;
    QDialogButtonBox *buttonBox_create;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_lastName;
    QLineEdit *lineEdit_lastName;
    QLabel *label_document;
    QLineEdit *lineEdit_document;
    QLabel *label_dateBirth;
    QDateEdit *dateEdit_dateBirth;
    QSpacerItem *verticalSpacer;
    QLabel *label_newUser;
    QLineEdit *lineEdit_newUser;
    QLabel *label_newPassword;
    QLineEdit *lineEdit_newPassword;
    QLabel *label_confirmPassword;
    QLineEdit *lineEdit_confirmPassword;
    QSpacerItem *verticalSpacer_3;
    QComboBox *comboBox_cultivo;
    QLabel *label_cultivo;
    QPushButton *pushButton_validar;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Dia_createUser)
    {
        if (Dia_createUser->objectName().isEmpty())
            Dia_createUser->setObjectName(QString::fromUtf8("Dia_createUser"));
        Dia_createUser->resize(539, 443);
        gridLayout = new QGridLayout(Dia_createUser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(Dia_createUser);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_temperatura = new QLabel(groupBox_2);
        label_temperatura->setObjectName(QString::fromUtf8("label_temperatura"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_temperatura);

        spinBox_temperatura = new QSpinBox(groupBox_2);
        spinBox_temperatura->setObjectName(QString::fromUtf8("spinBox_temperatura"));
        spinBox_temperatura->setMinimum(5);
        spinBox_temperatura->setMaximum(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox_temperatura);

        label_humedad = new QLabel(groupBox_2);
        label_humedad->setObjectName(QString::fromUtf8("label_humedad"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_humedad);

        spinBox_humedad = new QSpinBox(groupBox_2);
        spinBox_humedad->setObjectName(QString::fromUtf8("spinBox_humedad"));
        spinBox_humedad->setMinimum(5);
        spinBox_humedad->setMaximum(20);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox_humedad);

        label_velocidadViento = new QLabel(groupBox_2);
        label_velocidadViento->setObjectName(QString::fromUtf8("label_velocidadViento"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_velocidadViento);

        spinBox_velocidadViento = new QSpinBox(groupBox_2);
        spinBox_velocidadViento->setObjectName(QString::fromUtf8("spinBox_velocidadViento"));
        spinBox_velocidadViento->setMinimum(5);
        spinBox_velocidadViento->setMaximum(20);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_velocidadViento);

        label_direccioViento = new QLabel(groupBox_2);
        label_direccioViento->setObjectName(QString::fromUtf8("label_direccioViento"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_direccioViento);

        spinBox_direccionViento = new QSpinBox(groupBox_2);
        spinBox_direccionViento->setObjectName(QString::fromUtf8("spinBox_direccionViento"));
        spinBox_direccionViento->setMinimum(5);
        spinBox_direccionViento->setMaximum(20);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_direccionViento);

        label_precipitacion = new QLabel(groupBox_2);
        label_precipitacion->setObjectName(QString::fromUtf8("label_precipitacion"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_precipitacion);

        spinBox_precipitacion = new QSpinBox(groupBox_2);
        spinBox_precipitacion->setObjectName(QString::fromUtf8("spinBox_precipitacion"));
        spinBox_precipitacion->setMinimum(5);
        spinBox_precipitacion->setMaximum(20);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox_precipitacion);

        label_intensidadLuz = new QLabel(groupBox_2);
        label_intensidadLuz->setObjectName(QString::fromUtf8("label_intensidadLuz"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_intensidadLuz);

        spinBox_intensidadLuz = new QSpinBox(groupBox_2);
        spinBox_intensidadLuz->setObjectName(QString::fromUtf8("spinBox_intensidadLuz"));
        spinBox_intensidadLuz->setMinimum(5);
        spinBox_intensidadLuz->setMaximum(20);

        formLayout->setWidget(5, QFormLayout::FieldRole, spinBox_intensidadLuz);


        verticalLayout->addLayout(formLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);

        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        buttonBox_create = new QDialogButtonBox(Dia_createUser);
        buttonBox_create->setObjectName(QString::fromUtf8("buttonBox_create"));
        buttonBox_create->setOrientation(Qt::Horizontal);
        buttonBox_create->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox_create, 3, 1, 1, 1);

        groupBox = new QGroupBox(Dia_createUser);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_name = new QLabel(groupBox);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_name);

        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_name);

        label_lastName = new QLabel(groupBox);
        label_lastName->setObjectName(QString::fromUtf8("label_lastName"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_lastName);

        lineEdit_lastName = new QLineEdit(groupBox);
        lineEdit_lastName->setObjectName(QString::fromUtf8("lineEdit_lastName"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_lastName);

        label_document = new QLabel(groupBox);
        label_document->setObjectName(QString::fromUtf8("label_document"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_document);

        lineEdit_document = new QLineEdit(groupBox);
        lineEdit_document->setObjectName(QString::fromUtf8("lineEdit_document"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_document);

        label_dateBirth = new QLabel(groupBox);
        label_dateBirth->setObjectName(QString::fromUtf8("label_dateBirth"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_dateBirth);

        dateEdit_dateBirth = new QDateEdit(groupBox);
        dateEdit_dateBirth->setObjectName(QString::fromUtf8("dateEdit_dateBirth"));
        dateEdit_dateBirth->setLocale(QLocale(QLocale::Spanish, QLocale::Colombia));
        dateEdit_dateBirth->setWrapping(false);
        dateEdit_dateBirth->setCurrentSection(QDateTimeEdit::DaySection);
        dateEdit_dateBirth->setCalendarPopup(true);
        dateEdit_dateBirth->setTimeSpec(Qt::LocalTime);
        dateEdit_dateBirth->setDate(QDate(1972, 10, 20));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, dateEdit_dateBirth);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_2->setItem(4, QFormLayout::FieldRole, verticalSpacer);

        label_newUser = new QLabel(groupBox);
        label_newUser->setObjectName(QString::fromUtf8("label_newUser"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_newUser);

        lineEdit_newUser = new QLineEdit(groupBox);
        lineEdit_newUser->setObjectName(QString::fromUtf8("lineEdit_newUser"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEdit_newUser);

        label_newPassword = new QLabel(groupBox);
        label_newPassword->setObjectName(QString::fromUtf8("label_newPassword"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_newPassword);

        lineEdit_newPassword = new QLineEdit(groupBox);
        lineEdit_newPassword->setObjectName(QString::fromUtf8("lineEdit_newPassword"));
        lineEdit_newPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, lineEdit_newPassword);

        label_confirmPassword = new QLabel(groupBox);
        label_confirmPassword->setObjectName(QString::fromUtf8("label_confirmPassword"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_confirmPassword);

        lineEdit_confirmPassword = new QLineEdit(groupBox);
        lineEdit_confirmPassword->setObjectName(QString::fromUtf8("lineEdit_confirmPassword"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, lineEdit_confirmPassword);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(8, QFormLayout::FieldRole, verticalSpacer_3);

        comboBox_cultivo = new QComboBox(groupBox);
        comboBox_cultivo->addItem(QString());
        comboBox_cultivo->addItem(QString());
        comboBox_cultivo->setObjectName(QString::fromUtf8("comboBox_cultivo"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, comboBox_cultivo);

        label_cultivo = new QLabel(groupBox);
        label_cultivo->setObjectName(QString::fromUtf8("label_cultivo"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_cultivo);


        gridLayout_2->addLayout(formLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        pushButton_validar = new QPushButton(Dia_createUser);
        pushButton_validar->setObjectName(QString::fromUtf8("pushButton_validar"));

        gridLayout->addWidget(pushButton_validar, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(Dia_createUser);
        QObject::connect(buttonBox_create, SIGNAL(accepted()), Dia_createUser, SLOT(accept()));
        QObject::connect(buttonBox_create, SIGNAL(rejected()), Dia_createUser, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dia_createUser);
    } // setupUi

    void retranslateUi(QDialog *Dia_createUser)
    {
        Dia_createUser->setWindowTitle(QApplication::translate("Dia_createUser", "Registro", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dia_createUser", "Sensores", nullptr));
        label_2->setText(QApplication::translate("Dia_createUser", "Seleccione el tiempo de \n"
"medida para cada sensor \n"
"de 5 a 20 segundos", nullptr));
        label_temperatura->setText(QApplication::translate("Dia_createUser", "Temperatura", nullptr));
        label_humedad->setText(QApplication::translate("Dia_createUser", "Humedad", nullptr));
        label_velocidadViento->setText(QApplication::translate("Dia_createUser", "Velocidad del\n"
"Viento", nullptr));
        label_direccioViento->setText(QApplication::translate("Dia_createUser", "Direcci\303\263n del\n"
"Viento", nullptr));
        label_precipitacion->setText(QApplication::translate("Dia_createUser", "Precipitaci\303\263n", nullptr));
        label_intensidadLuz->setText(QApplication::translate("Dia_createUser", "Intensidad \n"
"de luz", nullptr));
        groupBox->setTitle(QApplication::translate("Dia_createUser", "CREAR CUENTA", nullptr));
        label_name->setText(QApplication::translate("Dia_createUser", "Nombre", nullptr));
        label_lastName->setText(QApplication::translate("Dia_createUser", "Apellido", nullptr));
        label_document->setText(QApplication::translate("Dia_createUser", "Documento", nullptr));
        label_dateBirth->setText(QApplication::translate("Dia_createUser", "Fecha \n"
"Nacimiento", nullptr));
        dateEdit_dateBirth->setDisplayFormat(QApplication::translate("Dia_createUser", "dd/MM/yyyy", nullptr));
        label_newUser->setText(QApplication::translate("Dia_createUser", "Usuario", nullptr));
        label_newPassword->setText(QApplication::translate("Dia_createUser", "Contrase\303\261a", nullptr));
        label_confirmPassword->setText(QApplication::translate("Dia_createUser", "Confirmar \n"
"Contrase\303\261a", nullptr));
        comboBox_cultivo->setItemText(0, QApplication::translate("Dia_createUser", "Papa", nullptr));
        comboBox_cultivo->setItemText(1, QApplication::translate("Dia_createUser", "Rosas", nullptr));

        label_cultivo->setText(QApplication::translate("Dia_createUser", "Cultivo", nullptr));
        pushButton_validar->setText(QApplication::translate("Dia_createUser", "Validar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dia_createUser: public Ui_Dia_createUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIA_CREATEUSER_H
