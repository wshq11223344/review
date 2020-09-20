#include <jni.h>
#include <android/log.h>

#pragma once

// 声明一个函数
extern int getValue();

JNIEXPORT void JNICALL Java_com_kevin_ndk12_1mk_MainActivity_getMyLibMethod
        (JNIEnv *env, jobject inst) {

    __android_log_print(ANDROID_LOG_DEBUG, "qiqi", "测试：%d\n", getValue());
}
