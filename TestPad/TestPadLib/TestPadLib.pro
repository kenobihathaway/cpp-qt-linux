#-------------------------------------------------
#
# Project created by QtCreator 2017-09-27T15:49:27
#
#-------------------------------------------------

QT       -= gui

TARGET = TestPadLib
TEMPLATE = lib
CONFIG += staticlib
CONFIG += c++14

SOURCES += \
    TestController.cpp \
    TestFactory.cpp \
    TestCpp14.cpp \
    TestPadLib.cpp \
    TestCpp11.cpp \
    TestPointer.cpp \
    TestFizzbuzz.cpp \
    TestMoveSematics.cpp \
    Base.cpp \
    CommonTest.cpp \
    Derived.cpp

HEADERS += \
    TestController.h \
    TestFactory.h \
    TestCpp14.h \
    ITestable.h \
    TestPadLib.h \
    TestCpp11.h \
    TestPointer.h \
    TestClass.h \
    TestFizzbuzz.h \
    TestMoveSematics.h \
    Base.h \
    CommonTest.h \
    Derived.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

APP_VERSION = 0.0.0.1

