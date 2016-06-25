#ifndef __FORENSICTOOL_PLUGIN_DETECTUBUNTU_H__
#define __FORENSICTOOL_PLUGIN_DETECTUBUNTU_H__

#include "forensictool.h"
#include <QString>
class DetectUbuntu : forensictool::IDetectorOperationSystem {
	public:
		virtual forensictool::ITypeOperationSystem* detect(QString path);
		virtual QString name();
		virtual QString author();
		virtual QVector<forensictool::ITypeOperationSystem *> getSupportsOS();
};

extern "C"
{
	forensictool::IDetectorOperationSystem* createDetectorOperationSystem();
}

#endif //__FORENSICTOOL_PLUGIN_DETECTUBUNTU_H__
