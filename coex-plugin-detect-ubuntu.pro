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
