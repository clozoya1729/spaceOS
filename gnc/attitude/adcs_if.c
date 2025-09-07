#include "adcs_if.h"
int adcs_init(void){ return 0; }
int adcs_set_torque(float tx, float ty, float tz){ (void)tx; (void)ty; (void)tz; return 0; }
int adcs_read_sensors(float *gyro, float *mag, float *sun){ (void)gyro; (void)mag; (void)sun; return 0; }
