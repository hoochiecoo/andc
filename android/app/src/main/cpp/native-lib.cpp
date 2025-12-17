#include <jni.h>
#include <string>
#include <opencv2/core.hpp>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_camera_1starter_NativeDetector_stringFromJNI(JNIEnv* env, jobject /* this */) {
    cv::Mat mat(2, 2, CV_8UC1);
    mat.at<uchar>(0,0) = 255;
    return env->NewStringUTF("Hello from C++ / OpenCV!");
}
    
