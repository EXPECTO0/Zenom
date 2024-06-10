/********************************************************************************
** Form generated from reading UI file 'numericgaugesettingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMERICGAUGESETTINGWIDGET_H
#define UI_NUMERICGAUGESETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "gauge/numericgauge.h"
#include "widget/colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_NumericGaugeSettingWidget
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *displayTab;
    QFormLayout *formLayout;
    QLabel *valueLabel;
    QDoubleSpinBox *value;
    QLabel *modeLabel;
    QComboBox *mode;
    QLabel *decimalsLabel;
    QSpinBox *decimals;
    QWidget *generalTab;
    QFormLayout *formLayout_2;
    QLabel *titleLabel;
    QLineEdit *title;
    QLabel *textColorLabel;
    ColorButton *textColor;
    QLabel *backgroundColorLabel;
    ColorButton *backgroundColor;
    QGroupBox *previewGroupBox;
    QGridLayout *gridLayout_2;
    NumericGauge *preview;

    void setupUi(QWidget *NumericGaugeSettingWidget)
    {
        if (NumericGaugeSettingWidget->objectName().isEmpty())
            NumericGaugeSettingWidget->setObjectName(QString::fromUtf8("NumericGaugeSettingWidget"));
        NumericGaugeSettingWidget->resize(300, 400);
        gridLayout = new QGridLayout(NumericGaugeSettingWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(NumericGaugeSettingWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        displayTab = new QWidget();
        displayTab->setObjectName(QString::fromUtf8("displayTab"));
        formLayout = new QFormLayout(displayTab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        valueLabel = new QLabel(displayTab);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, valueLabel);

        value = new QDoubleSpinBox(displayTab);
        value->setObjectName(QString::fromUtf8("value"));
        value->setMaximumSize(QSize(150, 16777215));
        value->setDecimals(1);
        value->setMinimum(-999999999.000000000000000);
        value->setMaximum(999999999.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, value);

        modeLabel = new QLabel(displayTab);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, modeLabel);

        mode = new QComboBox(displayTab);
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setMaximumSize(QSize(150, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, mode);

        decimalsLabel = new QLabel(displayTab);
        decimalsLabel->setObjectName(QString::fromUtf8("decimalsLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, decimalsLabel);

        decimals = new QSpinBox(displayTab);
        decimals->setObjectName(QString::fromUtf8("decimals"));
        decimals->setMaximumSize(QSize(150, 16777215));
        decimals->setMinimum(0);
        decimals->setMaximum(10);

        formLayout->setWidget(2, QFormLayout::FieldRole, decimals);

        tabWidget->addTab(displayTab, QString());
        generalTab = new QWidget();
        generalTab->setObjectName(QString::fromUtf8("generalTab"));
        formLayout_2 = new QFormLayout(generalTab);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        titleLabel = new QLabel(generalTab);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, titleLabel);

        title = new QLineEdit(generalTab);
        title->setObjectName(QString::fromUtf8("title"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        title->setMaximumSize(QSize(150, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, title);

        textColorLabel = new QLabel(generalTab);
        textColorLabel->setObjectName(QString::fromUtf8("textColorLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, textColorLabel);

        textColor = new ColorButton(generalTab);
        textColor->setObjectName(QString::fromUtf8("textColor"));
        textColor->setMaximumSize(QSize(31, 16777215));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, textColor);

        backgroundColorLabel = new QLabel(generalTab);
        backgroundColorLabel->setObjectName(QString::fromUtf8("backgroundColorLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, backgroundColorLabel);

        backgroundColor = new ColorButton(generalTab);
        backgroundColor->setObjectName(QString::fromUtf8("backgroundColor"));
        backgroundColor->setMaximumSize(QSize(31, 16777215));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, backgroundColor);

        tabWidget->addTab(generalTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        previewGroupBox = new QGroupBox(NumericGaugeSettingWidget);
        previewGroupBox->setObjectName(QString::fromUtf8("previewGroupBox"));
        gridLayout_2 = new QGridLayout(previewGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        preview = new NumericGauge(previewGroupBox);
        preview->setObjectName(QString::fromUtf8("preview"));

        gridLayout_2->addWidget(preview, 0, 0, 1, 1);


        gridLayout->addWidget(previewGroupBox, 1, 0, 1, 1);


        retranslateUi(NumericGaugeSettingWidget);

        tabWidget->setCurrentIndex(0);
        mode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NumericGaugeSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *NumericGaugeSettingWidget)
    {
        NumericGaugeSettingWidget->setWindowTitle(QCoreApplication::translate("NumericGaugeSettingWidget", "Form", nullptr));
        valueLabel->setText(QCoreApplication::translate("NumericGaugeSettingWidget", "Value:", nullptr));
        modeLabel->setText(QCoreApplication::translate("NumericGaugeSettingWidget", "Mode:", nullptr));
        mode->setItemText(0, QCoreApplication::translate("NumericGaugeSettingWidget", "Hex", nullptr));
        mode->setItemText(1, QCoreApplication::translate("NumericGaugeSettingWidget", "Dec", nullptr));
        mode->setItemText(2, QCoreApplication::translate("NumericGaugeSettingWidget", "Oct", nullptr));
        mode->setItemText(3, QCoreApplication::translate("NumericGaugeSettingWidget", "Bin", nullptr));

        decimalsLabel->setText(QCoreApplication::translate("NumericGaugeSettingWidget", "Decimals:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(displayTab), QCoreApplication::translate("NumericGaugeSettingWidget", "Display", nullptr));
        titleLabel->setText(QCoreApplication::translate("NumericGaugeSettingWidget", "Title:", nullptr));
        textColorLabel->setText(QCoreApplication::translate("NumericGaugeSettingWidget", "Text:", nullptr));
        textColor->setText(QString());
        backgroundColorLabel->setText(QCoreApplication::translate("NumericGaugeSettingWidget", "Background:", nullptr));
        backgroundColor->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QCoreApplication::translate("NumericGaugeSettingWidget", "General", nullptr));
        previewGroupBox->setTitle(QCoreApplication::translate("NumericGaugeSettingWidget", "Preview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumericGaugeSettingWidget: public Ui_NumericGaugeSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMERICGAUGESETTINGWIDGET_H
