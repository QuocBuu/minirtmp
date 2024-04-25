#ifndef __FC_RTMP_H__
#define __FC_RTMP_H__

#include "librtmp/rtmp.h"

enum {
	FC_RTMP_OK,
	FC_RTMP_ERROR
};

extern int fc_rtmp_initialize();
extern int fc_rtmp_connect(const char *serial, const char *host, int port, const char *node, const char *token);
extern int fc_rtmp_stop();
extern int fc_rtmp_videoSend(unsigned char *data, int size, int frameType);
extern int fc_rtmp_audioSend(unsigned char *data, int size);

#endif	  //__FC_RTMP_H__