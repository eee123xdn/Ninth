QT       += core gui
QT       += multimedia
QT       += charts
#let us play a beutiful music :)
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += resources_big
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    charts_my.cpp \
    config.cpp \
    honor.cpp \
    lose_cg.cpp \
    main.cpp \
    page1.cpp \
    page2.cpp \
    page3.cpp \
    page4.cpp \
    page5.cpp \
    piggame.cpp \
    startgame.cpp \
    startgame_cg.cpp \
    store.cpp \
    win_cg.cpp

HEADERS += \
    charts_my.h \
    config.h \
    honor.h \
    lose_cg.h \
    page1.h \
    page2.h \
    page3.h \
    page4.h \
    page5.h \
    piggame.h \
    startgame.h \
    startgame_cg.h \
    store.h \
    win_cg.h

FORMS += \
    charts_my.ui \
    config.ui \
    honor.ui \
    lose_cg.ui \
    page1.ui \
    page2.ui \
    page3.ui \
    page4.ui \
    page5.ui \
    piggame.ui \
    startgame.ui \
    startgame_cg.ui \
    store.ui \
    win_cg.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
