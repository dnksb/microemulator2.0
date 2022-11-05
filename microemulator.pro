QT       += core gui

QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../build-microemulator-Desktop-Debug/dialogsignin.cpp \
    database.cpp \
    defaultmode.cpp \
    dialoglogin.cpp \
    editmodes.cpp \
    fmode.cpp \
    kmode.cpp \
    main.cpp \
    mainwindow.cpp \
    programmingmode.cpp \
    readmode.cpp \
    writemode.cpp

HEADERS += \
    ../build-microemulator-Desktop-Debug/dialogsignin.h \
    database.h \
    defaultmode.h \
    dialoglogin.h \
    editmodes.h \
    fmode.h \
    kmode.h \
    mainwindow.h \
    programmingmode.h \
    readmode.h \
    writemode.h

FORMS += \
    ../build-microemulator-Desktop-Debug/dialogsignin.ui \
    dialoglogin.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
