/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_videolan_Libbluray */

#ifndef _WIN32
#undef JNIEXPORT
#define JNIEXPORT static
#endif

#ifndef _Included_org_videolan_Libbluray
#define _Included_org_videolan_Libbluray
#ifdef __cplusplus
extern "C" {
#endif
#undef org_videolan_Libbluray_BDJ_EVENT_CHAPTER
#define org_videolan_Libbluray_BDJ_EVENT_CHAPTER 1L
#undef org_videolan_Libbluray_BDJ_EVENT_PLAYITEM
#define org_videolan_Libbluray_BDJ_EVENT_PLAYITEM 2L
#undef org_videolan_Libbluray_BDJ_EVENT_ANGLE
#define org_videolan_Libbluray_BDJ_EVENT_ANGLE 3L
#undef org_videolan_Libbluray_BDJ_EVENT_SUBTITLE
#define org_videolan_Libbluray_BDJ_EVENT_SUBTITLE 4L
#undef org_videolan_Libbluray_BDJ_EVENT_PIP
#define org_videolan_Libbluray_BDJ_EVENT_PIP 5L
#undef org_videolan_Libbluray_BDJ_EVENT_END_OF_PLAYLIST
#define org_videolan_Libbluray_BDJ_EVENT_END_OF_PLAYLIST 6L
#undef org_videolan_Libbluray_BDJ_EVENT_PTS
#define org_videolan_Libbluray_BDJ_EVENT_PTS 7L
#undef org_videolan_Libbluray_BDJ_EVENT_VK_KEY
#define org_videolan_Libbluray_BDJ_EVENT_VK_KEY 8L
#undef org_videolan_Libbluray_PSR_IG_STREAM_ID
#define org_videolan_Libbluray_PSR_IG_STREAM_ID 0L
#undef org_videolan_Libbluray_PSR_PRIMARY_AUDIO_ID
#define org_videolan_Libbluray_PSR_PRIMARY_AUDIO_ID 1L
#undef org_videolan_Libbluray_PSR_PG_STREAM
#define org_videolan_Libbluray_PSR_PG_STREAM 2L
#undef org_videolan_Libbluray_PSR_ANGLE_NUMBER
#define org_videolan_Libbluray_PSR_ANGLE_NUMBER 3L
#undef org_videolan_Libbluray_PSR_TITLE_NUMBER
#define org_videolan_Libbluray_PSR_TITLE_NUMBER 4L
#undef org_videolan_Libbluray_PSR_CHAPTER
#define org_videolan_Libbluray_PSR_CHAPTER 5L
#undef org_videolan_Libbluray_PSR_PLAYLIST
#define org_videolan_Libbluray_PSR_PLAYLIST 6L
#undef org_videolan_Libbluray_PSR_PLAYITEM
#define org_videolan_Libbluray_PSR_PLAYITEM 7L
#undef org_videolan_Libbluray_PSR_TIME
#define org_videolan_Libbluray_PSR_TIME 8L
#undef org_videolan_Libbluray_PSR_NAV_TIMER
#define org_videolan_Libbluray_PSR_NAV_TIMER 9L
#undef org_videolan_Libbluray_PSR_SELECTED_BUTTON_ID
#define org_videolan_Libbluray_PSR_SELECTED_BUTTON_ID 10L
#undef org_videolan_Libbluray_PSR_MENU_PAGE_ID
#define org_videolan_Libbluray_PSR_MENU_PAGE_ID 11L
#undef org_videolan_Libbluray_PSR_STYLE
#define org_videolan_Libbluray_PSR_STYLE 12L
#undef org_videolan_Libbluray_PSR_PARENTAL
#define org_videolan_Libbluray_PSR_PARENTAL 13L
#undef org_videolan_Libbluray_PSR_SECONDARY_AUDIO_VIDEO
#define org_videolan_Libbluray_PSR_SECONDARY_AUDIO_VIDEO 14L
#undef org_videolan_Libbluray_PSR_AUDIO_CAP
#define org_videolan_Libbluray_PSR_AUDIO_CAP 15L
#undef org_videolan_Libbluray_PSR_AUDIO_LANG
#define org_videolan_Libbluray_PSR_AUDIO_LANG 16L
#undef org_videolan_Libbluray_PSR_PG_AND_SUB_LANG
#define org_videolan_Libbluray_PSR_PG_AND_SUB_LANG 17L
#undef org_videolan_Libbluray_PSR_MENU_LANG
#define org_videolan_Libbluray_PSR_MENU_LANG 18L
#undef org_videolan_Libbluray_PSR_COUNTRY
#define org_videolan_Libbluray_PSR_COUNTRY 19L
#undef org_videolan_Libbluray_PSR_REGION
#define org_videolan_Libbluray_PSR_REGION 20L
#undef org_videolan_Libbluray_PSR_VIDEO_CAP
#define org_videolan_Libbluray_PSR_VIDEO_CAP 29L
#undef org_videolan_Libbluray_PSR_TEXT_CAP
#define org_videolan_Libbluray_PSR_TEXT_CAP 30L
#undef org_videolan_Libbluray_PSR_PROFILE_VERSION
#define org_videolan_Libbluray_PSR_PROFILE_VERSION 31L
#undef org_videolan_Libbluray_PSR_BACKUP_PSR4
#define org_videolan_Libbluray_PSR_BACKUP_PSR4 36L
#undef org_videolan_Libbluray_PSR_BACKUP_PSR5
#define org_videolan_Libbluray_PSR_BACKUP_PSR5 37L
#undef org_videolan_Libbluray_PSR_BACKUP_PSR6
#define org_videolan_Libbluray_PSR_BACKUP_PSR6 38L
#undef org_videolan_Libbluray_PSR_BACKUP_PSR7
#define org_videolan_Libbluray_PSR_BACKUP_PSR7 39L
#undef org_videolan_Libbluray_PSR_BACKUP_PSR8
#define org_videolan_Libbluray_PSR_BACKUP_PSR8 40L
#undef org_videolan_Libbluray_PSR_BACKUP_PSR10
#define org_videolan_Libbluray_PSR_BACKUP_PSR10 42L
#undef org_videolan_Libbluray_PSR_BACKUP_PSR11
#define org_videolan_Libbluray_PSR_BACKUP_PSR11 43L
#undef org_videolan_Libbluray_PSR_BACKUP_PSR12
#define org_videolan_Libbluray_PSR_BACKUP_PSR12 44L
/*
 * Class:     org_videolan_Libbluray
 * Method:    getAacsData
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_videolan_Libbluray_getAacsDataN
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    getUOMask
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_videolan_Libbluray_getUOMaskN
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_videolan_Libbluray
 * Method:    getUOMask
 * Signature: (JZZ)V
 */
JNIEXPORT void JNICALL Java_org_videolan_Libbluray_setUOMaskN
(JNIEnv *, jclass, jlong, jboolean, jboolean);

/*
 * Class:     org_videolan_Libbluray
 * Method:    getTitleInfosN
 * Signature: (J)[Lorg/videolan/TitleInfo;
 */
JNIEXPORT jobject JNICALL Java_org_videolan_Libbluray_getTitleInfosN
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_videolan_Libbluray
 * Method:    getPlaylistInfoN
 * Signature: (JI)Lorg/videolan/PlaylistInfo;
 */
JNIEXPORT jobject JNICALL Java_org_videolan_Libbluray_getPlaylistInfoN
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    seekN
 * Signature: (JIIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_videolan_Libbluray_seekN
  (JNIEnv *, jclass, jlong, jint, jint, jlong);

/*
 * Class:     org_videolan_Libbluray
 * Method:    selectPlaylistN
 * Signature: (JIIIJ)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_selectPlaylistN
  (JNIEnv *, jclass, jlong, jint, jint, jint, jlong);

/*
 * Class:     org_videolan_Libbluray
 * Method:    selectTitleN
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_selectTitleN
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    setVirtualPackageN
 * Signature: (JLjava/lang/String;Z)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_setVirtualPackageN
  (JNIEnv * env, jclass cls, jlong np, jstring vpPath, jboolean psr_init_backup);

/*
 * Class:     org_videolan_Libbluray
 * Method:    selectAngleN
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_selectAngleN
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    tellTimeN
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_videolan_Libbluray_tellTimeN
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_videolan_Libbluray
 * Method:    selectRateN
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_selectRateN
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    writeGPRN
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_writeGPRN
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    writePSRN
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_writePSRN
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    readGPRN
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_readGPRN
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    readPSRN
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_Libbluray_readPSRN
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_videolan_Libbluray
 * Method:    getBdjoN
 * Signature: (JLjava/lang/String;)Lorg/videolan/bdjo/Bdjo;
 */
JNIEXPORT jobject JNICALL Java_org_videolan_Libbluray_getBdjoN
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_videolan_Libbluray
 * Method:    updateGraphicN
 * Signature: (JII[IIIII)V
 */
JNIEXPORT void JNICALL Java_org_videolan_Libbluray_updateGraphicN
(JNIEnv *, jclass, jlong, jint, jint, jintArray, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
