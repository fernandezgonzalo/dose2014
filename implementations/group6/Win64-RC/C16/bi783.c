/*
 * Code for class BILINEAR [NATURAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi783.h"

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
EIF_BOOLEAN F263_2507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F645_4920(Current)) {
		Result = F645_4919(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F263_2510 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F645_4920(Current)) {
		tb1 = (EIF_BOOLEAN) !F289_2518(Current);
	}
	if (tb1) {
		F674_5040(Current);
	}
	F252_2493(Current, arg1);
	RTLE;
}

void EIF_Minit783 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
