#ifndef _SCROLLVIEWTESTLAYER_H_
#define _SCROLLVIEWTESTLAYER_H_

#ifdef COCOS_BUILDER_SUPPORT_ENABLED

#include "cocos2d.h"
#include "extensions/cocos-ext.h"

class ScrollViewTestLayer : public cocos2d::Layer {
    public:
        CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(ScrollViewTestLayer, create);
};

#endif

#endif
