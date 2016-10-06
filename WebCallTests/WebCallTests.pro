#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T13:53:16
#
#-------------------------------------------------

QT       += network testlib

QT       -= gui

TARGET = producertest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


HEADERS += \
	providertest.h

SOURCES += \
    providertest.cpp \
    main.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtWebCall/release/ -lQtWebCall
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtWebCall/debug/ -lQtWebCall
else:mac: LIBS += -F$$OUT_PWD/../QtWebCall/ -framework QtWebCall
else:unix: LIBS += -L$$OUT_PWD/../QtWebCall/ -lQtWebCall

INCLUDEPATH += $$PWD/../QtWebCall
DEPENDPATH += $$PWD/../QtWebCall
