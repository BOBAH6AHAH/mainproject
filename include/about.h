#ifndef ABOUT_H__
#define ABOUT_H__

#define MP_MAKE_ABOUT_STRING(about, msg) about msg MP_VERSION

const char* mp_about(void);

#endif /* ABOUT_H__ */

