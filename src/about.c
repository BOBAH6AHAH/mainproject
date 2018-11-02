#include "mproject.h"

const char*
mp_about(void)
{
#if defined(MP_DEBUG)
	#include <stdio.h>
	static mp_conf_t _cfg = MP_CFG_DATA_INIT();
	sprintf(_cfg.id_repr, "%hhd", _cfg.id);
	sprintf(_cfg.vl_repr, "%hhd", _cfg.value);
	printf("DEBUG!!!\nID: %d\tVALUE: %d\nStr ID: %s\tStr VALUE: %s\n", _cfg.id, _cfg.value, _cfg.id_repr, _cfg.vl_repr);
	return "DEBUG MODE ENABLED";
#endif /* MP_DEBUG */	
    return MP_MAKE_ABOUT_STRING(MP_MSG_ABOUT, " version: ");
}
