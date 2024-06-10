/********************************************************************************
** Form generated from reading UI file 'editgaugedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITGAUGEDIALOG_H
#define UI_EDITGAUGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include "widget/logvariabletreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditGaugeDialog
{
public:
    QGridLayout *gridLayout;
    LogVariableTreeWidget *logVariableList;
    QStackedWidget *stackedWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditGaugeDialog)
    {
        if (EditGaugeDialog->objectName().isEmpty())
            EditGaugeDialog->setObjectName(QString::fromUtf8("EditGaugeDialog"));
        EditGaugeDialog->resize(470, 570);
        gridLayout = new QGridLayout(EditGaugeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        logVariableList = new LogVariableTreeWidget(EditGaugeDialog);
        logVariableList->setObjectName(QString::fromUtf8("logVariableList"));
        logVariableList->setMinimumSize(QSize(150, 0));
        logVariableList->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(logVariableList, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(EditGaugeDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(EditGaugeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(EditGaugeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditGaugeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditGaugeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditGaugeDialog);
    } // setupUi

    void retranslateUi(QDialog *EditGaugeDialog)
    {
        EditGaugeDialog->setWindowTitle(QCoreApplication::translate("EditGaugeDialog", "Edit Gauge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditGaugeDialog: public Ui_EditGaugeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITGAUGEDIALOG_H
