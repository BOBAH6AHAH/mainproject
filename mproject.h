#ifndef MPROJECT_H__
#define MPROJECT_H__

#if defined(MP_DEBUG)
#	warning "Debug mode enabled!"
#	define MP_CFG_DATA_INIT() {1, 2, {0x01, 0x01, 0x01}, {0x02, 0x02, 0x02}};
#else
#	define MP_CFG_DATAINIT()
#endif /* MP_DEBUG */


#define MP_VERSION 		"0.0.1"
#define MP_MSG_ABOUT 	"::release-implementation::"

#include <stdio.h>
#include "mptypes.h"
#include "about.h"
#include "conf.h"

#endif /* MPROJECT_H__ */

