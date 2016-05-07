#-------------------------------------------------
#
# Project created by QtCreator 2016-01-26T16:08:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ColorRect
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    XColorMaster.cpp \
    XColorDialog.cpp \
    XGradientSlider.cpp \
    XColorPreview.cpp \
    XColorSquare.cpp

HEADERS  += dialog.h \
    XColorMaster.h \
    XColorDialog.h \
    XGradientSlider.hpp \
    XColorPreview.hpp \
    XColorSquare.h

FORMS    += dialog.ui

RESOURCES += \
    pattern.qrc
