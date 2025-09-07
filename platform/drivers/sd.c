#include "sd.h"
int sd_init(void){ return 0; }
int sd_read(unsigned lba, void *buf, size_t len){ (void)lba; (void)buf; (void)len; return 0; }
int sd_write(unsigned lba, const void *buf, size_t len){ (void)lba; (void)buf; (void)len; return 0; }
