#-------------------------------------------------
#
# Project created by QtCreator 2018-07-23T22:03:33
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = DemoTestAll2
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app
include(../Demo/Demo.pri)


SOURCES += \
    main.cpp \
    cdirectortest.cpp \
    ctestrunner.cpp \
    csingertest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    cdirectortest.h \
    ctestrunner.h \
    csingertest.h
