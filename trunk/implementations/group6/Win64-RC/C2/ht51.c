/*
 * Code for class HTTP_ACCEPT_MEDIA_TYPE_VARIANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht51.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_ACCEPT_MEDIA_TYPE_VARIANTS}.set_vary_header_value */
void F63_888 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(1027,F79_1027,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit51 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
