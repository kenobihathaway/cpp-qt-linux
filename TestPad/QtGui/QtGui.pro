#-------------------------------------------------
#
# Project created by QtCreator 2016-10-19T13:59:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtGui
TEMPLATE = app

CONFIG += debug


SOURCES += main.cpp\
        mainwindow.cpp \
    appengine.cpp

HEADERS  += mainwindow.h \
    appengine.h \
    workerthread.h \

FORMS    += mainwindow.ui



unix:!macx: LIBS += -L$$OUT_PWD/../TestPadLib/ -lTestPadLib

INCLUDEPATH += $$PWD/../TestPadLib
DEPENDPATH += $$PWD/../TestPadLib

INCLUDEPATH += "../../spdlog/include/"

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../TestPadLib/libTestPadLib.a

APP_VERSION = 0.0.0.4
DEFINES += APP_VERSION=\\\"$$APP_VERSION\\\"
