/********************************************************************************
** Form generated from reading UI file 'zenom.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZENOM_H
#define UI_ZENOM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "widget/output.h"

QT_BEGIN_NAMESPACE

class Ui_Zenom
{
public:
    QAction *actionOpen_Project;
    QAction *actionSave_Project;
    QAction *actionExit;
    QAction *actionWatch;
    QAction *actionReload;
    QAction *actionPlot;
    QAction *action_Contents;
    QAction *action_About_zenom;
    QAction *actionExport_as_Matlab;
    QAction *actionClear_Recent_Projects_Menu;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    Output *output;
    QGridLayout *gridLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QGridLayout *gridLayout_2;
    QLabel *durationLabel;
    QLineEdit *duration;
    QLineEdit *frequency;
    QLabel *frequencyLabel;
    QLabel *frequencyAbb;
    QLabel *durationAbb;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuRecent_P_rojects;
    QMenu *menu_View;
    QMenu *menu_Help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Zenom)
    {
        if (Zenom->objectName().isEmpty())
            Zenom->setObjectName(QString::fromUtf8("Zenom"));
        Zenom->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zenom/resources/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Zenom->setWindowIcon(icon);
        actionOpen_Project = new QAction(Zenom);
        actionOpen_Project->setObjectName(QString::fromUtf8("actionOpen_Project"));
        actionSave_Project = new QAction(Zenom);
        actionSave_Project->setObjectName(QString::fromUtf8("actionSave_Project"));
        actionExit = new QAction(Zenom);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionWatch = new QAction(Zenom);
        actionWatch->setObjectName(QString::fromUtf8("actionWatch"));
        actionReload = new QAction(Zenom);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        actionPlot = new QAction(Zenom);
        actionPlot->setObjectName(QString::fromUtf8("actionPlot"));
        action_Contents = new QAction(Zenom);
        action_Contents->setObjectName(QString::fromUtf8("action_Contents"));
        action_About_zenom = new QAction(Zenom);
        action_About_zenom->setObjectName(QString::fromUtf8("action_About_zenom"));
        actionExport_as_Matlab = new QAction(Zenom);
        actionExport_as_Matlab->setObjectName(QString::fromUtf8("actionExport_as_Matlab"));
        actionClear_Recent_Projects_Menu = new QAction(Zenom);
        actionClear_Recent_Projects_Menu->setObjectName(QString::fromUtf8("actionClear_Recent_Projects_Menu"));
        centralWidget = new QWidget(Zenom);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        output = new Output(centralWidget);
        output->setObjectName(QString::fromUtf8("output"));
        QFont font;
        font.setPointSize(10);
        output->setFont(font);

        gridLayout_3->addWidget(output, 1, 0, 1, 3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        startButton->setMinimumSize(QSize(71, 71));

        gridLayout->addWidget(startButton, 0, 0, 1, 1);

        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        sizePolicy.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy);
        stopButton->setMinimumSize(QSize(71, 71));

        gridLayout->addWidget(stopButton, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, -1, -1, -1);
        durationLabel = new QLabel(centralWidget);
        durationLabel->setObjectName(QString::fromUtf8("durationLabel"));

        gridLayout_2->addWidget(durationLabel, 1, 0, 1, 1);

        duration = new QLineEdit(centralWidget);
        duration->setObjectName(QString::fromUtf8("duration"));

        gridLayout_2->addWidget(duration, 1, 1, 1, 1);

        frequency = new QLineEdit(centralWidget);
        frequency->setObjectName(QString::fromUtf8("frequency"));

        gridLayout_2->addWidget(frequency, 0, 1, 1, 1);

        frequencyLabel = new QLabel(centralWidget);
        frequencyLabel->setObjectName(QString::fromUtf8("frequencyLabel"));

        gridLayout_2->addWidget(frequencyLabel, 0, 0, 1, 1);

        frequencyAbb = new QLabel(centralWidget);
        frequencyAbb->setObjectName(QString::fromUtf8("frequencyAbb"));

        gridLayout_2->addWidget(frequencyAbb, 0, 2, 1, 1);

        durationAbb = new QLabel(centralWidget);
        durationAbb->setObjectName(QString::fromUtf8("durationAbb"));

        gridLayout_2->addWidget(durationAbb, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 2, 1, 1);

        Zenom->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Zenom);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuRecent_P_rojects = new QMenu(menu_File);
        menuRecent_P_rojects->setObjectName(QString::fromUtf8("menuRecent_P_rojects"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        Zenom->setMenuBar(menuBar);
        statusBar = new QStatusBar(Zenom);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Zenom->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionOpen_Project);
        menu_File->addAction(actionSave_Project);
        menu_File->addSeparator();
        menu_File->addAction(actionReload);
        menu_File->addSeparator();
        menu_File->addAction(actionExport_as_Matlab);
        menu_File->addSeparator();
        menu_File->addAction(menuRecent_P_rojects->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        menuRecent_P_rojects->addAction(actionClear_Recent_Projects_Menu);
        menu_View->addAction(actionWatch);
        menu_View->addAction(actionPlot);
        menu_View->addSeparator();
        menu_Help->addAction(action_Contents);
        menu_Help->addSeparator();
        menu_Help->addAction(action_About_zenom);

        retranslateUi(Zenom);

        QMetaObject::connectSlotsByName(Zenom);
    } // setupUi

    void retranslateUi(QMainWindow *Zenom)
    {
        Zenom->setWindowTitle(QCoreApplication::translate("Zenom", "Zenom", nullptr));
        actionOpen_Project->setText(QCoreApplication::translate("Zenom", "&Open Project...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_Project->setShortcut(QCoreApplication::translate("Zenom", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_Project->setText(QCoreApplication::translate("Zenom", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_Project->setShortcut(QCoreApplication::translate("Zenom", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Zenom", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Zenom", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWatch->setText(QCoreApplication::translate("Zenom", "&Watch...", nullptr));
        actionReload->setText(QCoreApplication::translate("Zenom", "&Reload", nullptr));
        actionPlot->setText(QCoreApplication::translate("Zenom", "&Plot", nullptr));
        action_Contents->setText(QCoreApplication::translate("Zenom", "&Contents", nullptr));
#if QT_CONFIG(shortcut)
        action_Contents->setShortcut(QCoreApplication::translate("Zenom", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_About_zenom->setText(QCoreApplication::translate("Zenom", "&About...", nullptr));
        actionExport_as_Matlab->setText(QCoreApplication::translate("Zenom", "Export as Matlab...", nullptr));
        actionClear_Recent_Projects_Menu->setText(QCoreApplication::translate("Zenom", "Clear Menu", nullptr));
        startButton->setText(QString());
        stopButton->setText(QString());
        durationLabel->setText(QCoreApplication::translate("Zenom", "Duration:", nullptr));
        frequencyLabel->setText(QCoreApplication::translate("Zenom", "Frequency:", nullptr));
#if QT_CONFIG(tooltip)
        frequencyAbb->setToolTip(QCoreApplication::translate("Zenom", "Hertz", nullptr));
#endif // QT_CONFIG(tooltip)
        frequencyAbb->setText(QCoreApplication::translate("Zenom", "Hz", nullptr));
#if QT_CONFIG(tooltip)
        durationAbb->setToolTip(QCoreApplication::translate("Zenom", "Second", nullptr));
#endif // QT_CONFIG(tooltip)
        durationAbb->setText(QCoreApplication::translate("Zenom", "s", nullptr));
        menu_File->setTitle(QCoreApplication::translate("Zenom", "&File", nullptr));
        menuRecent_P_rojects->setTitle(QCoreApplication::translate("Zenom", "Recent &Projects", nullptr));
        menu_View->setTitle(QCoreApplication::translate("Zenom", "&View", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("Zenom", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Zenom: public Ui_Zenom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZENOM_H
