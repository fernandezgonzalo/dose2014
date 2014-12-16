/*
 * Code for class DISPOSABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di261.h"
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F505_3475
static int inline_F505_3475 (void)
{
	return eif_is_in_final_collect;
	;
}
#define INLINE_F505_3475
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DISPOSABLE}.is_in_final_collect */
EIF_BOOLEAN F505_3475 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F505_3475 ());
	return Result;
}

void EIF_Minit261 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
