/*
 * Code for class BILINEAR [NATURAL_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi911.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F266_2507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F648_4920(Current)) {
		Result = F648_4919(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F266_2510 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F648_4920(Current)) {
		tb1 = (EIF_BOOLEAN) !F292_2518(Current);
	}
	if (tb1) {
		F677_5040(Current);
	}
	F254_2493(Current, arg1);
	RTLE;
}

void EIF_Minit911 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
