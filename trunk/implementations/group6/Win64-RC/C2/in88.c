/*
 * Code for class INET_PROPERTIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in88.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET_PROPERTIES}.is_ipv6_available */
EIF_BOOLEAN F108_1438 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(en_ipv6_available());
	
	return Result;
}

void EIF_Minit88 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
