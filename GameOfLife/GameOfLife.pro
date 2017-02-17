QT += core
QT -= gui

CONFIG += c++11

TARGET = GameOfLife
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    game.cpp \
    savetofile.cpp \
    generator.cpp \
    iteratorOverCells.cpp \
    counterofneighbours.cpp \
    rules.cpp \
    filler.cpp \
    filleremptyboard.cpp \
    fillerwithrandomvalues.cpp \
    converterboolboardtostring.cpp \
    displaygameboardonthecommandline.cpp \
    checkbuttonpressed.cpp \
    board.cpp


# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += Game.h \
    Savetofile.h \
    generator.h \
    iteratorOverCells.h \
    counterofneighbours.h \
    rules.h \
    board.h \
    filler.h \
    filleremptyboard.h \
    fillerwithrandomvalues.h \
    converterboolboardtostring.h \
    displaygameboardonthecommandline.h \
    checkbuttonpressed.h

DISTFILES += \
    GameOfLife.pro.user \
    README.md

