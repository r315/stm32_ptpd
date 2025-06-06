#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

/* We try to keep the lwIP options common between all projects.  However,
 * if a certain project requires specific lwIP options we can specify
 * them here. */
#define LWIP_PTPD             1

/* Include the lwIP options file common to all projects. */
#include "lwipopts_shared.h"
#include "systime.h"

extern void network_set_system_time (uint32_t sec);

#define SNTP_SET_SYSTEM_TIME(time) network_set_system_time(time)

#endif /* __LWIPOPTS_H__ */
