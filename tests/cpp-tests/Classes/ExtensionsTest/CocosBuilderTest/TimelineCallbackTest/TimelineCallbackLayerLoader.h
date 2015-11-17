#ifndef _TIMELINECC_CALLBACK_TESTLAYERLOADER_H_
#define _TIMELINECC_CALLBACK_TESTLAYERLOADER_H_

#ifdef COCOS_BUILDER_SUPPORT_ENABLED

#include "TimelineCallbackTestLayer.h"

class TimelineCallbackTestLayerLoader : public cocosbuilder::LayerLoader {
    public:
        CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(TimelineCallbackTestLayerLoader, loader);

    protected:
        CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(TimelineCallbackTestLayer);
};

#endif

#endif /* _TIMELINECC_CALLBACK_TESTLAYERLOADER_H_ */
