/*
 * Code for class SQLITE_INSERT_STATEMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq400.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_INSERT_STATEMENT}.on_before_execute */
void F928_8011 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F925_7995(Current);
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_64 *)(Current+ _I64OFF_5_2_0_3_0_2_0_) = (EIF_INTEGER_64) ti8_1;
	RTLE;
}

/* {SQLITE_INSERT_STATEMENT}.on_after_executed */
void F928_8012 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F925_7996(Current);
	tb1 = '\0';
	if (F925_7983(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb2 = F923_7916(RTCV(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_2_0_3_0_1_);
		ti8_1 = F411_2633(Current, tr1, tp1);
		*(EIF_INTEGER_64 *)(Current+ _I64OFF_5_2_0_3_0_2_0_) = (EIF_INTEGER_64) ti8_1;
	}
	RTLE;
}

void EIF_Minit400 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
