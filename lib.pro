include(version.pri)

TEMPLATE = lib
TARGET = coex-plugin-detect-ubuntu
DESTDIR = bin/
OBJECTS_DIR = tmp/
QT -= gui
CONFIG += dll

INCLUDEPATH += src/coex/v0.2.2/interfaces/

SOURCES += \
	src/ubuntu.cpp \
	src/coex/v0.2.2/helpers/typeos_ubuntu.cpp \
	

HEADERS += \
	src/ubuntu.h \
	src/coex/v0.2.2/helpers/typeos_ubuntu.h \

