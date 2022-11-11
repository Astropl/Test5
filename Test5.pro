QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    #DBase/Odzyskany/Szukaj/dbmain.cpp \
    DBase/dbmain.cpp \
    DBase/dbmain.cpp \
    Settings/addanalyser.cpp \
    Settings/addanalyser.cpp \
    main.cpp \
    test5.cpp

HEADERS += \
    DBase/dbmain.h \
    Settings/addanalyser.h \
    Settings/addanalyser.h \
    #Settings/addanalyser.h~RF25a66f93.TMP \
    Settings/ui_addanalyser.h \
    #Settings/ui_addanalyser_0.h \
    # Settings/ui_addanalyser_1.h \
    test5.h

FORMS += \
    DBase/dbmain.ui \
    Settings/addanalyser.ui \
    test5.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    DBase/2022.11.02 — kopia.db \
    DBase/2022.11.02 — kopia.db \
    DBase/2022.11.02.db \
    Settings/addanalyser.cpp~RF1fbf16ba.TMP \
    Settings/ui_addanalyser.h.147DAA03FDF8F7BA.idx
