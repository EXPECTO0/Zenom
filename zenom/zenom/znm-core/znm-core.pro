#--------------------------------------------------------------
#
# Zenom Hard Hard Real-Time Simulation Enviroment
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the Zenom License, Version 2.0
#
#--------------------------------------------------------------

include( ../../zenom.pri )

VERSION = 1.0.0

QT       -= core gui
QMAKE_CXXFLAGS += -std=c++11
CONFIG += c++11
TARGET = znm-core
TEMPLATE = lib

DEFINES += ZNMCORE_LIBRARY

SOURCES += \
    variable.cpp \
    logvariable.cpp \
    controlvariable.cpp \
    datarepository.cpp

HEADERS +=\
        znm-core_global.h \
    variable.h \
    logvariable.h \
    controlvariable.h \
    datarepository.h

# Zenom Tools Library
INCLUDEPATH += ../znm-tools
DEPENDPATH += ../znm-tools
LIBS += -L../../lib -lznm-tools

# build directory
DESTDIR = ../../lib

# install
target.path = $${ZENOM_INSTALL_LIBS}
INSTALLS += target

headers.files  = $${HEADERS}
headers.path   = $${ZENOM_INSTALL_HEADERS}
INSTALLS += headers
