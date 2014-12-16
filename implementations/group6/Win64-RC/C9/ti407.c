/*
 * Code for class TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti407.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIME}.make */
void F935_8110 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F121_1593(Current, arg1);
	F121_1594(Current, arg2);
	F121_1595(Current, arg3);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {TIME}.make_fine */
void F935_8111 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg3;
	F935_8110(Current, arg1, arg2, loc1);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg3 - tr8_1);
	RTLE;
}

/* {TIME}.origin */
static EIF_REFERENCE F935_8119_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8119);
#define Result RTOSR(8119)
	RTOC_NEW(Result);
	tr1 = RTLNS(934, 934, _OBJSIZ_0_0_0_1_0_0_0_1_);
	F935_8110(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (8119);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F935_8119 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8119,F935_8119_body,(Current));
}

/* {TIME}.is_less */
EIF_BOOLEAN F935_8120 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	Result = '\01';
	if (!((EIF_BOOLEAN) (loc1 < loc2))) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tb2 = '\0';
			tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
			if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) < tr8_1)) {
				tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
				tb2 = (EIF_BOOLEAN) ((EIF_REAL_64) (tr8_1 - *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_)) > (EIF_REAL_64) 1.0e-10);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {TIME}.duration */
EIF_REFERENCE F935_8121 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(441, 441, _OBJSIZ_0_0_0_2_0_0_0_1_);
	ti4_1 = F121_1584(Current);
	ti4_2 = F121_1585(Current);
	tr8_1 = F121_1589(Current);
	F442_2900(RTCV(tr1), ti4_1, ti4_2, tr8_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {TIME}.plus */
EIF_REFERENCE F935_8124 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_2_0_0_0_0_);
	F935_8127(RTCV(Result), tr8_1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	F935_8128(RTCV(Result), ti4_1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_1_);
	F935_8129(RTCV(Result), ti4_1);
	RTLE;
	return Result;
}

/* {TIME}.fine_second_add */
void F935_8127 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F121_1589(Current);
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (loc1 + arg1);
	tb1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN) (loc1 < tr8_1)) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		tb1 = (EIF_BOOLEAN) (loc1 >= tr8_1);
	}
	if (tb1) {
		tr1 = RTLNS(857, 857, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		
		ti4_1 = F856_7412(RTCV(tr1));
		ti4_1 = F118_1566(Current, ti4_1, ((EIF_INTEGER_32) 60L));
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L)));
		F121_1596(Current, (EIF_REAL_64) (loc1 - tr8_1));
		tr1 = RTLNS(857, 857, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		
		ti4_1 = F856_7412(RTCV(tr1));
		ti4_1 = F118_1566(Current, ti4_1, ((EIF_INTEGER_32) 60L));
		F935_8128(Current, ti4_1);
	} else {
		F121_1596(Current, loc1);
	}
	RTLE;
}

/* {TIME}.minute_add */
void F935_8128 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F121_1585(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		ti4_1 = F118_1565(Current, loc1, ((EIF_INTEGER_32) 60L));
		F121_1594(Current, ti4_1);
		ti4_1 = F118_1566(Current, loc1, ((EIF_INTEGER_32) 60L));
		F935_8129(Current, ti4_1);
	} else {
		F121_1594(Current, loc1);
	}
	RTLE;
}

/* {TIME}.hour_add */
void F935_8129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F121_1584(Current);
	ti4_1 = F118_1565(Current, (EIF_INTEGER_32) (ti4_1 + arg1), ((EIF_INTEGER_32) 24L));
	F121_1593(Current, ti4_1);
	RTLE;
}

/* {TIME}.out */
EIF_REFERENCE F935_8137 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = F119_1574(Current);
	Result = F935_8138(Current, tr1);
	RTLE;
	return Result;
}

/* {TIME}.formatted_out */
EIF_REFERENCE F935_8138 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(930, 930, _OBJSIZ_4_2_0_1_0_0_0_0_);
	F931_8033(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F931_8046(RTCV(loc1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit407 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
