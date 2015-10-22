#!/bin/sh
py build_lib.py -b debug
ant clean debug -f build.xml -Dsdk.dir=$ANDROID_SDK_ROOT
adb -d install -r bin/YOUR_APP_NAME_HERE-debug.apk
adb -d logcat -c
adb -d logcat -s prortus cocos2d-x
