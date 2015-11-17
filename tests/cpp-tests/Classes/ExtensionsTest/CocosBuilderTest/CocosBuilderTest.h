#ifndef _CCBIREADER_TEST_H_
#define _CCBIREADER_TEST_H_

#ifdef COCOS_BUILDER_SUPPORT_ENABLED

#include "../../BaseTest.h"

DEFINE_TEST_SUITE(CocosBuilderTests);

class CocosBuilderTestScene : public TestCase {
public:
    CREATE_FUNC(CocosBuilderTestScene);

    virtual bool init() override;
};

#endif

#endif
