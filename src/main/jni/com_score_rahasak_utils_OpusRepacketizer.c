#include <com_score_rahasak_utils_OpusRepacketizer.h>
#include <opus.h>


JNIEXPORT jint JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeGetSize(JNIEnv *env, jobject javaThis) {
    return (jint) opus_repacketizer_get_size();
}

JNIEXPORT jlong JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeCreate(JNIEnv *env, jobject javaThis) {
    return (jlong) opus_repacketizer_create();
}

JNIEXPORT jlong JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeInit(JNIEnv *env, jobject javaThis, jlong rpPointer) {
    return (jlong) opus_repacketizer_init((OpusRepacketizer *) rpPointer);
}

JNIEXPORT void JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeDestroy(JNIEnv *env, jobject javaThis, jlong rpPointer) {
    opus_repacketizer_destroy((OpusRepacketizer *) rpPointer);
}

JNIEXPORT jint JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeCat(JNIEnv *env, jobject javaThis, jlong rpPointer, jbyteArray data, jlong len) {
    jbyte *cData = (*env)->GetByteArrayElements(env, data, 0);

    jint result = (jint) opus_repacketizer_cat((OpusRepacketizer *) rpPointer, (const unsigned char *) cData, (opus_int32) len);
    (*env)->ReleaseByteArrayElements(env, data, cData, 0);

    return result;
}

JNIEXPORT jlong JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeOutRange(JNIEnv *env, jobject javaThis, jlong rpPointer, jint begin, jint end, jbyteArray data, jlong maxLen) {
    jbyte *cData = (*env)->GetByteArrayElements(env, data, 0);

    opus_int32 result = (jint) opus_repacketizer_out_range((OpusRepacketizer *) rpPointer, (int) begin, (int) end, (unsigned char *) cData, (opus_int32) maxLen);

    (*env)->ReleaseByteArrayElements(env, data, cData, 0);
    return (jlong) result;
}

JNIEXPORT jint JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeGetNbFrames(JNIEnv *env, jobject javaThis, jlong rpPointer) {
    return (jint) opus_repacketizer_get_nb_frames((OpusRepacketizer *) rpPointer);
}

JNIEXPORT jint JNICALL Java_com_score_rahasak_utils_OpusRepacketizer_nativeOut(JNIEnv *env, jobject javaThis, jlong rpPointer, jbyteArray data, jlong maxLen) {
    jbyte *cData = (*env)->GetByteArrayElements(env, data, 0);
    opus_int32 result = (opus_int32) opus_repacketizer_out((OpusRepacketizer *) rpPointer, (unsigned char *) cData, (opus_int32) maxLen);

    (*env)->ReleaseByteArrayElements(env, data, cData, 0);
    return (jint) result;
}

