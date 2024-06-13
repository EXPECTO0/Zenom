/********************************************************************************
** Form generated from reading UI file 'gaugewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAUGEWIDGET_H
#define UI_GAUGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GaugeWidget
{
public:
    QGridLayout *gridLayout;

    void setupUi(QWidget *GaugeWidget)
    {
        if (GaugeWidget->objectName().isEmpty())
            GaugeWidget->setObjectName(QString::fromUtf8("GaugeWidget"));
        GaugeWidget->resize(400, 300);
        gridLayout = new QGridLayout(GaugeWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        retranslateUi(GaugeWidget);

        QMetaObject::connectSlotsByName(GaugeWidget);
    } // setupUi

    void retranslateUi(QWidget *GaugeWidget)
    {
        GaugeWidget->setWindowTitle(QCoreApplication::translate("GaugeWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GaugeWidget: public Ui_GaugeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAUGEWIDGET_H
