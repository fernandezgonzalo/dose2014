/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F140_2023(EIF_REFERENCE);
extern EIF_TYPED_VALUE F140_2024(EIF_REFERENCE);
extern EIF_TYPED_VALUE F140_2025(EIF_REFERENCE);
extern EIF_TYPED_VALUE F140_2026(EIF_REFERENCE);
extern EIF_TYPED_VALUE F140_2027(EIF_REFERENCE);
extern EIF_TYPED_VALUE F140_2028(EIF_REFERENCE);
extern void EIF_Minit140(void);

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
EIF_TYPED_VALUE F140_2023 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F140_2024 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F140_2025)


EIF_TYPED_VALUE F140_2025 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F140_2025,1966,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F140_2026)


EIF_TYPED_VALUE F140_2026 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F140_2026,1967,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F140_2027)


EIF_TYPED_VALUE F140_2027 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F140_2027,1968,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F140_2028 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit140 (void)
{
	GTCX
	RTOTS (2025,F140_2025)
	RTOTS (2026,F140_2026)
	RTOTS (2027,F140_2027)
}


#ifdef __cplusplus
}
#endif
