#ifndef DRIVER_RS422_H
#define DRIVER_RS422_H
int rs422_init(void);
int rs422_write(const void *buf, int len);
int rs422_read(void *buf, int maxlen);
#endif
