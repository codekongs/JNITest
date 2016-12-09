//
// Created by szh on 2016/12/9.
//
#include <string>
#include <jni.h>
#include <iostream>
#include "udt/udt.h"
#include "my.h"

#include "codekong_com_jnitest_MainActivity.h"
JNIEXPORT jstring JNICALL Java_codekong_com_jnitest_MainActivity_getString
(JNIEnv* env, jobject jobject, jstring name){
    using namespace std;
    my a;
    string ab("123");
    UDTSOCKET socket1;

    int b = a.fun(1,2);
    if ( b == 3 )
       return env->NewStringUTF((char *)(" bbbbb "));
    return env->NewStringUTF((char *)("xxxxx"));
}