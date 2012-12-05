#-------------------------------------------------
#
# Project created by QtCreator 2012-12-04T18:09:24
#
#-------------------------------------------------

QT       += core gui

CONFIG += warn_on
QMAKE_CXXFLAGS_WARN_ON += -Wall -Wextra -Werror

TARGET = CSConverter
TEMPLATE = app


SOURCES += main.cpp\
		mainwindow.cpp \
    converterhandler.cpp \
    CONVERTERS/defaultconverter.cpp

HEADERS  += mainwindow.h \
    converterhandler.h \
    DEFINES/enums.h \
    CONVERTERS/defaultconverter.h

FORMS    += mainwindow.ui
