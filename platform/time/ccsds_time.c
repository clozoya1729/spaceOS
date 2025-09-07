#include "ccsds_time.h"
int ccsds_cds_encode(unsigned long long ms, void *buf, int maxlen){ (void)ms; (void)buf; (void)maxlen; return 0; }
int ccsds_cds_decode(const void *buf, int len, unsigned long long *ms){ (void)buf; (void)len; if(ms) *ms = 0ull; return 0; }
