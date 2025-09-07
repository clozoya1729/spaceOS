#include "spacewire.h"
int spw_init(void){ return 0; }
int spw_send(const void *buf, int len){ (void)buf; (void)len; return 0; }
int spw_recv(void *buf, int maxlen){ (void)buf; (void)maxlen; return 0; }
