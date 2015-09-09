APP_STL := gnustl_static

# With armeabi-v7a, your application will run faster, and support multithreading, but support less devices
APP_ABI := armeabi-v7a

APP_CPPFLAGS := -frtti -DCC_ENABLE_SCRIPT_BINDING=0 -DCC_ENABLE_BOX2D_INTEGRATION=1 -DCC_USE_PHYSICS=0 -DENABLE_PHYSICS_BOX2D_DETECT=1 -DENABLE_PHYSICS_SAVE_CALCULATED_VERTEX=0 -DCC_ENABLE_CHIPMUNK_INTEGRATION=0 -DCC_ENABLE_BULLET_INTEGRATION=0 -DCC_USE_NAVMESH=0 -std=c++11 -fsigned-char
APP_LDFLAGS := -latomic


ifeq ($(NDK_DEBUG),1)
  APP_CPPFLAGS += -DCOCOS2D_DEBUG=1
  APP_OPTIM := debug
else
  APP_CPPFLAGS += -DNDEBUG
  APP_OPTIM := release
endif
