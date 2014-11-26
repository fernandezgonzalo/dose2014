/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F137_2051(EIF_REFERENCE);
extern EIF_TYPED_VALUE F137_2052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F137_2053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F137_2054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F137_2055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F137_2056(EIF_REFERENCE);
extern void EIF_Minit137(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_CONSTANTS}.default_http_port */
EIF_TYPED_VALUE F137_2051 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F137_2052 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F137_2053)


EIF_TYPED_VALUE F137_2053 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F137_2053,1995,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F137_2054)


EIF_TYPED_VALUE F137_2054 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F137_2054,1996,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F137_2055)


EIF_TYPED_VALUE F137_2055 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F137_2055,1997,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F137_2056 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit137 (void)
{
	GTCX
	RTOTS (2053,F137_2053)
	RTOTS (2054,F137_2054)
	RTOTS (2055,F137_2055)
}


#ifdef __cplusplus
}
#endif
