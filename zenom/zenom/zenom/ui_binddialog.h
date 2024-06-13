/********************************************************************************
** Form generated from reading UI file 'binddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINDDIALOG_H
#define UI_BINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BindDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *nodeTree;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *BindDialog)
    {
        if (BindDialog->objectName().isEmpty())
            BindDialog->setObjectName(QString::fromUtf8("BindDialog"));
        BindDialog->resize(400, 400);
        BindDialog->setModal(true);
        verticalLayout = new QVBoxLayout(BindDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nodeTree = new QTreeWidget(BindDialog);
        nodeTree->setObjectName(QString::fromUtf8("nodeTree"));
        nodeTree->setIndentation(15);
        nodeTree->header()->setDefaultSectionSize(200);

        verticalLayout->addWidget(nodeTree);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(BindDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BindDialog);

        QMetaObject::connectSlotsByName(BindDialog);
    } // setupUi

    void retranslateUi(QDialog *BindDialog)
    {
        BindDialog->setWindowTitle(QApplication::translate("BindDialog", "Bind Parameters"));
        QTreeWidgetItem *___qtreewidgetitem = nodeTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("BindDialog", "Node"));
        closeButton->setText(QApplication::translate("BindDialog", "Close"));
    } // retranslateUi

};

namespace Ui {
    class BindDialog: public Ui_BindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINDDIALOG_H
