/********************************************************************************
** Form generated from reading UI file 'dialogcube.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCUBE_H
#define UI_DIALOGCUBE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialogcube
{
public:
    QDialogButtonBox *buttonBox;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *Dialogcube)
    {
        if (Dialogcube->objectName().isEmpty())
            Dialogcube->setObjectName(QString::fromUtf8("Dialogcube"));
        Dialogcube->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialogcube);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        doubleSpinBox = new QDoubleSpinBox(Dialogcube);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(50, 40, 62, 22));
        doubleSpinBox_2 = new QDoubleSpinBox(Dialogcube);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(50, 110, 62, 22));
        doubleSpinBox_3 = new QDoubleSpinBox(Dialogcube);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(50, 180, 62, 22));
        doubleSpinBox_4 = new QDoubleSpinBox(Dialogcube);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(180, 40, 62, 22));
        doubleSpinBox_5 = new QDoubleSpinBox(Dialogcube);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(180, 110, 62, 22));
        doubleSpinBox_6 = new QDoubleSpinBox(Dialogcube);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setGeometry(QRect(180, 180, 62, 22));
        label = new QLabel(Dialogcube);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 47, 13));
        label_2 = new QLabel(Dialogcube);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 90, 47, 13));
        label_3 = new QLabel(Dialogcube);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 160, 47, 13));
        label_4 = new QLabel(Dialogcube);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 20, 47, 13));
        label_5 = new QLabel(Dialogcube);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 90, 47, 13));
        label_6 = new QLabel(Dialogcube);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 160, 47, 13));

        retranslateUi(Dialogcube);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialogcube, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialogcube, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialogcube);
    } // setupUi

    void retranslateUi(QDialog *Dialogcube)
    {
        Dialogcube->setWindowTitle(QCoreApplication::translate("Dialogcube", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialogcube", "eyeX", nullptr));
        label_2->setText(QCoreApplication::translate("Dialogcube", "eyeY", nullptr));
        label_3->setText(QCoreApplication::translate("Dialogcube", "eyeZ", nullptr));
        label_4->setText(QCoreApplication::translate("Dialogcube", "dir X", nullptr));
        label_5->setText(QCoreApplication::translate("Dialogcube", "dir Y", nullptr));
        label_6->setText(QCoreApplication::translate("Dialogcube", "dir Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogcube: public Ui_Dialogcube {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCUBE_H
