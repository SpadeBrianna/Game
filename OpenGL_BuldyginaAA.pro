TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Remove.cpp \
        main.cpp

INCLUDEPATH += _PRO_FILE_PWD_\Gl

LIBS += -L$$_PRO_FILE_PWD_\lib  \
    -lfreeglut \
   -lopengl32 

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += \
    Remove.h \
    main.h
