#include <jni.h>

#ifndef _Included_com_score_rahasak_utils_OpusRepacketizer
#define _Included_com_score_rahasak_utils_OpusRepacketizer

#ifdef __cplusplus
extern "C" {
#endif

/* int 	opus_repacketizer_get_size (void) */
JNIEXPORT jint JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeGetSize(JNIEnv *, jobject javaThis);

/* long opus_repacketizer_create ()*/
JNIEXPORT jlong JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeCreate(JNIEnv *, jobject javaThis);

/* long  opus_repacketizer_init (OpusRepacketizer *rp) */
JNIEXPORT jlong JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeInit(JNIEnv *, jobject javaThis, jlong rpPointer);

/*   opus_repacketizer_destroy (OpusRepacketizer *rp) */
JNIEXPORT void JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeDestroy(JNIEnv *, jobject javaThis, jlong rpPointer);

/* int 	opus_repacketizer_cat (OpusRepacketizer *rp, const unsigned char *data, opus_int32 len) */
JNIEXPORT jint JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeCat(JNIEnv *, jobject javaThis, jlong rpPointer, jbyteArray data, jlong len);

/* opus_int32 	opus_repacketizer_out_range (OpusRepacketizer *rp, int begin, int end, unsigned char *data, opus_int32 maxlen) */
JNIEXPORT jlong JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeOutRange(JNIEnv *, jobject javaThis, jlong rpPointer, jint begin, jint end, jbyteArray data, jlong maxLen);

/* int 	opus_repacketizer_get_nb_frames (OpusRepacketizer *rp) */
JNIEXPORT jint JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeGetNbFrames(JNIEnv *, jobject javaThis, jlong rpPointer);

/* opus_int32 	opus_repacketizer_out (OpusRepacketizer *rp, unsigned char *data, opus_int32 maxlen) */
JNIEXPORT jint JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeOut(JNIEnv *, jobject javaThis, jlong rpPointer, jbyteArray data, jlong maxLen);

#ifdef __cplusplus
}
#endif
#endif
