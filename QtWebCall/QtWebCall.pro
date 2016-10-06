#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T13:48:26
#
#-------------------------------------------------

QT       += network websockets

QT       -= gui

TARGET = QtWebCall #TODO library name
TEMPLATE = lib

DEFINES += QTWEBCALL_LIBRARY

HEADERS +=\
		qtwebcall_global.h \
    webcallprovider.h \
    idispatcher.h \
    simplewebsocketdispatcher.h \
    webcallexception.h

SOURCES += \
    webcallprovider.cpp \
    idispatcher.cpp \
    simplewebsocketdispatcher.cpp \
    webcallexception.cpp
