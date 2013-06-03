# -------------------------------------------------
# Project created by QtCreator 2011-07-30T00:27:08
# -------------------------------------------------
QT += core \
    gui \
    network \
    webkit webkitwidgets \
    widgets

TARGET = mysms
TEMPLATE = app
CONFIG += static
SOURCES += networkcookiejar.cpp \
    main.cpp \
    mainwindow.cpp \
    qtsingleapplication.cpp \
    qtlocalpeer.cpp \
    jsinterface.cpp \
    qnetworkaccessmanagercustom.cpp \
    notificationpopup.cpp \
    notificationpopupmanager.cpp \
    usersettings.cpp \
    notificationsummarywidget.cpp \
    updatedialog.cpp \
    soundselector.cpp \
    filedownloader.cpp \
    webview.cpp \
    usersettingsdialog.cpp
HEADERS += networkcookiejar.h \
    mainwindow.h \
    qtsingleapplication.h \
    qtlocalpeer.h \
    jsinterface.h \
    qnetworkaccessmanagercustom.h \
    notificationpopup.h \
    notificationpopupmanager.h \
    usersettings.h \
    notificationsummarywidget.h \
    updatedialog.h \
    soundselector.h \
    filedownloader.h \
    webview.h \
    globalsettings.h \
    usersettingsdialog.h
FORMS +=
OTHER_FILES += 
RESOURCES += mysms.qrc
TRANSLATIONS = translation/mysms_de.ts

# Windows resource file
win32:RC_FILE = mysms.rc
win32:QMAKE_LFLAGS += -static-libgcc
macx:ICON = mysms.icns

unix {
    QT += phonon

    PREFIX = /usr
    BINDIR = $$PREFIX/bin
    DATADIR =$$PREFIX/share

    DEFINES += DATADIR=\\\"$$DATADIR\\\" PKGDATADIR=\\\"$$PKGDATADIR\\\"

    INSTALLS += target desktop sounds icon128

    target.path =$$BINDIR

    desktop.path = $$DATADIR/applications
    desktop.files += $${TARGET}.desktop

    sounds.path = $$DATADIR/sounds/$$TARGET/
    sounds.files += sounds/*.wav

    icon128.path = $$DATADIR/icons/hicolor/128x128/apps
    icon128.files += $${TARGET}-128.png
}
