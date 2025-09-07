#ifndef GNC_CONTROL_H
#define GNC_CONTROL_H
int control_init(void);
int control_compute(float dt, float *cmd_torque);
#endif
