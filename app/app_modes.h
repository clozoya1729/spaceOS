#ifndef APP_MODES_H
#define APP_MODES_H
typedef enum { MODE_BOOT, MODE_SAFE, MODE_DETUMBLE, MODE_NOMINAL, MODE_SCIENCE } app_mode_t;
void modes_init(void);
void modes_set(app_mode_t m);
app_mode_t modes_get(void);
#endif
