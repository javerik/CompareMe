#-------------------------------------------------
#
# Project created by QtCreator 2014-07-31T17:29:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CompareMe
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Helper/directoriehelper.cpp \
    Compareing/comparefilter.cpp \
    Compareing/compareanalyse.cpp \
    Compareing/compareresult.cpp \
    Compareing/compareitem.cpp \
    resultdisplay.cpp \
    Copy/copymain.cpp \
    Copy/Helper/folderhelper.cpp \
    Messages/updatemessage.cpp \
    Copy/Helper/filehelper.cpp \
    Compareing/comparehelper.cpp \
    Advanced/Checksum/hashhelper.cpp \
    propertyclass.cpp \
    properties.cpp \
    Log/log.cpp

HEADERS  += mainwindow.h \
    Helper/directoriehelper.h \
    Compareing/comparefilter.h \
    Compareing/compareanalyse.h \
    Compareing/compareresult.h \
    Compareing/compareitem.h \
    common.h \
    resultdisplay.h \
    Copy/copymain.h \
    Messages/updatemessage.h \
    Copy/Helper/filehelper.h \
    Copy/Helper/folderhelper.h \
    Compareing/comparehelper.h \
    Advanced/Checksum/hashhelper.h \
    Log/log.h \
    propertyclass.h \
    properties.h

FORMS    += mainwindow.ui \
    resultdisplay.ui \
    properties.ui
