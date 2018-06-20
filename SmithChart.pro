#Qt Project file--for use by qmake

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmithChart

LIBS += -lqwt -lm

HEADERS += window.h

SOURCES += main.cpp window.cpp
