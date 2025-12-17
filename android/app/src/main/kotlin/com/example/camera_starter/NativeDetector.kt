package com.example.camera_starter

class NativeDetector {
    external fun stringFromJNI(): String

    companion object {
        init {
            System.loadLibrary("native-lib")
        }
    }
}
    
