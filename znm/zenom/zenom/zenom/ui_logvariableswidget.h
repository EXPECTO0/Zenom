/********************************************************************************
** Form generated from reading UI file 'logvariableswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGVARIABLESWIDGET_H
#define UI_LOGVARIABLESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogVariablesWidget
{
public:
    QGridLayout *gridLayout;
    QTableWidget *logVariableTable;

    void setupUi(QWidget *LogVariablesWidget)
    {
        if (LogVariablesWidget->objectName().isEmpty())
            LogVariablesWidget->setObjectName(QString::fromUtf8("LogVariablesWidget"));
        LogVariablesWidget->resize(430, 400);
        gridLayout = new QGridLayout(LogVariablesWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        logVariableTable = new QTableWidget(LogVariablesWidget);
        if (logVariableTable->columnCount() < 4)
            logVariableTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        logVariableTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        logVariableTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        logVariableTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        logVariableTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        logVariableTable->setObjectName(QString::fromUtf8("logVariableTable"));
        logVariableTable->setAlternatingRowColors(true);
        logVariableTable->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        logVariableTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        logVariableTable->horizontalHeader()->setDefaultSectionSize(100);
        logVariableTable->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(logVariableTable, 0, 0, 1, 1);


        retranslateUi(LogVariablesWidget);

        QMetaObject::connectSlotsByName(LogVariablesWidget);
    } // setupUi

    void retranslateUi(QWidget *LogVariablesWidget)
    {
        LogVariablesWidget->setWindowTitle(QCoreApplication::translate("LogVariablesWidget", "Log Variables", nullptr));
        QTableWidgetItem *___qtablewidgetitem = logVariableTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LogVariablesWidget", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = logVariableTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LogVariablesWidget", "Freq (Hz)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = logVariableTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("LogVariablesWidget", "Start Time (s)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = logVariableTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("LogVariablesWidget", "Duration (s)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogVariablesWidget: public Ui_LogVariablesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGVARIABLESWIDGET_H
