#include "mproject.h"

int main(void)
{
	mp_conf_t cfg;

	mp_cfg_init(&cfg);
    printf("==========[%s]==========\n", mp_about());
    mp_cfg_dec(&cfg);
    mp_cfg_init(&cfg);
    mp_cfg_dec(&cfg);

    return 0;
}
