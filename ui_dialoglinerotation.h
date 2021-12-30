/********************************************************************************
** Form generated from reading UI file 'dialoglinerotation.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLINEROTATION_H
#define UI_DIALOGLINEROTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialoglinerotation
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;

    void setupUi(QDialog *Dialoglinerotation)
    {
        if (Dialoglinerotation->objectName().isEmpty())
            Dialoglinerotation->setObjectName(QString::fromUtf8("Dialoglinerotation"));
        Dialoglinerotation->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialoglinerotation);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(Dialoglinerotation);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 100, 47, 13));
        label_6 = new QLabel(Dialoglinerotation);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 170, 47, 13));
        label_2 = new QLabel(Dialoglinerotation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 47, 13));
        label = new QLabel(Dialoglinerotation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 47, 13));
        label_4 = new QLabel(Dialoglinerotation);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 30, 47, 13));
        label_7 = new QLabel(Dialoglinerotation);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 120, 101, 16));
        label_3 = new QLabel(Dialoglinerotation);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 170, 47, 13));
        doubleSpinBox = new QDoubleSpinBox(Dialoglinerotation);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(40, 50, 62, 22));
        doubleSpinBox_2 = new QDoubleSpinBox(Dialoglinerotation);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(40, 120, 62, 22));
        doubleSpinBox_3 = new QDoubleSpinBox(Dialoglinerotation);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(40, 200, 62, 22));
        doubleSpinBox_4 = new QDoubleSpinBox(Dialoglinerotation);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(170, 50, 62, 22));
        doubleSpinBox_5 = new QDoubleSpinBox(Dialoglinerotation);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(170, 120, 62, 22));
        doubleSpinBox_6 = new QDoubleSpinBox(Dialoglinerotation);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setGeometry(QRect(170, 200, 62, 22));
        doubleSpinBox_7 = new QDoubleSpinBox(Dialoglinerotation);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setGeometry(QRect(280, 150, 62, 22));

        retranslateUi(Dialoglinerotation);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialoglinerotation, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialoglinerotation, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialoglinerotation);
    } // setupUi

    void retranslateUi(QDialog *Dialoglinerotation)
    {
        Dialoglinerotation->setWindowTitle(QCoreApplication::translate("Dialoglinerotation", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("Dialoglinerotation", "vecD(y)", nullptr));
        label_6->setText(QCoreApplication::translate("Dialoglinerotation", "vecD(z)", nullptr));
        label_2->setText(QCoreApplication::translate("Dialoglinerotation", "vecB(y)", nullptr));
        label->setText(QCoreApplication::translate("Dialoglinerotation", "vecB(x)", nullptr));
        label_4->setText(QCoreApplication::translate("Dialoglinerotation", "vecD(x)", nullptr));
        label_7->setText(QCoreApplication::translate("Dialoglinerotation", "Rotation (Degrees)", nullptr));
        label_3->setText(QCoreApplication::translate("Dialoglinerotation", "vecB(z)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialoglinerotation: public Ui_Dialoglinerotation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLINEROTATION_H
