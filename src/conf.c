#include "mproject.h"


static inline void
_cfg_print(mp_conf_t *cfg)
{
#if defined(MP_DEBUG)
	sprint(cfg->vl_repr, "%hhd", cfg->value);
	sprint(cfg->id_repr, "%hhd", cfg->id);
	printf("DEBUG: ID: %s\tVALUE: %s\n", cfg->id_reprm cfg->vl_repr);
#else
	printf("Non-debug build!\n");
#endif /* MP_DEBUG */
}

mp_bool_t
mp_cfg_init(mp_conf_t *cfg)
{
	_cfg_print(cfg);
	if(cfg->id++ < 100) {
		cfg->value = cfg->id * 16;
		return true;
	} 
		cfg->value = cfg->id * 4;
		return false;
}


void
mp_cfg_dec(mp_conf_t *cfg)
{
	_cfg_print(cfg);
	cfg->value -= cfg->id;
}