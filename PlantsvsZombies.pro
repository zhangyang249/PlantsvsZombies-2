#-------------------------------------------------
#
# Project created by QtCreator 2014-11-06T23:38:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PlantsvsZombies
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    readingcsvfiles.cpp \
    plants.cpp \
    zombies.cpp \
    bullets.cpp \
    mouseclicking.cpp \
    sunpoints.cpp \
    snowpeabullets.cpp \
    sunflowersuns.cpp \
    lawnmowers.cpp

HEADERS  += mainwindow.h \
    readingcsvfiles.h \
    plants.h \
    zombies.h \
    bullets.h \
    mouseclicking.h \
    sunpoints.h \
    snowpeabullets.h \
    sunflowersuns.h \
    lawnmowers.h

FORMS    += mainwindow.ui
