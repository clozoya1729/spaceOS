#include "adc.h"
int adc_init(void){ return 0; }
int adc_read(int channel, int *value){ (void)channel; if(value) *value = 0; return 0; }
