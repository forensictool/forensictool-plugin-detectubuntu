#.pro file
#Application version
VERSION_MAJOR = 0
VERSION_MINOR = 1
VERSION_BUILD = 0

DEFINES += "VERSION_MAJOR=$$VERSION_MAJOR"\
       "VERSION_MINOR=$$VERSION_MINOR"\
       "VERSION_BUILD=$$VERSION_BUILD"

VERSION = $${VERSION_MAJOR}.$${VERSION_MINOR}.$${VERSION_BUILD}


TEMPLATE = lib
TARGET = coex-plugin-detect-ubuntu
DESTDIR = bin/
OBJECTS_DIR = tmp/
QT -= gui
CONFIG += dll
SOURCES += \
	src/ubuntu.cpp \
	src/typeos_ubuntu.cpp

HEADERS += \
	src/ubuntu.h \
	src/typeos_ubuntu.h


