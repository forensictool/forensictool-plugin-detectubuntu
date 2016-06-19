#include "ubuntu.h"

#include <QFile>
#include <QFileInfo>
#include <QCryptographicHash>
#include <QIODevice>
#include <QList>
#include <iostream>
#include "coex/v0.2.2/helpers/typeos_ubuntu.h"

coex::ITypeOperationSystem* DetectUbuntu::detect(QString path) {
	QString ubuntu_15_04 = path + "/lib/modules/3.19.0-42-generic/kernel/ubuntu";
	QString ubuntu_15_10 = path + "/lib/modules/4.2.0-16-generic/kernel/ubuntu";
	
	if(QFile::exists(ubuntu_15_04)){
		return new TypeOS_Ubuntu("15.04");
	}else if(QFile::exists(ubuntu_15_10)){
		return new TypeOS_Ubuntu("15.10");
	}
	return NULL;
};

QString DetectUbuntu::name() {
	return "detectorUbuntu (15.04|15.10)";
};

QString DetectUbuntu::author() {
	return "Evgenii Sopov <mrseakg@gmail.com>";
};

QVector<coex::ITypeOperationSystem *> DetectUbuntu::getSupportsOS() {
	QVector<coex::ITypeOperationSystem *> supportsOS;
	supportsOS.push_back((coex::ITypeOperationSystem *)(new TypeOS_Ubuntu("15.10")));
	supportsOS.push_back((coex::ITypeOperationSystem *)(new TypeOS_Ubuntu("15.04")));
	return supportsOS;
};

coex::IDetectorOperationSystem* createDetectorOperationSystem() {
	return (coex::IDetectorOperationSystem*)(new DetectUbuntu());
}
