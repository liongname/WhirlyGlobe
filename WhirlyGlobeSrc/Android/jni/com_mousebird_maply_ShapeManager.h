/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_ShapeManager */

#ifndef _Included_com_mousebird_maply_ShapeManager
#define _Included_com_mousebird_maply_ShapeManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_ShapeManager
 * Method:    addShapes
 * Signature: (Ljava/util/List;Lcom/mousebird/maply/Shape;Lcom/mousebird/maply/ChangeSet;)J
 */
JNIEXPORT jlong JNICALL Java_com_mousebird_maply_ShapeManager_addShapes
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     com_mousebird_maply_ShapeManager
 * Method:    removeShapes
 * Signature: ([JLcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ShapeManager_removeShapes
  (JNIEnv *, jobject, jlongArray, jobject);

/*
 * Class:     com_mousebird_maply_ShapeManager
 * Method:    enableShapes
 * Signature: ([JZLcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ShapeManager_enableShapes
  (JNIEnv *, jobject, jlongArray, jboolean, jobject);

/*
 * Class:     com_mousebird_maply_ShapeManager
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ShapeManager_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_ShapeManager
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ShapeManager_initialise
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_ShapeManager
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ShapeManager_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
