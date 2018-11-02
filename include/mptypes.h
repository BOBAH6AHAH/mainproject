#ifndef MP_TYPES_H__
#define MP_TYPES_H__

#define false 0
#define true  !false

typedef unsigned char 	mp_uchar_t;
typedef unsigned short  mp_ushort_t;
typedef unsigned int  	mp_uint_t;
typedef unsigned int    mp_bool_t;


typedef struct {
	mp_uchar_t  id;
	mp_uchar_t  value;
	mp_uchar_t  id_repr[3];
	mp_uchar_t  vl_repr[3];
} __attribute__((packed)) mp_conf_t;


#endif /* MP_TYPES_H__ */