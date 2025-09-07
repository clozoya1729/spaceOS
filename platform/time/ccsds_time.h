#ifndef PLATFORM_TIME_CCSDS_H
#define PLATFORM_TIME_CCSDS_H
int ccsds_cds_encode(unsigned long long ms, void *buf, int maxlen);
int ccsds_cds_decode(const void *buf, int len, unsigned long long *ms);
#endif
