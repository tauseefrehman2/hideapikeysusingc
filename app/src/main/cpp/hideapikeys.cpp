#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_hideapikeys_MainActivity_myApiKey(JNIEnv *env, jclass clazz) {
    return (*env).NewStringUTF("changedmy api key");
}