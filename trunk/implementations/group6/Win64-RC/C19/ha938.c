/*
 * Code for class HASH_TABLE [INTEGER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha938.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HASH_TABLE}.make */
void F581_4634 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	
	RTGC;
	tr1 = RTLNS(397, 397, _OBJSIZ_0_1_0_1_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	loc4 = eif_max_int32 (arg1,((EIF_INTEGER_32) 2L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	loc4 = F398_2613(RTCV(loc1), loc4);
	*(EIF_INTEGER_32 *)(Current + O3956[dtype-578]) = (EIF_INTEGER_32) loc4;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y3983,Y3983_gen_type,dftype,578)),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3983[dtype-578]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y3984,Y3984_gen_type,dftype,578)),EO_REF,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3984[dtype-578]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {801,693,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_BOOLEAN), EIF_TRUE);
	}
	F802_6350(RTCV(tr1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3986[dtype-578]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	F800_6350(RTCV(tr1), ((EIF_INTEGER_32) -1L), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3985[dtype-578]) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current + O3989[dtype-578]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current + O4033[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O3993[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) loc2;
	*(EIF_BOOLEAN *)(Current + O3988[dtype-578]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O3997[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	*(EIF_INTEGER_32 *)(Current + O3998[dtype-578]) = (EIF_INTEGER_32) loc2;
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + O3999[dtype-578]) = (EIF_REFERENCE) RTCCL(loc3);
	RTLE;
}

/* {HASH_TABLE}.make_equal */
void F581_4635 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3945[Dtype(Current)-578])(Current, arg1);
	F220_2481(Current);
	RTLE;
}

/* {HASH_TABLE}.accommodate */
void F581_4636 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
	ti4_1 = eif_max_int32 (ti4_1,arg1);
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3981[dtype-578])(Current, ti4_1);
	loc4 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
	loc5 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(loc5)-798])(loc5);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4001[dtype-578])(Current, loc1)) {
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc4 + (loc1));
			/* END INLINED CODE */
			ti4_1 = ti4_2;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(loc5)-578])(RTCV(loc5), loc1);
			tr2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2276[Dtype(loc3)-578])(RTCV(loc3), (EIF_REFERENCE) &ti4_1, tr2);
		}
		loc1++;
	}
	if (*(EIF_BOOLEAN *)(Current + O3988[dtype-578])) {
		tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O3956[dtype-578])));
		/* END INLINED CODE */
		loc1 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		ti4_2 = *((EIF_INTEGER_32 *)loc4 + (loc1));
		/* END INLINED CODE */
		ti4_1 = ti4_2;
		tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(tr1)-578])(RTCV(tr1), loc1);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2276[Dtype(loc3)-578])(RTCV(loc3), (EIF_REFERENCE) &ti4_1, tr2);
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O3983[Dtype(loc3)-578]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4004[dtype-578])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O3984[Dtype(loc3)-578]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4006[dtype-578])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O3986[Dtype(loc3)-578]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4007[dtype-578])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O3985[Dtype(loc3)-578]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4008[dtype-578])(Current, tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3) + O3956[Dtype(loc3)-578]);
	*(EIF_INTEGER_32 *)(Current + O3956[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3) + O3989[Dtype(loc3)-578]);
	*(EIF_INTEGER_32 *)(Current + O3989[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.found_item */
EIF_INTEGER_32 F581_4637 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3948[Dtype(Current) - 578]);
}


/* {HASH_TABLE}.item */
EIF_INTEGER_32 F581_4638 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc9);
	RTLR(6,loc10);
	RTLR(7,loc11);
	RTLR(8,loc12);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		if (*(EIF_BOOLEAN *)(Current + O3988[dtype-578])) {
			tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
			tr2 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr2 + (*(EIF_INTEGER_32 *)(Current + O3956[dtype-578])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
			/* END INLINED CODE */
			Result = ti4_3;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		loc10 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		loc11 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3956[dtype-578]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3955[dtype-578])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc10 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(loc9)-578])(RTCV(loc9), loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3957[dtype-578])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)tr1 + (loc4));
					/* END INLINED CODE */
					Result = ti4_2;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc11 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.at */
EIF_INTEGER_32 F581_4639 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc9);
	RTLR(6,loc10);
	RTLR(7,loc11);
	RTLR(8,loc12);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		if (*(EIF_BOOLEAN *)(Current + O3988[dtype-578])) {
			tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
			tr2 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr2 + (*(EIF_INTEGER_32 *)(Current + O3956[dtype-578])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
			/* END INLINED CODE */
			Result = ti4_3;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		loc10 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		loc11 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3956[dtype-578]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3955[dtype-578])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc10 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(loc9)-578])(RTCV(loc9), loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3957[dtype-578])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)tr1 + (loc4));
					/* END INLINED CODE */
					Result = ti4_2;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc11 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has */
EIF_BOOLEAN F581_4640 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,tr1);
	RTLR(7,loc12);
	RTLR(8,tr2);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		if (*(EIF_BOOLEAN *)(Current + O3988[dtype-578])) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		loc10 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		loc11 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3956[dtype-578]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3955[dtype-578])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc10 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(loc9)-578])(RTCV(loc9), loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3957[dtype-578])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc11 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has_key */
EIF_BOOLEAN F581_4641 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3987[dtype-578]);
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4012[dtype-578])(Current, tr1);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3963[dtype-578])(Current);
	if (Result) {
		tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3990[dtype-578])(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has_item */
EIF_BOOLEAN F581_4642 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3988[dtype-578])) {
		tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
		tr2 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr2 + (*(EIF_INTEGER_32 *)(Current + O3956[dtype-578])));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if ((EIF_BOOLEAN) !Result) {
		loc3 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
		loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc3);
		if (*(EIF_BOOLEAN *)(Current + O2226[dtype-218])) {
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				Result = '\0';
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4001[dtype-578])(Current, loc1)) {
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)loc3 + (loc1));
					/* END INLINED CODE */
					ti4_1 = ti4_2;
					Result = (arg1 == ti4_1);
				}
				loc1++;
			}
		} else {
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				Result = '\0';
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4001[dtype-578])(Current, loc1)) {
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)loc3 + (loc1));
					/* END INLINED CODE */
					ti4_1 = ti4_2;
					Result = (EIF_BOOLEAN)(arg1 == ti4_1);
				}
				loc1++;
			}
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.item_for_iteration */
EIF_INTEGER_32 F581_4644 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O3989[dtype-578])));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_REFERENCE F581_4645 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(tr1)-578])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O3989[dtype-578]));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.new_cursor */
EIF_REFERENCE F581_4647 (EIF_REFERENCE Current)
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
	{
		static EIF_TYPE_INDEX typarr0[] = {559,0,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y2231,Y2231_gen_type,Dftype(Current),218);
		typarr0[2] = eif_final_id(Y2278,Y2278_gen_type,Dftype(Current),353);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 559, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	F544_4583(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	F544_4603(RTCV(Result));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.iteration_item */
EIF_INTEGER_32 F581_4648 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3983[Dtype(Current)-578]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)tr1 + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F581_4649 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4239[Dtype(arg1)-683])(RTCV(arg1));
	return (EIF_INTEGER_32) ti4_1;
}

/* {HASH_TABLE}.count */
EIF_INTEGER_32 F581_4650 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4033[Dtype(Current) - 578]);
}


/* {HASH_TABLE}.iteration_index_set */
EIF_REFERENCE F581_4653 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(599, 599, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3973[dtype-578])(Current, ((EIF_INTEGER_32) -1L));
	tr2 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr2)-798])(tr2);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3974[dtype-578])(Current, ti4_2);
	F600_4772(RTCV(tr1), ti4_1, ti4_2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F581_4654 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4033[Dtype(arg1)-578]);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4033[dtype-578]) == ti4_1)) {
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1) + O2226[Dtype(arg1)-218]);
		tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2226[dtype-218]) == tb3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(arg1) + O3988[Dtype(arg1)-578]);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3988[dtype-578]) == tb2);
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3695[dtype-535])(Current);
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc1)-537])(RTCV(loc1));
			if (tb1) break;
			if ((EIF_BOOLEAN) !Result) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2625[Dtype(loc1)-557])(RTCV(loc1));
			tr2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3971[Dtype(arg1)-578])(RTCV(arg1), tr2);
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3963[Dtype(arg1)-578])(RTCV(arg1));
			if (tb2) {
				if (*(EIF_BOOLEAN *)(Current + O2226[dtype-218])) {
					ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc1)-537])(RTCV(loc1)));
					ti4_2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3948[Dtype(arg1)-578])(RTCV(arg1)));
					Result = (EIF_BOOLEAN) (ti4_1 == ti4_2);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc1)-537])(RTCV(loc1)));
					ti4_2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3948[Dtype(arg1)-578])(RTCV(arg1)));
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
			} else {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc1)-537])(RTCV(loc1));
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.same_keys */
EIF_BOOLEAN F581_4655 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	return (EIF_BOOLEAN) RTEQ(arg1, arg2);
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F581_4664 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3992[Dtype(Current)-578]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	return Result;
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F581_4665 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3992[Dtype(Current)-578]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L));
	return Result;
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F581_4666 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4003[dtype-578])(Current, *(EIF_INTEGER_32 *)(Current + O3989[dtype-578]));
}

/* {HASH_TABLE}.off */
EIF_BOOLEAN F581_4667 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4003[dtype-578])(Current, *(EIF_INTEGER_32 *)(Current + O3989[dtype-578]));
}

/* {HASH_TABLE}.valid_iteration_index */
EIF_BOOLEAN F581_4670 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4002[Dtype(Current)-578])(Current, arg1);
}

/* {HASH_TABLE}.start */
void F581_4671 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3973[dtype-578])(Current, ((EIF_INTEGER_32) -1L));
	*(EIF_INTEGER_32 *)(Current + O3989[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.forth */
void F581_4672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3973[dtype-578])(Current, *(EIF_INTEGER_32 *)(Current + O3989[dtype-578]));
	*(EIF_INTEGER_32 *)(Current + O3989[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.search */
void F581_4674 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3987[dtype-578]);
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4012[dtype-578])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3963[dtype-578])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3990[dtype-578])(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F581_4676 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	loc1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
	tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
	loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result >= loc2)) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)loc1 + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result++;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.previous_iteration_position */
EIF_INTEGER_32 F581_4677 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O3986[Dtype(Current)-578]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)loc1 + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result--;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.put */
void F581_4678 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4012[dtype-578])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3963[dtype-578])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4018[dtype-578])(Current);
		tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3990[dtype-578])(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	} else {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3991[dtype-578])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4031[dtype-578])(Current);
			tr1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4012[dtype-578])(Current, tr1);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3993[dtype-578]) != ((EIF_INTEGER_32) -1L))) {
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4000[dtype-578])(Current, *(EIF_INTEGER_32 *)(Current + O3993[dtype-578]));
			loc3 = *(EIF_INTEGER_32 *)(Current + O3993[dtype-578]);
			tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
			F802_6368(RTCV(tr1), (EIF_BOOLEAN) 0, loc2);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
			loc3 = *(EIF_INTEGER_32 *)(Current + O3987[dtype-578]);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc2;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
		F800_6368(RTCV(tr1), arg1, loc2);
		tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		tr2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5223[Dtype(tr1)-798])(RTCV(tr1), tr2, loc2);
		if (RTCEQ(arg2, loc1)) {
			*(EIF_BOOLEAN *)(Current + O3988[dtype-578]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current + O4033[dtype-578]))++;
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	RTLE;
}

/* {HASH_TABLE}.force */
void F581_4679 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4012[dtype-578])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3964[dtype-578])(Current)) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3991[dtype-578])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4031[dtype-578])(Current);
			tr1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4012[dtype-578])(Current, tr1);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3993[dtype-578]) != ((EIF_INTEGER_32) -1L))) {
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4000[dtype-578])(Current, *(EIF_INTEGER_32 *)(Current + O3993[dtype-578]));
			loc4 = *(EIF_INTEGER_32 *)(Current + O3993[dtype-578]);
			tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
			F802_6368(RTCV(tr1), (EIF_BOOLEAN) 0, loc3);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
			loc4 = *(EIF_INTEGER_32 *)(Current + O3987[dtype-578]);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (loc4)) = loc3;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		tr2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5223[Dtype(tr1)-798])(RTCV(tr1), tr2, loc3);
		if (RTCEQ(arg2, loc1)) {
			*(EIF_BOOLEAN *)(Current + O3988[dtype-578]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current + O4033[dtype-578]))++;
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) loc2;
	} else {
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3990[dtype-578])(Current);
		tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc3));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
	F800_6368(RTCV(tr1), arg1, loc3);
	RTLE;
}

/* {HASH_TABLE}.extend */
void F581_4680 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4013[dtype-578])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3991[dtype-578])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4031[dtype-578])(Current);
		tr1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4013[dtype-578])(Current, tr1);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3993[dtype-578]) != ((EIF_INTEGER_32) -1L))) {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4000[dtype-578])(Current, *(EIF_INTEGER_32 *)(Current + O3993[dtype-578]));
		loc3 = *(EIF_INTEGER_32 *)(Current + O3993[dtype-578]);
		tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
		F802_6368(RTCV(tr1), (EIF_BOOLEAN) 0, loc2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
		loc3 = *(EIF_INTEGER_32 *)(Current + O3987[dtype-578]);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc2;
	/* END INLINED CODE */
	;
	tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
	F800_6368(RTCV(tr1), arg1, loc2);
	tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	tr2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5223[Dtype(tr1)-798])(RTCV(tr1), tr2, loc2);
	if (RTCEQ(arg2, loc1)) {
		*(EIF_BOOLEAN *)(Current + O3988[dtype-578]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	(*(EIF_INTEGER_32 *)(Current + O4033[dtype-578]))++;
	*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTLE;
}

/* {HASH_TABLE}.remove */
void F581_4684 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc6);
	
	RTGC;
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4012[dtype-578])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3963[dtype-578])(Current)) {
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3990[dtype-578])(Current);
		if (RTCEQ(arg1, loc1)) {
			*(EIF_BOOLEAN *)(Current + O3988[dtype-578]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_BOOLEAN *)tr1 + (loc3)) = (EIF_BOOLEAN) 1;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3987[dtype-578]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (ti4_1)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc3 + ((EIF_INTEGER_32) -2L));
		/* END INLINED CODE */
		;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3989[dtype-578]) == loc3)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3969[dtype-578])(Current);
		}
		(*(EIF_INTEGER_32 *)(Current + O4033[dtype-578]))--;
		ti4_1 = eif_min_int32 (loc3,*(EIF_INTEGER_32 *)(Current + O3997[dtype-578]));
		*(EIF_INTEGER_32 *)(Current + O3997[dtype-578]) = (EIF_INTEGER_32) ti4_1;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3997[dtype-578]) == *(EIF_INTEGER_32 *)(Current + O4033[dtype-578]))) {
			tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
			loc4 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O3997[dtype-578]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ti4_1);
			tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
			F800_6381(RTCV(tr1), loc4);
			tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5236[Dtype(tr1)-798])(RTCV(tr1), loc4);
			tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O3997[dtype-578]);
			tr2 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
			F802_6371(RTCV(tr1), (EIF_BOOLEAN) 0, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
			*(EIF_INTEGER_32 *)(Current + O3998[dtype-578]) = (EIF_INTEGER_32) loc2;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + O3999[dtype-578]) = (EIF_REFERENCE) RTCCL(loc1);
			*(EIF_INTEGER_32 *)(Current + O3997[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
		} else {
			loc5 = *(EIF_INTEGER_32 *)(Current + O3998[dtype-578]);
			tr1 = *(EIF_REFERENCE *)(Current + O3999[dtype-578]);
			loc6 = RTCCL(tr1);
			if ((EIF_BOOLEAN) ((EIF_TRUE) && EIF_TEST(loc6))) {
				tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc5;
				/* END INLINED CODE */
				;
				tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
				tr2 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5222[Dtype(tr1)-798])(RTCV(tr1), tr2, loc3);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc3));
				/* END INLINED CODE */
				ti4_1 = ti4_3;
				*(EIF_INTEGER_32 *)(Current + O3998[dtype-578]) = (EIF_INTEGER_32) ti4_1;
				tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(tr1)-578])(RTCV(tr1), loc3);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O3999[dtype-578]) = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
		*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
		*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) loc2;
	}
	RTLE;
}

/* {HASH_TABLE}.wipe_out */
void F581_4686 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
	F800_6387(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R5242[Dtype(tr1)-798])(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
	tr2 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
	ti4_1 = F802_6361(RTCV(tr2));
	F802_6371(RTCV(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3956[dtype-578]);
	F800_6371(RTCV(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), ti4_1);
	*(EIF_INTEGER_32 *)(Current + O3948[dtype-578]) = (EIF_INTEGER_32) loc1;
	*(EIF_INTEGER_32 *)(Current + O4033[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
	*(EIF_INTEGER_32 *)(Current + O3989[dtype-578]) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current + O3988[dtype-578]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HASH_TABLE}.clear_all */
void F581_4687 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2270[Dtype(Current)-578])(Current);
}

/* {HASH_TABLE}.copy */
void F581_4689 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O3983[Dtype(arg1)-578]);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4004[dtype-578])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O3984[Dtype(arg1)-578]);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4006[dtype-578])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O3986[Dtype(arg1)-578]);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4007[dtype-578])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O3985[Dtype(arg1)-578]);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4008[dtype-578])(Current, tr1);
	}
	RTLE;
}

/* {HASH_TABLE}.empty_duplicate */
EIF_REFERENCE F581_4690 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3945[Dtype(tr1)-578])(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	if (*(EIF_BOOLEAN *)(Current + O2226[Dtype(Current)-218])) {
		F220_2481(RTCV(Result));
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.correct_mismatch */
void F581_4691 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	RTLR(9,loc12);
	RTLR(10,loc7);
	
	RTGC;
	tr1 = RTOSCF(4303,F521_4303,(Current));
	tr2 = RTMS_EX_H("hash_table_version_64",21,855604276);
	tb1 = F579_4640(RTCV(tr1), tr2);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTOSCF(4303,F521_4303,(Current));
		tr2 = RTMS_EX_H("content",7,460700276);
		tr1 = F579_4638(RTCV(tr1), tr2);
		loc8 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {601,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y2231,Y2231_gen_type,dftype,218);
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc8 = RTRV(eif_non_attached_type(typres0),loc8);
		}
		if (EIF_TEST(loc8)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc8));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3983[dtype-578]) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOSCF(4303,F521_4303,(Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr1 = F579_4638(RTCV(tr1), tr2);
		loc9 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {600,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y2278,Y2278_gen_type,dftype,353);
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc9 = RTRV(eif_non_attached_type(typres0),loc9);
		}
		if (EIF_TEST(loc9)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc9) + O2824[Dtype(loc9)-471]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3984[dtype-578]) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOSCF(4303,F521_4303,(Current));
		tr2 = RTMS_EX_H("deleted_marks",13,2142169971);
		tr1 = F579_4638(RTCV(tr1), tr2);
		loc10 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {603,693,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(eif_non_attached_type(typres0),loc10);
		}
		if (EIF_TEST(loc10)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc10));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3986[dtype-578]) = (EIF_REFERENCE) tr1;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3986[dtype-578]) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3984[dtype-578]) != NULL))) {
			tr1 = RTOSCF(4303,F521_4303,(Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb1 = F579_4640(RTCV(tr1), tr2);
			if ((EIF_BOOLEAN) !tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
				ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
				tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
				if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
					loc1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
					tr2 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr2)-798])(tr2);
					{
						static EIF_TYPE_INDEX typarr0[] = {801,693,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNSP2(eif_non_attached_type(typres0),0,ti4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
						RT_SPECIAL_COUNT(tr1) = 0;
					}
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + O3986[dtype-578]) = (EIF_REFERENCE) tr1;
					tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
					ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
					/* INLINED CODE (SPECIAL.copy_data) */
					memmove((EIF_BOOLEAN *)tr1 + (((EIF_INTEGER_32) 0L)),(EIF_BOOLEAN *)loc1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)ti4_2);
					RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_2);
					/* END INLINED CODE */
					;
				}
			}
		}
		tr2 = RTOSCF(4303,F521_4303,(Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr2 = F579_4638(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 833, tr1, loc11, tb1);
		if (tb1) {
			loc4 = (EIF_INTEGER_32) loc11;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3983[dtype-578]) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3984[dtype-578]) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3986[dtype-578]) == NULL))) {
			F521_4302(Current);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
			loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3981[dtype-578])(Current, loc4);
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(tr1)-578])(RTCV(tr1), loc2);
				loc12 = RTCCL(tr1);
				if (EIF_TEST(loc12)) {
					tb1 = !RTCEQ(loc12, loc7);
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
					/* INLINED CODE (SPECIAL.item) */
					ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc2));
					/* END INLINED CODE */
					ti4_2 = ti4_3;
					tr1 = RTCCL(loc12);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2276[Dtype(loc5)-578])(RTCV(loc5), (EIF_REFERENCE) &ti4_2, tr1);
				}
				loc2++;
			}
			tb1 = '\0';
			tr2 = RTOSCF(4303,F521_4303,(Current));
			tr3 = RTMS_EX_H("has_default",11,1777575796);
			tr2 = F579_4638(RTCV(tr2), tr3);
			tr1 = RTCCL(tr2);
			RTOB(*(EIF_BOOLEAN *), 693, tr1, loc13, tb2);
			if (tb2) {
				tb1 = loc13;
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
				tr2 = *(EIF_REFERENCE *)(Current + O3983[dtype-578]);
				ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr2);
				/* INLINED CODE (SPECIAL.item) */
				ti4_5 = *((EIF_INTEGER_32 *)tr1 + ((EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				ti4_2 = ti4_5;
				tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(tr1)-578])(RTCV(tr1), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2276[Dtype(loc5)-578])(RTCV(loc5), (EIF_REFERENCE) &ti4_2, tr2);
			}
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O3983[Dtype(loc5)-578]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4004[dtype-578])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O3984[Dtype(loc5)-578]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4006[dtype-578])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O3986[Dtype(loc5)-578]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4007[dtype-578])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O3985[Dtype(loc5)-578]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4008[dtype-578])(Current, tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O3956[Dtype(loc5)-578]);
			*(EIF_INTEGER_32 *)(Current + O3956[dtype-578]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O3989[Dtype(loc5)-578]);
			*(EIF_INTEGER_32 *)(Current + O3989[dtype-578]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O3993[Dtype(loc5)-578]);
			*(EIF_INTEGER_32 *)(Current + O3993[dtype-578]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O3987[Dtype(loc5)-578]);
			*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) ti4_2;
			*(EIF_INTEGER_32 *)(Current + O3997[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			*(EIF_INTEGER_32 *)(Current + O3998[dtype-578]) = (EIF_INTEGER_32) loc6;
			RTAR(Current, loc7);
			*(EIF_REFERENCE *)(Current + O3999[dtype-578]) = (EIF_REFERENCE) RTCCL(loc7);
		}
		*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {HASH_TABLE}.content */
EIF_REFERENCE F581_4693 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3983[Dtype(Current) - 578]);
}


/* {HASH_TABLE}.keys */
EIF_REFERENCE F581_4694 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3984[Dtype(Current) - 578]);
}


/* {HASH_TABLE}.indexes_map */
EIF_REFERENCE F581_4695 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3985[Dtype(Current) - 578]);
}


/* {HASH_TABLE}.deleted_marks */
EIF_REFERENCE F581_4696 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3986[Dtype(Current) - 578]);
}


/* {HASH_TABLE}.position */
EIF_INTEGER_32 F581_4700 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O3987[dtype-578])));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F581_4701 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5207[Dtype(tr1)-798])(tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.ht_deleted_item */
EIF_INTEGER_32 F581_4708 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3998[Dtype(Current) - 578]);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_REFERENCE F581_4709 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3999[Dtype(Current) - 578]);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F581_4710 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)tr1 + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -Result + ((EIF_INTEGER_32) -2L));
	tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
	Result = eif_min_int32 (Result,ti4_1);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.occupied */
EIF_BOOLEAN F581_4711 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3988[dtype-578])) {
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O3956[dtype-578])));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)tr1 + (arg1));
			/* END INLINED CODE */
			tb1 = tb2;
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
		/* INLINED CODE (SPECIAL.item) */
		tb2 = *((EIF_BOOLEAN *)tr1 + (arg1));
		/* END INLINED CODE */
		Result = tb2;
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.truly_occupied */
EIF_BOOLEAN F581_4712 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current + O3988[dtype-578])) {
			tr1 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O3956[dtype-578])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb1)) {
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4001[dtype-578])(Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_off_position */
EIF_BOOLEAN F581_4713 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O3984[Dtype(Current)-578]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5206[Dtype(tr1)-798])(tr1);
		Result = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.set_content */
void F581_4714 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3983[Dtype(Current)-578]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_keys */
void F581_4716 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3984[Dtype(Current)-578]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_deleted_marks */
void F581_4717 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3986[Dtype(Current)-578]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_indexes_map */
void F581_4718 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3985[Dtype(Current)-578]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.internal_search */
void F581_4722 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,tr1);
	RTLR(7,loc12);
	RTLR(8,tr2);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3956[dtype-578]);
		if (*(EIF_BOOLEAN *)(Current + O3988[dtype-578])) {
			*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O3984[dtype-578]);
		loc10 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		loc11 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3956[dtype-578]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3955[dtype-578])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc10 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(loc9)-578])(RTCV(loc9), loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3957[dtype-578])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					*(EIF_INTEGER_32 *)(Current + O3992[dtype-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc11 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
		*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current + O3993[dtype-578]) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.search_for_insertion */
void F581_4723 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,tr1);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3956[dtype-578]);
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O3985[dtype-578]);
		loc10 = *(EIF_REFERENCE *)(Current + O3986[dtype-578]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3956[dtype-578]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3955[dtype-578])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc9 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc10 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
		*(EIF_INTEGER_32 *)(Current + O3987[dtype-578]) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current + O3993[dtype-578]) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.set_conflict */
void F581_4728 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3992[Dtype(Current)-578]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {HASH_TABLE}.add_space */
void F581_4741 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O4033[dtype-578]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O4033[dtype-578]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3947[dtype-578])(Current, (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L))));
}

/* {HASH_TABLE}.collection_extend */
void F581_4743 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit938 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
