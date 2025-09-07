#ifndef SUBSYS_BATTERY_H
#define SUBSYS_BATTERY_H
int battery_init(void);
int battery_read(float *v, float *i, float *t);
#endif
