include(version.pri)

TEMPLATE = lib
TARGET = forensictool-plugin-detectubuntu
DESTDIR = bin/
OBJECTS_DIR = tmp/
QT -= gui
CONFIG += dll

INCLUDEPATH += src/forensictool-core/v0.3.1/interfaces/

SOURCES += \
	src/ubuntu.cpp \
	src/forensictool-core/v0.3.1/helpers/typeos_ubuntu.cpp \
	

HEADERS += \
	src/ubuntu.h \
	src/forensictool-core/v0.3.1/helpers/typeos_ubuntu.h \

