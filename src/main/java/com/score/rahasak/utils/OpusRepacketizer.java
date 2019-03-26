package com.score.rahasak.utils;

/**
 * Java port of the Opus Repacketizer
 * https://www.opus-codec.org/docs/html_api-1.0.3/group__opus__repacketizer.html
 */
public class OpusRepacketizer {
    static {
        System.loadLibrary("senz");
    }

    /* int 	opus_repacketizer_get_size (void) */
    public static native int nativeGetSize();

    /* long opus_repacketizer_create ()*/
    public static native long nativeCreate();

    /* long  opus_repacketizer_init (OpusRepacketizer *rp) */
    public static native long nativeInit(long rpPointer);

    /*   opus_repacketizer_destroy (OpusRepacketizer *rp) */
    public static native void nativeDestroy(long rpPointer);

    /* int 	opus_repacketizer_cat (OpusRepacketizer *rp, const unsigned char *data, opus_int32 len) */
    public static native int nativeCat(long rpPointer, byte[] data, long len);

    /* opus_int32 	opus_repacketizer_out_range (OpusRepacketizer *rp, int begin, int end, unsigned char *data, opus_int32 maxlen) */
    public static native long nativeOutRange(long rpPointer, int begin, int end, byte[] data, long maxLen);

    /* int 	opus_repacketizer_get_nb_frames (OpusRepacketizer *rp) */
    public static native int nativeGetNbFrames(long rpPointer);

    /* opus_int32 	opus_repacketizer_out (OpusRepacketizer *rp, unsigned char *data, opus_int32 maxlen) */
    public static native int nativeOut(long rpPointer, byte[] data, long maxLen);

}
