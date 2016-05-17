#ifndef __UBUNTU_H__
#define __UBUNTU_H__

#include "coex.h"
#include <QString>
class DetectUbuntu : coex::IDetectOperationSystem {
	public:
		virtual coex::ITypeOperationSystem* detect(QString path);
		virtual QString name();
		virtual QString author();
		virtual QVector<coex::ITypeOperationSystem *> getSupportsOS();
};

extern "C"
{
	coex::IDetectOperationSystem* createDetectOperationSystem();
}

#endif //__UBUNTU_H__
