#ifndef SUBSYS_THRUSTERS_H
#define SUBSYS_THRUSTERS_H
int thrusters_init(void);
int thrusters_fire(unsigned id, float duration_s, float thrust_n);
#endif
