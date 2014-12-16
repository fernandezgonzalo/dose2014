/*
 * Code for class LINKED_QUEUE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li455.h"
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

/* {LINKED_QUEUE}.make */
void F665_4990 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {LINKED_QUEUE}.item */
EIF_REFERENCE F665_4991 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc1)-97])(RTCV(loc1));
	RTLE;
	return Result;
}

/* {LINKED_QUEUE}.extend */
void F665_4993 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	F661_4957(Current, tr1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {LINKED_QUEUE}.force */
void F665_4994 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	F661_4957(Current, tr1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {LINKED_QUEUE}.copy */
void F665_4997 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tb1 = F281_2518(RTCV(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			F661_4976(Current);
			tr1 = F661_4937(RTCV(arg1));
			loc2 = tr1;
			loc2 = RTRV(eif_non_attached_type(eif_final_id(Y2285,Y2285_gen_type,dftype,379)),loc2);
			if (EIF_TEST(loc2)) {
				loc1 = (EIF_REFERENCE) loc2;
			}
			F661_4950(RTCV(arg1));
			for (;;) {
				tb1 = F661_4944(RTCV(arg1));
				if (tb1) break;
				tr1 = F661_4933(RTCV(arg1));
				tr2 = RTCCL(tr1);
				F661_4958(Current, tr2);
				F661_4952(Current);
				F661_4952(RTCV(arg1));
			}
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F661_4956(RTCV(arg1), loc1);
			}
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

void EIF_Minit455 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
