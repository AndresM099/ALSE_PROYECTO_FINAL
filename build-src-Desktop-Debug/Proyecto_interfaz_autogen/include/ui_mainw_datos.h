/********************************************************************************
** Form generated from reading UI file 'mainw_datos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINW_DATOS_H
#define UI_MAINW_DATOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainW_datos
{
public:
    QAction *actionSensores;
    QAction *actionCerrar_sesi_n;
    QAction *actionBase_de_datos_remota;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout_2;
    QLabel *label_temperatura;
    QLineEdit *lineEdit_temperatura;
    QLabel *label_humedad;
    QLineEdit *lineEdit_humedad;
    QLabel *label_viento;
    QLabel *label_velocidad;
    QLineEdit *lineEdit_velocidad;
    QLabel *label_direccion;
    QLineEdit *lineEdit_direccion;
    QLabel *label_precipitacion;
    QLineEdit *lineEdit_precipitacion;
    QLabel *label_intensidadLuz;
    QLineEdit *lineEdit_intensidadLuz;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_Alerta;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_Cultivo;
    QSpacerItem *verticalSpacer_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainW_datos)
    {
        if (MainW_datos->objectName().isEmpty())
            MainW_datos->setObjectName(QString::fromUtf8("MainW_datos"));
        MainW_datos->resize(500, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8("LOGO.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainW_datos->setWindowIcon(icon);
        actionSensores = new QAction(MainW_datos);
        actionSensores->setObjectName(QString::fromUtf8("actionSensores"));
        actionCerrar_sesi_n = new QAction(MainW_datos);
        actionCerrar_sesi_n->setObjectName(QString::fromUtf8("actionCerrar_sesi_n"));
        actionBase_de_datos_remota = new QAction(MainW_datos);
        actionBase_de_datos_remota->setObjectName(QString::fromUtf8("actionBase_de_datos_remota"));
        centralwidget = new QWidget(MainW_datos);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_temperatura = new QLabel(centralwidget);
        label_temperatura->setObjectName(QString::fromUtf8("label_temperatura"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_temperatura);

        lineEdit_temperatura = new QLineEdit(centralwidget);
        lineEdit_temperatura->setObjectName(QString::fromUtf8("lineEdit_temperatura"));
        lineEdit_temperatura->setAutoFillBackground(false);
        lineEdit_temperatura->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_temperatura);

        label_humedad = new QLabel(centralwidget);
        label_humedad->setObjectName(QString::fromUtf8("label_humedad"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_humedad);

        lineEdit_humedad = new QLineEdit(centralwidget);
        lineEdit_humedad->setObjectName(QString::fromUtf8("lineEdit_humedad"));
        lineEdit_humedad->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_humedad);

        label_viento = new QLabel(centralwidget);
        label_viento->setObjectName(QString::fromUtf8("label_viento"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_viento);

        label_velocidad = new QLabel(centralwidget);
        label_velocidad->setObjectName(QString::fromUtf8("label_velocidad"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_velocidad);

        lineEdit_velocidad = new QLineEdit(centralwidget);
        lineEdit_velocidad->setObjectName(QString::fromUtf8("lineEdit_velocidad"));
        lineEdit_velocidad->setReadOnly(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_velocidad);

        label_direccion = new QLabel(centralwidget);
        label_direccion->setObjectName(QString::fromUtf8("label_direccion"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_direccion);

        lineEdit_direccion = new QLineEdit(centralwidget);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));
        lineEdit_direccion->setReadOnly(true);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_direccion);

        label_precipitacion = new QLabel(centralwidget);
        label_precipitacion->setObjectName(QString::fromUtf8("label_precipitacion"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_precipitacion);

        lineEdit_precipitacion = new QLineEdit(centralwidget);
        lineEdit_precipitacion->setObjectName(QString::fromUtf8("lineEdit_precipitacion"));
        lineEdit_precipitacion->setReadOnly(true);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEdit_precipitacion);

        label_intensidadLuz = new QLabel(centralwidget);
        label_intensidadLuz->setObjectName(QString::fromUtf8("label_intensidadLuz"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_intensidadLuz);

        lineEdit_intensidadLuz = new QLineEdit(centralwidget);
        lineEdit_intensidadLuz->setObjectName(QString::fromUtf8("lineEdit_intensidadLuz"));
        lineEdit_intensidadLuz->setReadOnly(true);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, lineEdit_intensidadLuz);


        gridLayout->addLayout(formLayout_2, 3, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_Alerta = new QLineEdit(groupBox);
        lineEdit_Alerta->setObjectName(QString::fromUtf8("lineEdit_Alerta"));
        lineEdit_Alerta->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Alerta, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);

        label_Cultivo = new QLabel(groupBox);
        label_Cultivo->setObjectName(QString::fromUtf8("label_Cultivo"));

        gridLayout_2->addWidget(label_Cultivo, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 3, 1, 1, 1);

        MainW_datos->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainW_datos);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainW_datos->setStatusBar(statusbar);

        retranslateUi(MainW_datos);

        QMetaObject::connectSlotsByName(MainW_datos);
    } // setupUi

    void retranslateUi(QMainWindow *MainW_datos)
    {
        MainW_datos->setWindowTitle(QApplication::translate("MainW_datos", "Estado", nullptr));
        actionSensores->setText(QApplication::translate("MainW_datos", "Sensores", nullptr));
        actionCerrar_sesi_n->setText(QApplication::translate("MainW_datos", "Cerrar sesi\303\263n", nullptr));
        actionBase_de_datos_remota->setText(QApplication::translate("MainW_datos", "Base de datos remota", nullptr));
        label_temperatura->setText(QApplication::translate("MainW_datos", "TEMPERATURA:", nullptr));
        label_humedad->setText(QApplication::translate("MainW_datos", "HUMEDAD:", nullptr));
        label_viento->setText(QApplication::translate("MainW_datos", "VIENTO:", nullptr));
        label_velocidad->setText(QApplication::translate("MainW_datos", "VELOCIDAD:", nullptr));
        label_direccion->setText(QApplication::translate("MainW_datos", "DIRECCI\303\223N:", nullptr));
        label_precipitacion->setText(QApplication::translate("MainW_datos", "PRECIPITACI\303\223N:", nullptr));
        label_intensidadLuz->setText(QApplication::translate("MainW_datos", "INTENSIDAD \n"
"DE LUZ:", nullptr));
        groupBox->setTitle(QString());
        label_Cultivo->setText(QApplication::translate("MainW_datos", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainW_datos: public Ui_MainW_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINW_DATOS_H
