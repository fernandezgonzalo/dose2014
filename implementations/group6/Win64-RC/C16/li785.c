/*
 * Code for class LIST [NATURAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li785.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIST}.is_equal */
EIF_BOOLEAN F645_4918 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = F289_2518(RTCV(arg1));
		if ((EIF_BOOLEAN)(F289_2518(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(arg1) + O2226[Dtype(arg1)-218]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2226[dtype-218]) == tb2);
		}
		if (tb1) {
			ti4_1 = F674_5029(RTCV(arg1));
			Result = (EIF_BOOLEAN)(F674_5029(Current) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !F289_2518(Current);
		}
		if (tb1) {
			tb1 = '\0';
			tr1 = F674_5018(Current);
			loc1 = tr1;
			if (EIF_TEST(loc1)) {
				tr1 = F674_5018(RTCV(arg1));
				loc2 = tr1;
				tb1 = EIF_TEST(loc2);
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[dtype-395])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[Dtype(arg1)-395])(RTCV(arg1));
				for (;;) {
					tb1 = '\01';
					if (!F645_4919(Current)) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					if (*(EIF_BOOLEAN *)(Current + O2226[dtype-218])) {
						tu4_1 = F674_5012(Current);
						tu4_2 = F674_5012(RTCV(arg1));
						Result = (EIF_BOOLEAN) (tu4_1 == tu4_2);
					} else {
						tu4_1 = F674_5012(Current);
						tu4_2 = F674_5012(RTCV(arg1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
					}
					F674_5040(Current);
					F674_5040(RTCV(arg1));
				}
				F674_5043(Current, loc1);
				F674_5043(RTCV(arg1), loc2);
			} else {
			}
		} else {
			tb2 = '\0';
			tb3 = '\0';
			if (F289_2518(Current)) {
				tb4 = F289_2518(RTCV(arg1));
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = *(EIF_BOOLEAN *)(RTCV(arg1) + O2226[Dtype(arg1)-218]);
				tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2226[dtype-218]) == tb3);
			}
			if (tb2) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {LIST}.after */
EIF_BOOLEAN F645_4919 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = F674_5029(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {LIST}.before */
EIF_BOOLEAN F645_4920 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	return Result;
}

void EIF_Minit785 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
