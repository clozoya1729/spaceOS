#ifndef DRIVER_SD_H
#define DRIVER_SD_H
#include <stddef.h>
int sd_init(void);
int sd_read(unsigned lba, void *buf, size_t len);
int sd_write(unsigned lba, const void *buf, size_t len);
#endif
