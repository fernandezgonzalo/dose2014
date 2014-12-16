/*
 * Code for class INDEXABLE_ITERATION_CURSOR [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in482.h"
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

/* {INDEXABLE_ITERATION_CURSOR}.make */
void F544_4583 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3929[dtype-542]) = (EIF_REFERENCE) arg1;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(13),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		*(EIF_NATURAL_32 *)(Current + O3921[dtype-542]) = (EIF_NATURAL_32) tu4_1;
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_32 *)(Current + O3921[dtype-542]) = (EIF_NATURAL_32) tu4_1;
	}
	*(EIF_INTEGER_32 *)(Current + O3916[dtype-542]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current + O3922[dtype-542]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.item */
EIF_INTEGER_32 F544_4584 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3929[dtype-542]);
	Result = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(tr1)-578])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O3913[dtype-542])));
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.new_cursor */
EIF_REFERENCE F544_4590 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3928[Dtype(Result)-542])(RTCV(Result));
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F544_4596 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) !F544_4598(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O3929[dtype-542]);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3944[Dtype(tr1)-578])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O3913[dtype-542]));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F544_4598 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + O3929[dtype-542]);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(13),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		Result = (EIF_BOOLEAN)(tu4_1 == *(EIF_NATURAL_32 *)(Current + O3921[dtype-542]));
	}
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.start */
void F544_4603 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F544_4606(Current);
	if (*(EIF_BOOLEAN *)(Current + O3922[dtype-542])) {
		ti4_1 = F600_4777(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O3914[dtype-542]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F600_4775(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O3915[dtype-542]) = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F600_4777(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O3915[dtype-542]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F600_4775(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O3914[dtype-542]) = (EIF_INTEGER_32) ti4_1;
	}
	*(EIF_INTEGER_32 *)(Current + O3913[dtype-542]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3914[dtype-542]);
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.forth */
void F544_4604 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3922[dtype-542])) {
		(*(EIF_INTEGER_32 *)(Current + O3913[dtype-542])) -= *(EIF_INTEGER_32 *)(Current + O3916[dtype-542]);
	} else {
		(*(EIF_INTEGER_32 *)(Current + O3913[dtype-542])) += *(EIF_INTEGER_32 *)(Current + O3916[dtype-542]);
	}
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F544_4605 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3929[Dtype(Current) - 542]);
}


/* {INDEXABLE_ITERATION_CURSOR}.index_set */
EIF_REFERENCE F544_4606 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O3929[Dtype(Current)-542]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3943[Dtype(tr1)-578])(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit482 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
