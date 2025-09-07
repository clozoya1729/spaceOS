#ifndef COMMS_SPW_STACK_H
#define COMMS_SPW_STACK_H
int spw_stack_init(void);
int spw_stack_send(const void *buf, int len);
int spw_stack_recv(void *buf, int maxlen);
#endif
