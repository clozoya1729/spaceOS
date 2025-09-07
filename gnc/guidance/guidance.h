#ifndef GNC_GUIDANCE_H
#define GNC_GUIDANCE_H
int guidance_init(void);
int guidance_point_to_target(const float *r_target_eci);
#endif
