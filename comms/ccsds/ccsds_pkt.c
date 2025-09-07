#include <stdint.h>
#include "ccsds_pkt.h"
int ccsds_build_tm(uint16_t apid, const void *payload, size_t len, void *pkt, size_t maxlen){ (void)apid; (void)payload; (void)len; (void)pkt; (void)maxlen; return 0; }
int ccsds_parse_tc(const void *pkt, size_t len, uint16_t *apid, const void **payload, size_t *paylen){ (void)pkt; (void)len; if(apid) *apid = 0; if(payload) *payload = 0; if(paylen) *paylen = 0; return 0; }
