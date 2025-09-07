#ifndef DRIVER_ADC_H
#define DRIVER_ADC_H
int adc_init(void);
int adc_read(int channel, int *value);
#endif
