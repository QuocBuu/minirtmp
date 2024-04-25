#include "fc_rtmp.h"
#include "minirtmp.h"

int fc_rtmp_initialize();
int fc_rtmp_connect(const char *serial, const char *host, int port, const char *node, const char *token);
int fc_rtmp_stop();
int fc_rtmp_videoSend(unsigned char *data, int size, int frameType);
int fc_rtmp_audioSend(unsigned char *data, int size);

int fc_rtmp_initialize() {
	
}

int fc_rtmp_connect(const char *serial, const char *host, int port, const char *node, const char *token) {

}

int fc_rtmp_stop() {

}

int fc_rtmp_videoSend(unsigned char *data, int size, int frameType) {

}

int fc_rtmp_audioSend(unsigned char *data, int size) {

}

