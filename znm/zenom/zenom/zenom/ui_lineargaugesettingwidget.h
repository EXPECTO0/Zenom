/********************************************************************************
** Form generated from reading UI file 'lineargaugesettingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEARGAUGESETTINGWIDGET_H
#define UI_LINEARGAUGESETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "gauge/lineargauge.h"
#include "widget/colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_LinearGaugeSettingWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *previewGroupBox;
    QGridLayout *gridLayout_2;
    LinearGauge *preview;
    QTabWidget *tabWidget;
    QWidget *scaleTab;
    QFormLayout *formLayout;
    QLabel *orientationLabel;
    QComboBox *orientation;
    QLabel *positionLabel;
    QComboBox *scalePosition;
    QGroupBox *rangeGroupBox;
    QFormLayout *formLayout_3;
    QLabel *rangeMinLabel;
    QDoubleSpinBox *rangeMin;
    QLabel *rangeMaxLabel;
    QDoubleSpinBox *rangeMax;
    QWidget *ticksTab;
    QFormLayout *formLayout_4;
    QGroupBox *tickCountGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *majorLabel;
    QSpinBox *majorTick;
    QGroupBox *labelGroupBox;
    QGridLayout *gridLayout_3;
    QFontComboBox *font;
    QLabel *fontLabel;
    QLabel *fontSizeLabel;
    QComboBox *fontSize;
    QWidget *pipeTab;
    QFormLayout *formLayout_5;
    QLabel *valueLabel;
    QSpinBox *value;
    QLabel *pipeWidthLabel;
    QSpinBox *pipeWidth;
    QLabel *pipeColorLabel;
    ColorButton *pipeColor;
    QWidget *alarmTab;
    QFormLayout *formLayout_7;
    QGroupBox *alarmGroupBox;
    QFormLayout *formLayout_2;
    QLabel *levelLabel;
    QDoubleSpinBox *alarmLevel;
    ColorButton *alarmColor;
    QLabel *alarmColorLabel;
    QWidget *generalTab;
    QFormLayout *formLayout_6;
    QLabel *titleLabel;
    QLineEdit *title;
    QLabel *textColorLabel;
    ColorButton *textColor;
    QLabel *backgroundColorLabel;
    ColorButton *backgroundColor;

    void setupUi(QWidget *LinearGaugeSettingWidget)
    {
        if (LinearGaugeSettingWidget->objectName().isEmpty())
            LinearGaugeSettingWidget->setObjectName(QString::fromUtf8("LinearGaugeSettingWidget"));
        LinearGaugeSettingWidget->resize(300, 400);
        gridLayout = new QGridLayout(LinearGaugeSettingWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        previewGroupBox = new QGroupBox(LinearGaugeSettingWidget);
        previewGroupBox->setObjectName(QString::fromUtf8("previewGroupBox"));
        gridLayout_2 = new QGridLayout(previewGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        preview = new LinearGauge(previewGroupBox);
        preview->setObjectName(QString::fromUtf8("preview"));

        gridLayout_2->addWidget(preview, 0, 0, 1, 1);


        gridLayout->addWidget(previewGroupBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(LinearGaugeSettingWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        scaleTab = new QWidget();
        scaleTab->setObjectName(QString::fromUtf8("scaleTab"));
        formLayout = new QFormLayout(scaleTab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        orientationLabel = new QLabel(scaleTab);
        orientationLabel->setObjectName(QString::fromUtf8("orientationLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, orientationLabel);

        orientation = new QComboBox(scaleTab);
        orientation->addItem(QString());
        orientation->addItem(QString());
        orientation->setObjectName(QString::fromUtf8("orientation"));
        orientation->setMaximumSize(QSize(150, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, orientation);

        positionLabel = new QLabel(scaleTab);
        positionLabel->setObjectName(QString::fromUtf8("positionLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, positionLabel);

        scalePosition = new QComboBox(scaleTab);
        scalePosition->addItem(QString());
        scalePosition->addItem(QString());
        scalePosition->addItem(QString());
        scalePosition->setObjectName(QString::fromUtf8("scalePosition"));
        scalePosition->setMaximumSize(QSize(150, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, scalePosition);

        rangeGroupBox = new QGroupBox(scaleTab);
        rangeGroupBox->setObjectName(QString::fromUtf8("rangeGroupBox"));
        formLayout_3 = new QFormLayout(rangeGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        rangeMinLabel = new QLabel(rangeGroupBox);
        rangeMinLabel->setObjectName(QString::fromUtf8("rangeMinLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, rangeMinLabel);

        rangeMin = new QDoubleSpinBox(rangeGroupBox);
        rangeMin->setObjectName(QString::fromUtf8("rangeMin"));
        rangeMin->setMaximumSize(QSize(150, 16777215));
        rangeMin->setDecimals(0);
        rangeMin->setMinimum(-999999999.000000000000000);
        rangeMin->setMaximum(999999999.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, rangeMin);

        rangeMaxLabel = new QLabel(rangeGroupBox);
        rangeMaxLabel->setObjectName(QString::fromUtf8("rangeMaxLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, rangeMaxLabel);

        rangeMax = new QDoubleSpinBox(rangeGroupBox);
        rangeMax->setObjectName(QString::fromUtf8("rangeMax"));
        rangeMax->setMaximumSize(QSize(150, 16777215));
        rangeMax->setDecimals(0);
        rangeMax->setMinimum(-999999999.000000000000000);
        rangeMax->setMaximum(999999999.000000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, rangeMax);


        formLayout->setWidget(2, QFormLayout::SpanningRole, rangeGroupBox);

        tabWidget->addTab(scaleTab, QString());
        ticksTab = new QWidget();
        ticksTab->setObjectName(QString::fromUtf8("ticksTab"));
        formLayout_4 = new QFormLayout(ticksTab);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        tickCountGroupBox = new QGroupBox(ticksTab);
        tickCountGroupBox->setObjectName(QString::fromUtf8("tickCountGroupBox"));
        gridLayout_4 = new QGridLayout(tickCountGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        majorLabel = new QLabel(tickCountGroupBox);
        majorLabel->setObjectName(QString::fromUtf8("majorLabel"));

        gridLayout_4->addWidget(majorLabel, 0, 0, 1, 1);

        majorTick = new QSpinBox(tickCountGroupBox);
        majorTick->setObjectName(QString::fromUtf8("majorTick"));
        majorTick->setMinimum(2);

        gridLayout_4->addWidget(majorTick, 0, 1, 1, 1);


        formLayout_4->setWidget(0, QFormLayout::LabelRole, tickCountGroupBox);

        labelGroupBox = new QGroupBox(ticksTab);
        labelGroupBox->setObjectName(QString::fromUtf8("labelGroupBox"));
        labelGroupBox->setCheckable(true);
        gridLayout_3 = new QGridLayout(labelGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        font = new QFontComboBox(labelGroupBox);
        font->setObjectName(QString::fromUtf8("font"));
        font->setMaximumSize(QSize(150, 16777215));

        gridLayout_3->addWidget(font, 0, 1, 1, 1);

        fontLabel = new QLabel(labelGroupBox);
        fontLabel->setObjectName(QString::fromUtf8("fontLabel"));

        gridLayout_3->addWidget(fontLabel, 0, 0, 1, 1);

        fontSizeLabel = new QLabel(labelGroupBox);
        fontSizeLabel->setObjectName(QString::fromUtf8("fontSizeLabel"));

        gridLayout_3->addWidget(fontSizeLabel, 1, 0, 1, 1);

        fontSize = new QComboBox(labelGroupBox);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));
        fontSize->setMaximumSize(QSize(80, 16777215));
        fontSize->setEditable(true);

        gridLayout_3->addWidget(fontSize, 1, 1, 1, 1);


        formLayout_4->setWidget(1, QFormLayout::LabelRole, labelGroupBox);

        tabWidget->addTab(ticksTab, QString());
        pipeTab = new QWidget();
        pipeTab->setObjectName(QString::fromUtf8("pipeTab"));
        formLayout_5 = new QFormLayout(pipeTab);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        valueLabel = new QLabel(pipeTab);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, valueLabel);

        value = new QSpinBox(pipeTab);
        value->setObjectName(QString::fromUtf8("value"));
        value->setMaximumSize(QSize(150, 16777215));
        value->setMaximum(999999999);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, value);

        pipeWidthLabel = new QLabel(pipeTab);
        pipeWidthLabel->setObjectName(QString::fromUtf8("pipeWidthLabel"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, pipeWidthLabel);

        pipeWidth = new QSpinBox(pipeTab);
        pipeWidth->setObjectName(QString::fromUtf8("pipeWidth"));
        pipeWidth->setMaximumSize(QSize(150, 16777215));
        pipeWidth->setMinimum(1);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, pipeWidth);

        pipeColorLabel = new QLabel(pipeTab);
        pipeColorLabel->setObjectName(QString::fromUtf8("pipeColorLabel"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, pipeColorLabel);

        pipeColor = new ColorButton(pipeTab);
        pipeColor->setObjectName(QString::fromUtf8("pipeColor"));
        pipeColor->setMaximumSize(QSize(31, 16777215));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, pipeColor);

        tabWidget->addTab(pipeTab, QString());
        alarmTab = new QWidget();
        alarmTab->setObjectName(QString::fromUtf8("alarmTab"));
        formLayout_7 = new QFormLayout(alarmTab);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        alarmGroupBox = new QGroupBox(alarmTab);
        alarmGroupBox->setObjectName(QString::fromUtf8("alarmGroupBox"));
        alarmGroupBox->setCheckable(true);
        formLayout_2 = new QFormLayout(alarmGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        levelLabel = new QLabel(alarmGroupBox);
        levelLabel->setObjectName(QString::fromUtf8("levelLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, levelLabel);

        alarmLevel = new QDoubleSpinBox(alarmGroupBox);
        alarmLevel->setObjectName(QString::fromUtf8("alarmLevel"));
        alarmLevel->setMaximumSize(QSize(150, 16777215));
        alarmLevel->setDecimals(2);
        alarmLevel->setMinimum(-999999999.000000000000000);
        alarmLevel->setMaximum(999999999.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, alarmLevel);

        alarmColor = new ColorButton(alarmGroupBox);
        alarmColor->setObjectName(QString::fromUtf8("alarmColor"));
        alarmColor->setMaximumSize(QSize(31, 16777215));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, alarmColor);

        alarmColorLabel = new QLabel(alarmGroupBox);
        alarmColorLabel->setObjectName(QString::fromUtf8("alarmColorLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, alarmColorLabel);


        formLayout_7->setWidget(0, QFormLayout::LabelRole, alarmGroupBox);

        tabWidget->addTab(alarmTab, QString());
        generalTab = new QWidget();
        generalTab->setObjectName(QString::fromUtf8("generalTab"));
        formLayout_6 = new QFormLayout(generalTab);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        titleLabel = new QLabel(generalTab);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, titleLabel);

        title = new QLineEdit(generalTab);
        title->setObjectName(QString::fromUtf8("title"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        title->setMaximumSize(QSize(150, 16777215));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, title);

        textColorLabel = new QLabel(generalTab);
        textColorLabel->setObjectName(QString::fromUtf8("textColorLabel"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, textColorLabel);

        textColor = new ColorButton(generalTab);
        textColor->setObjectName(QString::fromUtf8("textColor"));
        textColor->setMaximumSize(QSize(31, 16777215));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, textColor);

        backgroundColorLabel = new QLabel(generalTab);
        backgroundColorLabel->setObjectName(QString::fromUtf8("backgroundColorLabel"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, backgroundColorLabel);

        backgroundColor = new ColorButton(generalTab);
        backgroundColor->setObjectName(QString::fromUtf8("backgroundColor"));
        backgroundColor->setMaximumSize(QSize(31, 16777215));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, backgroundColor);

        tabWidget->addTab(generalTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(LinearGaugeSettingWidget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LinearGaugeSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *LinearGaugeSettingWidget)
    {
        LinearGaugeSettingWidget->setWindowTitle(QCoreApplication::translate("LinearGaugeSettingWidget", "Form", nullptr));
        previewGroupBox->setTitle(QCoreApplication::translate("LinearGaugeSettingWidget", "Preview", nullptr));
        orientationLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Orientation:", nullptr));
        orientation->setItemText(0, QCoreApplication::translate("LinearGaugeSettingWidget", "Vertical", nullptr));
        orientation->setItemText(1, QCoreApplication::translate("LinearGaugeSettingWidget", "Horizontal", nullptr));

        positionLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Position:", nullptr));
        scalePosition->setItemText(0, QCoreApplication::translate("LinearGaugeSettingWidget", "No", nullptr));
        scalePosition->setItemText(1, QCoreApplication::translate("LinearGaugeSettingWidget", "Left / Top", nullptr));
        scalePosition->setItemText(2, QCoreApplication::translate("LinearGaugeSettingWidget", "Right / Bottom", nullptr));

        rangeGroupBox->setTitle(QCoreApplication::translate("LinearGaugeSettingWidget", "Range", nullptr));
        rangeMinLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Minimum: ", nullptr));
        rangeMaxLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Maximum:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(scaleTab), QCoreApplication::translate("LinearGaugeSettingWidget", "Scale", nullptr));
        tickCountGroupBox->setTitle(QCoreApplication::translate("LinearGaugeSettingWidget", "Tick Step", nullptr));
        majorLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Major:", nullptr));
        labelGroupBox->setTitle(QCoreApplication::translate("LinearGaugeSettingWidget", "Labels", nullptr));
        fontLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Font:", nullptr));
        fontSizeLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Font Size:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ticksTab), QCoreApplication::translate("LinearGaugeSettingWidget", "Ticks", nullptr));
        valueLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Value:", nullptr));
        pipeWidthLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Width:", nullptr));
        pipeColorLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Color:", nullptr));
        pipeColor->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(pipeTab), QCoreApplication::translate("LinearGaugeSettingWidget", "Pipe", nullptr));
        alarmGroupBox->setTitle(QCoreApplication::translate("LinearGaugeSettingWidget", "Enabled", nullptr));
        levelLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Level:", nullptr));
        alarmColor->setText(QString());
        alarmColorLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Color:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(alarmTab), QCoreApplication::translate("LinearGaugeSettingWidget", "Alarm", nullptr));
        titleLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Title:", nullptr));
        textColorLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Text:", nullptr));
        textColor->setText(QString());
        backgroundColorLabel->setText(QCoreApplication::translate("LinearGaugeSettingWidget", "Background:", nullptr));
        backgroundColor->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QCoreApplication::translate("LinearGaugeSettingWidget", "General", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinearGaugeSettingWidget: public Ui_LinearGaugeSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEARGAUGESETTINGWIDGET_H
