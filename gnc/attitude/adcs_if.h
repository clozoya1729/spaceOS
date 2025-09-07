#ifndef GNC_ADCS_IF_H
#define GNC_ADCS_IF_H
int adcs_init(void);
int adcs_set_torque(float tx, float ty, float tz);
int adcs_read_sensors(float *gyro, float *mag, float *sun);
#endif
