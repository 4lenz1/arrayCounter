TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CC= gcc -std=c99
SOURCES += main.c \
    print.c \
    random.c \
    counter.c

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    print.h \
    random.h \
    counter.h

