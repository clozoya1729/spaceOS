#ifndef SUBSYS_TANKS_H
#define SUBSYS_TANKS_H
int tanks_init(void);
int tanks_read_pressure_temperature(float *p_bar, float *t_c);
#endif
