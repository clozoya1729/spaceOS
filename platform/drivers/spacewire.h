#ifndef DRIVER_SPACEWIRE_H
#define DRIVER_SPACEWIRE_H
int spw_init(void);
int spw_send(const void *buf, int len);
int spw_recv(void *buf, int maxlen);
#endif
