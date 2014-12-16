/*
 * Code for class REAL_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re373.h"
#include <math.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_64_REF}.hash_code */
EIF_INTEGER_32 F856_7386 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5815[Dtype(Current)-855])(Current);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.sign */
EIF_INTEGER_32 F856_7387 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) > (EIF_REAL_64) 0.0)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) < (EIF_REAL_64) 0.0)) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {REAL_64_REF}.zero */
EIF_REFERENCE F856_7389 (EIF_REFERENCE Current)
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
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	F856_7399(RTCV(Result), (EIF_REAL_64) 0.0);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.is_less */
EIF_BOOLEAN F856_7397 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tr8_1 < tr8_2);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.is_equal */
EIF_BOOLEAN F856_7398 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr8_1 == tr8_2);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.set_item */
void F856_7399 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) = (EIF_REAL_64) arg1;
}

/* {REAL_64_REF}.truncated_to_integer */
EIF_INTEGER_32 F856_7408 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {REAL_64_REF}.floor */
EIF_INTEGER_32 F856_7412 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = (FUNCTION_CAST(EIF_REAL_64, (EIF_REFERENCE)) R5822[Dtype(Current)-855])(Current);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {REAL_64_REF}.rounded */
EIF_INTEGER_32 F856_7413 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = F856_7387(Current);
	tr8_1 = F856_7417(Current);
	tr1 = RTLNS(857, 857, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
	
	ti4_1 = F856_7412(RTCV(tr1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ti4_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.floor_real_64 */
EIF_REAL_64 F856_7415 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_REAL_64) floor ((double)tr8_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.abs */
EIF_REAL_64 F856_7417 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_REAL_64 *)(RTCV(F856_7426(Current))+ _R64OFF_0_0_0_0_0_0_0_0_);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.plus */
EIF_REFERENCE F856_7418 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F856_7399(RTCV(Result), (EIF_REAL_64) (tr8_1 + tr8_2));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.minus */
EIF_REFERENCE F856_7419 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F856_7399(RTCV(Result), (EIF_REAL_64) (tr8_1 - tr8_2));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.product */
EIF_REFERENCE F856_7420 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F856_7399(RTCV(Result), (EIF_REAL_64) (tr8_1 * tr8_2));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.quotient */
EIF_REFERENCE F856_7421 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F856_7399(RTCV(Result), (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2)));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.power */
EIF_REAL_64 F856_7422 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	return (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_)), (EIF_REAL_64) (arg1));
}

/* {REAL_64_REF}.opposite */
EIF_REFERENCE F856_7424 (EIF_REFERENCE Current)
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
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	F856_7399(RTCV(Result), (EIF_REAL_64) -*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.out */
EIF_REFERENCE F856_7425 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = c_outr64(tr8_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.abs_ref */
EIF_REFERENCE F856_7426 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) == (EIF_REAL_64) 0.0)) {
		RTLE;
		return (EIF_REFERENCE) F856_7389(Current);
	} else {
		if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) > (EIF_REAL_64) 0.0)) {
			RTLE;
			return (EIF_REFERENCE) Current;
		} else {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5371[Dtype(Current)-828])(RTCV(Current));
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}/* NOTREACHED */
	
}

void EIF_Minit373 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
