/*
 * Code for class LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li499.h"

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
EIF_BOOLEAN F638_4918 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
		tb2 = F282_2518(RTCV(arg1));
		if ((EIF_BOOLEAN)(F282_2518(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(arg1) + O2226[Dtype(arg1)-218]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2226[dtype-218]) == tb2);
		}
		if (tb1) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[Dtype(arg1)-517])(RTCV(arg1));
			Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[dtype-517])(Current) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !F282_2518(Current);
		}
		if (tb1) {
			tb1 = '\0';
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2285[dtype-660])(Current);
			loc1 = tr1;
			if (EIF_TEST(loc1)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2285[Dtype(arg1)-660])(RTCV(arg1));
				loc2 = tr1;
				tb1 = EIF_TEST(loc2);
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[dtype-395])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[Dtype(arg1)-395])(RTCV(arg1));
				for (;;) {
					tb1 = '\01';
					if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2245[dtype-395])(Current)) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					if (*(EIF_BOOLEAN *)(Current + O2226[dtype-218])) {
						ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2279[dtype-395])(Current));
						ti4_2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2279[Dtype(arg1)-395])(RTCV(arg1)));
						Result = (EIF_BOOLEAN) (ti4_1 == ti4_2);
					} else {
						ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2279[dtype-395])(Current));
						ti4_2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2279[Dtype(arg1)-395])(RTCV(arg1)));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[dtype-395])(Current);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[Dtype(arg1)-395])(RTCV(arg1));
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2287[dtype-660])(Current, loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2287[Dtype(arg1)-660])(RTCV(arg1), loc2);
			} else {
			}
		} else {
			tb2 = '\0';
			tb3 = '\0';
			if (F282_2518(Current)) {
				tb4 = F282_2518(RTCV(arg1));
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
EIF_BOOLEAN F638_4919 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[dtype-395])(Current);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[dtype-517])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {LIST}.before */
EIF_BOOLEAN F638_4920 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[Dtype(Current)-395])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

void EIF_Minit499 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
