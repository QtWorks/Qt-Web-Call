#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T13:53:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DemoApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtWebCall/release/ -lQtWebCall
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtWebCall/debug/ -lQtWebCall
else:mac: LIBS += -F$$OUT_PWD/../QtWebCall/ -framework QtWebCall
else:unix: LIBS += -L$$OUT_PWD/../QtWebCall/ -lQtWebCall

INCLUDEPATH += $$PWD/../QtWebCall
DEPENDPATH += $$PWD/../QtWebCall
