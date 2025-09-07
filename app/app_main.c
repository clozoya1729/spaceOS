#include "app_tasks.h"
#include "app_modes.h"
int main(void){
    modes_init();
    (void)task_fast_10ms; (void)task_med_100ms; (void)task_slow_1s;
    return 0;
}
