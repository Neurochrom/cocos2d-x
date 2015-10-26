#!/bin/sh
set -e
py build_lib.py -b release
ant clean release -f build.xml -Dsdk.dir=$ANDROID_SDK_ROOT
adb -d install -r bin/YOUR_APP_NAME_HERE-release.apk
adb -d logcat -c
adb -d logcat -s prortus cocos2d-x
