#-------------------------------------------------
#  Copyright 2016 ESRI
#
#  All rights reserved under the copyright laws of the United States
#  and applicable international laws, treaties, and conventions.
#
#  You may freely redistribute and use this sample code, with or
#  without modification, provided you include the original copyright
#  notice and use restrictions.
#
#  See the Sample code usage restrictions document for further information.
#-------------------------------------------------

TARGET = girishy_mapview 
TEMPLATE = app

QT += positioning core gui opengl network widgets sensors

CONFIG += c++11

equals(QT_MAJOR_VERSION, 5) {
    lessThan(QT_MINOR_VERSION, 9) { 
        error("$$TARGET requires Qt 5.9.2")
    }
	equals(QT_MINOR_VERSION, 9) : lessThan(QT_PATCH_VERSION, 2) {
		error("$$TARGET requires Qt 5.9.2")
	}
}

ARCGIS_RUNTIME_VERSION = 100.3
include($$PWD/arcgisruntime.pri)

win32:CONFIG += \
    embed_manifest_exe

SOURCES += \
    main.cpp \
    Girishy_mapview.cpp 

HEADERS += \
    Girishy_mapview.h

#-------------------------------------------------------------------------------
