/********************************************************************************
** Form generated from reading UI file 'plotwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTWINDOW_H
#define UI_PLOTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plot/plot.h"

QT_BEGIN_NAMESPACE

class Ui_PlotWindow
{
public:
    QAction *actionAttach_Log_Variable;
    QAction *actionSet_Time_Interval;
    QAction *actionAutoscale;
    QAction *action_Contents;
    QAction *actionI_mport;
    QAction *action_Export;
    QAction *action_Close;
    QAction *action_Open;
    QAction *action_Save;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    Plot *plot;
    QToolBar *toolBar;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QMenu *menu_Plot;

    void setupUi(QMainWindow *PlotWindow)
    {
        if (PlotWindow->objectName().isEmpty())
            PlotWindow->setObjectName(QString::fromUtf8("PlotWindow"));
        PlotWindow->resize(600, 400);
        actionAttach_Log_Variable = new QAction(PlotWindow);
        actionAttach_Log_Variable->setObjectName(QString::fromUtf8("actionAttach_Log_Variable"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zenom/resources/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAttach_Log_Variable->setIcon(icon);
        actionSet_Time_Interval = new QAction(PlotWindow);
        actionSet_Time_Interval->setObjectName(QString::fromUtf8("actionSet_Time_Interval"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/plot/resources/timeinterval.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet_Time_Interval->setIcon(icon1);
        actionAutoscale = new QAction(PlotWindow);
        actionAutoscale->setObjectName(QString::fromUtf8("actionAutoscale"));
        actionAutoscale->setCheckable(true);
        actionAutoscale->setChecked(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/plot/resources/autoscale.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutoscale->setIcon(icon2);
        action_Contents = new QAction(PlotWindow);
        action_Contents->setObjectName(QString::fromUtf8("action_Contents"));
        actionI_mport = new QAction(PlotWindow);
        actionI_mport->setObjectName(QString::fromUtf8("actionI_mport"));
        action_Export = new QAction(PlotWindow);
        action_Export->setObjectName(QString::fromUtf8("action_Export"));
        action_Close = new QAction(PlotWindow);
        action_Close->setObjectName(QString::fromUtf8("action_Close"));
        action_Open = new QAction(PlotWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(PlotWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        centralwidget = new QWidget(PlotWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plot = new Plot(centralwidget);
        plot->setObjectName(QString::fromUtf8("plot"));

        gridLayout->addWidget(plot, 0, 0, 1, 1);

        PlotWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(PlotWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        PlotWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        menubar = new QMenuBar(PlotWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Plot = new QMenu(menubar);
        menu_Plot->setObjectName(QString::fromUtf8("menu_Plot"));
        PlotWindow->setMenuBar(menubar);

        toolBar->addAction(actionAutoscale);
        toolBar->addSeparator();
        toolBar->addAction(actionSet_Time_Interval);
        toolBar->addSeparator();
        toolBar->addAction(actionAttach_Log_Variable);
        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Plot->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addSeparator();
        menu_File->addAction(action_Export);
        menu_File->addSeparator();
        menu_File->addAction(action_Close);
        menu_Help->addAction(action_Contents);
        menu_Plot->addAction(actionAutoscale);
        menu_Plot->addAction(actionSet_Time_Interval);
        menu_Plot->addSeparator();
        menu_Plot->addAction(actionAttach_Log_Variable);

        retranslateUi(PlotWindow);

        QMetaObject::connectSlotsByName(PlotWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlotWindow)
    {
        PlotWindow->setWindowTitle(QCoreApplication::translate("PlotWindow", "Plot", nullptr));
        actionAttach_Log_Variable->setText(QCoreApplication::translate("PlotWindow", "Attach &Log Variable...", nullptr));
#if QT_CONFIG(tooltip)
        actionAttach_Log_Variable->setToolTip(QCoreApplication::translate("PlotWindow", "Attach Log Variable to Plot", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSet_Time_Interval->setText(QCoreApplication::translate("PlotWindow", "Set &Time Interval...", nullptr));
#if QT_CONFIG(tooltip)
        actionSet_Time_Interval->setToolTip(QCoreApplication::translate("PlotWindow", "Sets Plot Time Interval", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAutoscale->setText(QCoreApplication::translate("PlotWindow", "&Autoscale", nullptr));
#if QT_CONFIG(tooltip)
        actionAutoscale->setToolTip(QCoreApplication::translate("PlotWindow", "Autoscale", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Contents->setText(QCoreApplication::translate("PlotWindow", "&Contents", nullptr));
#if QT_CONFIG(shortcut)
        action_Contents->setShortcut(QCoreApplication::translate("PlotWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionI_mport->setText(QCoreApplication::translate("PlotWindow", "I&mport...", nullptr));
#if QT_CONFIG(tooltip)
        actionI_mport->setToolTip(QCoreApplication::translate("PlotWindow", "Import", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Export->setText(QCoreApplication::translate("PlotWindow", "&Export...", nullptr));
#if QT_CONFIG(tooltip)
        action_Export->setToolTip(QCoreApplication::translate("PlotWindow", "Export", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Close->setText(QCoreApplication::translate("PlotWindow", "&Close", nullptr));
        action_Open->setText(QCoreApplication::translate("PlotWindow", "&Open...", nullptr));
#if QT_CONFIG(tooltip)
        action_Open->setToolTip(QCoreApplication::translate("PlotWindow", "Open Zenom Plot File", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Save->setText(QCoreApplication::translate("PlotWindow", "&Save...", nullptr));
#if QT_CONFIG(tooltip)
        action_Save->setToolTip(QCoreApplication::translate("PlotWindow", "Save as Zenom Plot File", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("PlotWindow", "Plot Tool Bar", nullptr));
        menu_File->setTitle(QCoreApplication::translate("PlotWindow", "&File", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("PlotWindow", "&Help", nullptr));
        menu_Plot->setTitle(QCoreApplication::translate("PlotWindow", "&Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotWindow: public Ui_PlotWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTWINDOW_H
