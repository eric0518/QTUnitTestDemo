#-------------------------------------------------
#
# Project created by QtCreator 2018-07-22T20:42:17
#
#-------------------------------------------------

QT       += core testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DemoTest
TEMPLATE = app

include(../Demo/Demo.pri)

SOURCES += \
    cdirectortest.cpp \
    csingertest.cpp \
    main.cpp

HEADERS += \
    cdirectortest.h \
    csingertest.h
