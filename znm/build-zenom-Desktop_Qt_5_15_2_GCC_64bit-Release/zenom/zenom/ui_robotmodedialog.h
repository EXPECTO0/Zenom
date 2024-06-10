/********************************************************************************
** Form generated from reading UI file 'robotmodedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTMODEDIALOG_H
#define UI_ROBOTMODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotModeDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *headButton;
    QRadioButton *rArmButton;
    QRadioButton *lArmButton;
    QRadioButton *bothArmsButton;
    QRadioButton *walkTowardButton;
    QRadioButton *stopButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *rightHandCheckbox;
    QCheckBox *leftHandCheckbox;
    QCheckBox *wholeBodyCheckbox;
    QDoubleSpinBox *distBetwArmsSpinbox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *RobotModeDialog)
    {
        if (RobotModeDialog->objectName().isEmpty())
            RobotModeDialog->setObjectName(QString::fromUtf8("RobotModeDialog"));
        RobotModeDialog->resize(400, 300);
        verticalLayoutWidget = new QWidget(RobotModeDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 99, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        headButton = new QRadioButton(verticalLayoutWidget);
        headButton->setObjectName(QString::fromUtf8("headButton"));

        verticalLayout->addWidget(headButton);

        rArmButton = new QRadioButton(verticalLayoutWidget);
        rArmButton->setObjectName(QString::fromUtf8("rArmButton"));

        verticalLayout->addWidget(rArmButton);

        lArmButton = new QRadioButton(verticalLayoutWidget);
        lArmButton->setObjectName(QString::fromUtf8("lArmButton"));

        verticalLayout->addWidget(lArmButton);

        bothArmsButton = new QRadioButton(verticalLayoutWidget);
        bothArmsButton->setObjectName(QString::fromUtf8("bothArmsButton"));

        verticalLayout->addWidget(bothArmsButton);

        walkTowardButton = new QRadioButton(verticalLayoutWidget);
        walkTowardButton->setObjectName(QString::fromUtf8("walkTowardButton"));

        verticalLayout->addWidget(walkTowardButton);

        stopButton = new QRadioButton(verticalLayoutWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(true);
        stopButton->setChecked(true);

        verticalLayout->addWidget(stopButton);

        verticalLayoutWidget_2 = new QWidget(RobotModeDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(110, 50, 138, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rightHandCheckbox = new QCheckBox(verticalLayoutWidget_2);
        rightHandCheckbox->setObjectName(QString::fromUtf8("rightHandCheckbox"));

        verticalLayout_2->addWidget(rightHandCheckbox);

        leftHandCheckbox = new QCheckBox(verticalLayoutWidget_2);
        leftHandCheckbox->setObjectName(QString::fromUtf8("leftHandCheckbox"));

        verticalLayout_2->addWidget(leftHandCheckbox);

        wholeBodyCheckbox = new QCheckBox(verticalLayoutWidget_2);
        wholeBodyCheckbox->setObjectName(QString::fromUtf8("wholeBodyCheckbox"));

        verticalLayout_2->addWidget(wholeBodyCheckbox);

        distBetwArmsSpinbox = new QDoubleSpinBox(RobotModeDialog);
        distBetwArmsSpinbox->setObjectName(QString::fromUtf8("distBetwArmsSpinbox"));
        distBetwArmsSpinbox->setGeometry(QRect(310, 255, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans Adlam"));
        distBetwArmsSpinbox->setFont(font);
        distBetwArmsSpinbox->setDecimals(5);
        distBetwArmsSpinbox->setMinimum(0.040000000000000);
        distBetwArmsSpinbox->setMaximum(0.070000000000000);
        distBetwArmsSpinbox->setSingleStep(0.001250000000000);
        distBetwArmsSpinbox->setValue(0.050000000000000);
        label = new QLabel(RobotModeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 260, 141, 21));
        label_2 = new QLabel(RobotModeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 20, 181, 17));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);

        retranslateUi(RobotModeDialog);

        QMetaObject::connectSlotsByName(RobotModeDialog);
    } // setupUi

    void retranslateUi(QDialog *RobotModeDialog)
    {
        RobotModeDialog->setWindowTitle(QCoreApplication::translate("RobotModeDialog", "Dialog", nullptr));
        headButton->setText(QCoreApplication::translate("RobotModeDialog", "Head", nullptr));
        rArmButton->setText(QCoreApplication::translate("RobotModeDialog", "Right Arm", nullptr));
        lArmButton->setText(QCoreApplication::translate("RobotModeDialog", "Left Arm", nullptr));
        bothArmsButton->setText(QCoreApplication::translate("RobotModeDialog", "Both Arms", nullptr));
        walkTowardButton->setText(QCoreApplication::translate("RobotModeDialog", "Walk Toward", nullptr));
        stopButton->setText(QCoreApplication::translate("RobotModeDialog", "Stop", nullptr));
        rightHandCheckbox->setText(QCoreApplication::translate("RobotModeDialog", "Right Hand", nullptr));
        leftHandCheckbox->setText(QCoreApplication::translate("RobotModeDialog", "Left Hand", nullptr));
        wholeBodyCheckbox->setText(QCoreApplication::translate("RobotModeDialog", "Whole Body Motion", nullptr));
        label->setText(QCoreApplication::translate("RobotModeDialog", "Distance Between Arms:", nullptr));
        label_2->setText(QCoreApplication::translate("RobotModeDialog", "Nao Control Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RobotModeDialog: public Ui_RobotModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTMODEDIALOG_H
