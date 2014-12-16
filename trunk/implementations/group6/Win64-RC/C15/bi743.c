/*
 * Code for class BILINEAR [POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi743.h"

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
EIF_BOOLEAN F262_2507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F644_4920(Current)) {
		Result = F644_4919(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F262_2510 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F644_4920(Current)) {
		tb1 = (EIF_BOOLEAN) !F288_2518(Current);
	}
	if (tb1) {
		F673_5040(Current);
	}
	F251_2493(Current, arg1);
	RTLE;
}

void EIF_Minit743 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
