#include <jni.h>
#include <string>

extern "C"
jstring
Java_tw_com_everydayenergy_everydayenergy_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++. ctang003 is in.";
    return env->NewStringUTF(hello.c_str());
}
