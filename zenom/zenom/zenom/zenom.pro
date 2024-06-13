#--------------------------------------------------------------
#
# Zenom Hard Real-Time Simulation Enviroment
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the Zenom License, Version 2.0
#
#--------------------------------------------------------------

include( ../../zenom.pri )

QT       += core gui opengl
QT      += network

CONFIG += qwt
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zenom
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11
CONFIG += c++11

SOURCES += main.cpp\
        zenom.cpp \
    messagelistenertask.cpp \
    controlvariableswidget.cpp \
    logvariableswidget.cpp \
    widget/colorbutton.cpp \
    widget/statusbar.cpp \
    widget/checkedheader.cpp \
    widget/logvariabletreewidget.cpp \
    widget/logvariableitem.cpp \
    gauge/radialgaugesettingwidget.cpp \
    gauge/radialgauge.cpp \
    gauge/numericgaugesettingwidget.cpp \
    gauge/numericgauge.cpp \
    gauge/lineargaugesettingwidget.cpp \
    gauge/lineargauge.cpp \
    gauge/gaugewidget.cpp \
    gauge/gaugemanager.cpp \
    gauge/creategaugedialog.cpp \
    gauge/abstractgauge.cpp \
    gauge/editgaugedialog.cpp \
    plot/plotmanager.cpp \
    plot/plotwindow.cpp \
    plot/attachlogvariabledialog.cpp \
    plot/plotcurve.cpp \
    plot/curvecolorgenerator.cpp \
    plot/legenditem.cpp \
    plot/plot.cpp \
    plot/plotmagnifier.cpp \
    widget/output.cpp \
    aboutdialog.cpp \
    utility/matlabstream.cpp \
    widget/linesizecombobox.cpp

HEADERS  += zenom.h \
    messagelistenertask.h \
    controlvariableswidget.h \
    logvariableswidget.h \
    widget/colorbutton.h \
    widget/statusbar.h \
    widget/checkedheader.h \
    widget/logvariabletreewidget.h \
    widget/logvariableitem.h \
    gauge/radialgaugesettingwidget.h \
    gauge/radialgauge.h \
    gauge/numericgaugesettingwidget.h \
    gauge/numericgauge.h \
    gauge/lineargaugesettingwidget.h \
    gauge/lineargauge.h \
    gauge/gaugewidget.h \
    gauge/gaugemanager.h \
    gauge/creategaugedialog.h \
    gauge/abstractgauge.h \
    gauge/editgaugedialog.h \
    plot/plotmanager.h \
    plot/plotwindow.h \
    plot/attachlogvariabledialog.h \
    plot/plotcurve.h \
    plot/curvecolorgenerator.h \
    plot/legenditem.h \
    plot/plot.h \
    plot/plotmagnifier.h \
    widget/output.h \
    aboutdialog.h \
    utility/matlabstream.h \
    widget/linesizecombobox.h

FORMS    += zenom.ui \
    controlvariableswidget.ui \
    gauge/form.ui \
    gauge/testform.ui \
    logvariableswidget.ui \
    widget/statusbar.ui \
    gauge/radialgaugesettingwidget.ui \
    gauge/numericgaugesettingwidget.ui \
    gauge/lineargaugesettingwidget.ui \
    gauge/gaugewidget.ui \
    gauge/creategaugedialog.ui \
    gauge/editgaugedialog.ui \
    plot/plotwindow.ui \
    plot/attachlogvariabledialog.ui \
    plot/legenditem.ui \
    aboutdialog.ui

RESOURCES += \
    zenom.qrc

# Qwt
INCLUDEPATH +=  $${QWT_HEADERS}
DEPENDPATH += $${QWT_HEADERS}
LIBS += -L$${QWT_LIBS} -lqwt

# Zenom Core Library
INCLUDEPATH += ../znm-core
DEPENDPATH += ../znm-core
LIBS += -L../../lib -lznm-core -lboost_system

# Zenom Tools Library
INCLUDEPATH += ../znm-tools
DEPENDPATH += ../znm-tools
LIBS += -L../../lib -lznm-tools


# build directory
DESTDIR = ../../bin

# install
target.path = $${ZENOM_INSTALL_BINS}
INSTALLS += target
