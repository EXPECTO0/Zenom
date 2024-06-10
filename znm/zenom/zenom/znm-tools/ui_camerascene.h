/********************************************************************************
** Form generated from reading UI file 'camerascene.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERASCENE_H
#define UI_CAMERASCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_CameraScene
{
public:
    QGridLayout *gridLayout;
    QLabel *label_camera;
    QRadioButton *local;
    QRadioButton *server;
    QPushButton *start;

    QLineEdit *ipAddress;

    void setupUi(QDialog *CameraScene)
    {
        if (CameraScene->objectName().isEmpty())
            CameraScene->setObjectName(QString::fromUtf8("CameraScene"));
        CameraScene->resize(261, 231);
        gridLayout = new QGridLayout(CameraScene);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_camera = new QLabel(CameraScene);
        label_camera->setObjectName(QString::fromUtf8("label_camera"));
        label_camera->setAutoFillBackground(true);
        label_camera->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_camera, 0, 0, 1, 4);

        local = new QRadioButton(CameraScene);
        local->setObjectName(QString::fromUtf8("local"));

        gridLayout->addWidget(local, 1, 0, 1, 1);

        server = new QRadioButton(CameraScene);
        server->setObjectName(QString::fromUtf8("server"));

        gridLayout->addWidget(server, 1, 3, 1, 1);

        start = new QPushButton(CameraScene);
        start->setObjectName(QString::fromUtf8("start"));
        start->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(start, 1, 1, 1, 1);

        ipAddress = new QLineEdit(CameraScene);
        ipAddress->setObjectName(QString::fromUtf8("ipAddress"));
        ipAddress->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));

        gridLayout->addWidget(ipAddress, 2, 1, 1, 1);


        retranslateUi(CameraScene);

        QMetaObject::connectSlotsByName(CameraScene);
    } // setupUi

    void retranslateUi(QDialog *CameraScene)
    {
        CameraScene->setWindowTitle(QApplication::translate("CameraScene", "Dialog"));
        label_camera->setText(QApplication::translate("CameraScene", "                       Select Please"));
        local->setText(QApplication::translate("CameraScene", "Local"));
        server->setText(QApplication::translate("CameraScene", "Server"));
        start->setText(QApplication::translate("CameraScene", "Start"));
    } // retranslateUi

};

namespace Ui {
    class CameraScene: public Ui_CameraScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERASCENE_H
