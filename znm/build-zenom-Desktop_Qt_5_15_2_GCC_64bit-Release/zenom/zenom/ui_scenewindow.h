/********************************************************************************
** Form generated from reading UI file 'scenewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEWINDOW_H
#define UI_SCENEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "scene/viewerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SceneWindow
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionPrevious_Viewpoint;
    QAction *actionNext_Viewpoint;
    QAction *actionCreate_Viewpoint;
    QAction *actionRemove_Current_Viewpoint;
    QAction *actionBind_Parameters;
    QAction *actionReturn_to_Viewpoint;
    QAction *action_Contents;
    ViewerWidget *viewer;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Viewpoints;
    QMenu *menu_Help;
    QMenu *menu_Scene;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SceneWindow)
    {
        if (SceneWindow->objectName().isEmpty())
            SceneWindow->setObjectName(QString::fromUtf8("SceneWindow"));
        SceneWindow->resize(600, 400);
        actionOpen = new QAction(SceneWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionClose = new QAction(SceneWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionPrevious_Viewpoint = new QAction(SceneWindow);
        actionPrevious_Viewpoint->setObjectName(QString::fromUtf8("actionPrevious_Viewpoint"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zenom/resources/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrevious_Viewpoint->setIcon(icon);
        actionNext_Viewpoint = new QAction(SceneWindow);
        actionNext_Viewpoint->setObjectName(QString::fromUtf8("actionNext_Viewpoint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/zenom/resources/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext_Viewpoint->setIcon(icon1);
        actionCreate_Viewpoint = new QAction(SceneWindow);
        actionCreate_Viewpoint->setObjectName(QString::fromUtf8("actionCreate_Viewpoint"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zenom/resources/viewpoint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_Viewpoint->setIcon(icon2);
        actionRemove_Current_Viewpoint = new QAction(SceneWindow);
        actionRemove_Current_Viewpoint->setObjectName(QString::fromUtf8("actionRemove_Current_Viewpoint"));
        actionBind_Parameters = new QAction(SceneWindow);
        actionBind_Parameters->setObjectName(QString::fromUtf8("actionBind_Parameters"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/zenom/resources/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBind_Parameters->setIcon(icon3);
        actionReturn_to_Viewpoint = new QAction(SceneWindow);
        actionReturn_to_Viewpoint->setObjectName(QString::fromUtf8("actionReturn_to_Viewpoint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/zenom/resources/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReturn_to_Viewpoint->setIcon(icon4);
        action_Contents = new QAction(SceneWindow);
        action_Contents->setObjectName(QString::fromUtf8("action_Contents"));
        viewer = new ViewerWidget(SceneWindow);
        viewer->setObjectName(QString::fromUtf8("viewer"));
        SceneWindow->setCentralWidget(viewer);
        menubar = new QMenuBar(SceneWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Viewpoints = new QMenu(menubar);
        menu_Viewpoints->setObjectName(QString::fromUtf8("menu_Viewpoints"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Scene = new QMenu(menubar);
        menu_Scene->setObjectName(QString::fromUtf8("menu_Scene"));
        SceneWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SceneWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SceneWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(SceneWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        SceneWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Viewpoints->menuAction());
        menubar->addAction(menu_Scene->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionOpen);
        menu_File->addSeparator();
        menu_File->addAction(actionClose);
        menu_Viewpoints->addAction(actionPrevious_Viewpoint);
        menu_Viewpoints->addAction(actionNext_Viewpoint);
        menu_Viewpoints->addSeparator();
        menu_Viewpoints->addAction(actionCreate_Viewpoint);
        menu_Viewpoints->addAction(actionRemove_Current_Viewpoint);
        menu_Help->addAction(action_Contents);
        menu_Scene->addAction(actionBind_Parameters);
        toolBar->addAction(actionPrevious_Viewpoint);
        toolBar->addAction(actionNext_Viewpoint);
        toolBar->addAction(actionReturn_to_Viewpoint);
        toolBar->addAction(actionCreate_Viewpoint);
        toolBar->addSeparator();
        toolBar->addAction(actionBind_Parameters);

        retranslateUi(SceneWindow);

        QMetaObject::connectSlotsByName(SceneWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SceneWindow)
    {
        SceneWindow->setWindowTitle(QCoreApplication::translate("SceneWindow", "Scene", nullptr));
        actionOpen->setText(QCoreApplication::translate("SceneWindow", "&Open osg file...", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("SceneWindow", "Open osg file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClose->setText(QCoreApplication::translate("SceneWindow", "&Close", nullptr));
        actionPrevious_Viewpoint->setText(QCoreApplication::translate("SceneWindow", "&Previous Viewpoint", nullptr));
        actionNext_Viewpoint->setText(QCoreApplication::translate("SceneWindow", "&Next Viewpoint", nullptr));
        actionCreate_Viewpoint->setText(QCoreApplication::translate("SceneWindow", "&Create Viewpoint...", nullptr));
        actionRemove_Current_Viewpoint->setText(QCoreApplication::translate("SceneWindow", "&Remove Current Viewpoint", nullptr));
        actionBind_Parameters->setText(QCoreApplication::translate("SceneWindow", "&Bind Parameters...", nullptr));
        actionReturn_to_Viewpoint->setText(QCoreApplication::translate("SceneWindow", "Return to Viewpoint", nullptr));
        action_Contents->setText(QCoreApplication::translate("SceneWindow", "&Contents", nullptr));
#if QT_CONFIG(shortcut)
        action_Contents->setShortcut(QCoreApplication::translate("SceneWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        menu_File->setTitle(QCoreApplication::translate("SceneWindow", "&File", nullptr));
        menu_Viewpoints->setTitle(QCoreApplication::translate("SceneWindow", "&Viewpoints", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("SceneWindow", "&Help", nullptr));
        menu_Scene->setTitle(QCoreApplication::translate("SceneWindow", "&Scene", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("SceneWindow", "Scene Tool Bar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SceneWindow: public Ui_SceneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEWINDOW_H
