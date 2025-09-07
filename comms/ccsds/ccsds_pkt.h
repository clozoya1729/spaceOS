#ifndef COMMS_CCSDS_PKT_H
#define COMMS_CCSDS_PKT_H
#include <stddef.h>
int ccsds_build_tm(uint16_t apid, const void *payload, size_t len, void *pkt, size_t maxlen);
int ccsds_parse_tc(const void *pkt, size_t len, uint16_t *apid, const void **payload, size_t *paylen);
#endif
