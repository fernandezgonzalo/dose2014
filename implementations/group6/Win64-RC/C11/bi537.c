/*
 * Code for class BILINEAR [NATURAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi537.h"

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
EIF_BOOLEAN F257_2507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F639_4920(Current)) {
		Result = F639_4919(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F257_2510 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F639_4920(Current)) {
		tb1 = (EIF_BOOLEAN) !F283_2518(Current);
	}
	if (tb1) {
		F668_5040(Current);
	}
	F245_2493(Current, arg1);
	RTLE;
}

void EIF_Minit537 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
