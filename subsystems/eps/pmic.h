#ifndef SUBSYS_PMIC_H
#define SUBSYS_PMIC_H
int pmic_init(void);
int pmic_enable_rail(int rail, int enable);
#endif
