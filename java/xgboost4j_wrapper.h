/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_dmlc_xgboost4j_wrapper_XgboostJNI */

#ifndef _Included_org_dmlc_xgboost4j_wrapper_XgboostJNI
#define _Included_org_dmlc_xgboost4j_wrapper_XgboostJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBGetLastError
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBGetLastError
  (JNIEnv *, jclass);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixCreateFromFile
 * Signature: (Ljava/lang/String;I[J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixCreateFromFile
  (JNIEnv *, jclass, jstring, jint, jlongArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixCreateFromCSR
 * Signature: ([J[I[F[J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixCreateFromCSR
  (JNIEnv *, jclass, jlongArray, jintArray, jfloatArray, jlongArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixCreateFromCSC
 * Signature: ([J[I[F[J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixCreateFromCSC
  (JNIEnv *, jclass, jlongArray, jintArray, jfloatArray, jlongArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixCreateFromMat
 * Signature: ([FIIF[J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixCreateFromMat
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloat, jlongArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixSliceDMatrix
 * Signature: (J[I[J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixSliceDMatrix
  (JNIEnv *, jclass, jlong, jintArray, jlongArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixFree
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixSaveBinary
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixSaveBinary
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixSetFloatInfo
 * Signature: (JLjava/lang/String;[F)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixSetFloatInfo
  (JNIEnv *, jclass, jlong, jstring, jfloatArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixSetUIntInfo
 * Signature: (JLjava/lang/String;[I)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixSetUIntInfo
  (JNIEnv *, jclass, jlong, jstring, jintArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixSetGroup
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixSetGroup
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixGetFloatInfo
 * Signature: (JLjava/lang/String;[[F)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixGetFloatInfo
  (JNIEnv *, jclass, jlong, jstring, jobjectArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixGetUIntInfo
 * Signature: (JLjava/lang/String;[[I)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixGetUIntInfo
  (JNIEnv *, jclass, jlong, jstring, jobjectArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGDMatrixNumRow
 * Signature: (J[J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGDMatrixNumRow
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterCreate
 * Signature: ([J[J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterCreate
  (JNIEnv *, jclass, jlongArray, jlongArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterFree
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterSetParam
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterSetParam
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterUpdateOneIter
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterUpdateOneIter
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterBoostOneIter
 * Signature: (JJ[F[F)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterBoostOneIter
  (JNIEnv *, jclass, jlong, jlong, jfloatArray, jfloatArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterEvalOneIter
 * Signature: (JI[J[Ljava/lang/String;[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterEvalOneIter
  (JNIEnv *, jclass, jlong, jint, jlongArray, jobjectArray, jobjectArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterPredict
 * Signature: (JJIJ[[F)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterPredict
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jobjectArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterLoadModel
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterLoadModel
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterSaveModel
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterSaveModel
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterLoadModelFromBuffer
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterLoadModelFromBuffer
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterGetModelRaw
 * Signature: (J[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterGetModelRaw
  (JNIEnv *, jclass, jlong, jobjectArray);

/*
 * Class:     org_dmlc_xgboost4j_wrapper_XgboostJNI
 * Method:    XGBoosterDumpModel
 * Signature: (JLjava/lang/String;I[[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_dmlc_xgboost4j_wrapper_XgboostJNI_XGBoosterDumpModel
  (JNIEnv *, jclass, jlong, jstring, jint, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
