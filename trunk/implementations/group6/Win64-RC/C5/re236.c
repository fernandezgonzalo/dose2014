/*
 * Code for class REFLECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re236.h"
#include "eif_gen_conf.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_455
static EIF_INTEGER_32 inline_F31_455 (EIF_INTEGER_32 arg1)
{
	return eif_non_attached_type((EIF_TYPE_INDEX) arg1)
	;
}
#define INLINE_F31_455
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REFLECTOR}.field_conforms_to */
EIF_BOOLEAN F468_3090 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	ti4_1 = inline_F31_455(arg2);
	Result = (EIF_BOOLEAN) EIF_TEST(eif_gen_conf((int16) arg1, (int16) ti4_1));
	return Result;
}

void EIF_Minit236 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
