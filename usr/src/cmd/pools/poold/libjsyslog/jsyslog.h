/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sun_solaris_service_logging_SyslogHandler */

#ifndef _Included_com_sun_solaris_service_logging_SyslogHandler
#define _Included_com_sun_solaris_service_logging_SyslogHandler
#ifdef __cplusplus
extern "C" {
#endif
#undef com_sun_solaris_service_logging_SyslogHandler_DEF_LOGOPT
#define com_sun_solaris_service_logging_SyslogHandler_DEF_LOGOPT 0L
/*
 * Class:     com_sun_solaris_service_logging_SyslogHandler
 * Method:    syslog
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_logging_SyslogHandler_syslog
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_sun_solaris_service_logging_SyslogHandler
 * Method:    openlog
 * Signature: (Ljava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_logging_SyslogHandler_openlog
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_sun_solaris_service_logging_SyslogHandler
 * Method:    closelog
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_logging_SyslogHandler_closelog
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
