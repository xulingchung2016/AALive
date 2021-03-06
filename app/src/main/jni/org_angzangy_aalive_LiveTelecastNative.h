/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_angzangy_aalive_OpenglNative */

#ifndef _Included_org_angzangy_aalive_LiveTelecastNative
#define _Included_org_angzangy_aalive_LiveTelecastNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_angzangy_aalive_LiveTelecastNative
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_init
  (JNIEnv *, jobject);

/*
 * Class:     org_angzangy_aalive_LiveTelecastNative
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_release
  (JNIEnv *, jobject);

/*
 * Class:     org_angzangy_aalive_LiveTelecastNative
 * Method:    release
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_setRtmpUrl
  (JNIEnv *, jobject, jstring);
/*
 * Class:     org_angzangy_aalive_LiveTelecastNative
 * Method:    onSurfaceCreated
 * Signature: ()V
 */
//JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_onSurfaceCreated
//  (JNIEnv *, jobject);

/*
 * Class:     org_angzangy_aalive_LiveTelecastNative
 * Method:    onPreviewSizeChanged
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_onPreviewSizeChanged
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_angzangy_aalive_LiveTelecastNative
 * Method:    onDrawFrame
 * Signature: ()V
 */
//JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_onDrawFrame
//  (JNIEnv *, jobject);

/*
 * Class:     org_angzangy_aalive_LiveTelecastNative
 * Method:    pushNV21Buffer
 * Signature: ([BII)V
 */
JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_pushNV21Buffer___3BII
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     org_angzangy_aalive_LiveTelecastNative
 * Method:    pushNV21Buffer
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_pushNV21Buffer__Ljava_nio_ByteBuffer_2Ljava_nio_ByteBuffer_2II
  (JNIEnv *, jobject, jobject, jobject, jint, jint);

  /*
   * Class:     org_angzangy_aalive_LiveTelecastNative
   * Method:    readFbo
   * Signature: (II)V
   */
  JNIEXPORT void JNICALL Java_org_angzangy_aalive_LiveTelecastNative_readFbo
    (JNIEnv *, jobject, jint, jint);
#ifdef __cplusplus
}
#endif
#endif
