/*
 * Code for class LINKED_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li459.h"
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

/* {LINKED_LIST}.make */
void F661_4932 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {LINKED_LIST}.item */
EIF_REFERENCE F661_4933 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O4141[Dtype(Current)-660]);
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

/* {LINKED_LIST}.index */
EIF_INTEGER_32 F661_4936 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L));
	} else {
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc1 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
			loc2 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc1) || (EIF_BOOLEAN)(loc2 == NULL))) break;
				loc2 = *(EIF_REFERENCE *)(RTCV(loc2) + O1352[Dtype(loc2)-102]);
				Result++;
			}
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.cursor */
EIF_REFERENCE F661_4937 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {417,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y2231,Y2231_gen_type,Dftype(Current),218);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 417, _OBJSIZ_1_2_0_0_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_BOOLEAN, EIF_BOOLEAN)) R2362[Dtype(tr1)-417])(RTCV(tr1), *(EIF_REFERENCE *)(Current + O4141[Dtype(Current)-660]), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {LINKED_LIST}.new_cursor */
EIF_REFERENCE F661_4938 (EIF_REFERENCE Current)
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
		static EIF_TYPE_INDEX typarr0[] = {554,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y2231,Y2231_gen_type,Dftype(Current),218);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 554, _OBJSIZ_2_1_0_5_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3911[Dtype(tr1)-542])(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3928[Dtype(Result)-542])(RTCV(Result));
	RTLE;
	return Result;
}

/* {LINKED_LIST}.first_element */
EIF_REFERENCE F661_4939 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O4137[Dtype(Current) - 660]);
}


/* {LINKED_LIST}.count */
EIF_INTEGER_32 F661_4940 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
}


/* {LINKED_LIST}.after */
EIF_BOOLEAN F661_4942 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {LINKED_LIST}.before */
EIF_BOOLEAN F661_4943 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {LINKED_LIST}.off */
EIF_BOOLEAN F661_4944 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) || *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_));
}

/* {LINKED_LIST}.isfirst */
EIF_BOOLEAN F661_4945 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	
	
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	tr1 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
	tr2 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) && (EIF_BOOLEAN)(tr1 == tr2));
	return Result;
}

/* {LINKED_LIST}.islast */
EIF_BOOLEAN F661_4946 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_))) {
		loc1 = *(EIF_REFERENCE *)(Current + O4141[Dtype(Current)-660]);
		Result = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O1352[Dtype(loc1)-102]);
			Result = (EIF_BOOLEAN)(tr1 == NULL);
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.start */
void F661_4950 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O4137[dtype-660]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {LINKED_LIST}.finish */
void F661_4951 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) loc1;
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O1352[Dtype(loc1)-102]);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O4141[dtype-660]) == NULL);
	RTLE;
}

/* {LINKED_LIST}.forth */
void F661_4952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2224[dtype-278])(Current)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc1 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O1352[Dtype(loc1)-102]);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O1352[Dtype(loc1)-102]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {LINKED_LIST}.back */
void F661_4953 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2224[dtype-278])(Current)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4117[dtype-612])(Current)) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4139[dtype-660])(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.move */
void F661_4954 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		loc3 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg1) || (EIF_BOOLEAN)(loc3 == NULL))) break;
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) loc3;
			loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + O1352[Dtype(loc3)-102]);
			loc1++;
		}
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) loc3;
		}
	} else {
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[dtype-395])(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + arg1);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4115[dtype-612])(Current, loc2);
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.go_i_th */
void F661_4955 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4142[dtype-660])(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
		} else {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[dtype-395])(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4115[dtype-612])(Current, (EIF_INTEGER_32) (arg1 - ti4_1));
		}
	}
	RTLE;
}

/* {LINKED_LIST}.go_to */
void F661_4956 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(eif_final_id(Y2285,Y2285_gen_type,dftype,379)),loc1);
	if (EIF_TEST(loc1)) {
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_0_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_1_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) tb1;
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			tr1 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
		} else {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4142[dtype-660])(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
			} else {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O2363[Dtype(loc1)-417]);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
			}
		}
	} else {
	}
	RTLE;
}

/* {LINKED_LIST}.put_front */
void F661_4957 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4138[dtype-660])(Current, tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1353[Dtype(loc1)-102])(RTCV(loc1), *(EIF_REFERENCE *)(Current + O4137[dtype-660]));
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + O4137[dtype-660]) = (EIF_REFERENCE) loc1;
	tb1 = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2224[dtype-278])(Current);
	}
	if (tb1) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) loc1;
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	RTLE;
}

/* {LINKED_LIST}.extend */
void F661_4958 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = RTCCL(arg1);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4138[dtype-660])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2224[dtype-278])(Current)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O4137[dtype-660]) = (EIF_REFERENCE) loc1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) loc1;
	} else {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4142[dtype-660])(Current);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1353[Dtype(loc2)-102])(RTCV(loc2), loc1);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) loc1;
			}
		}
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	RTLE;
}

/* {LINKED_LIST}.remove */
void F661_4964 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,loc4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4117[dtype-612])(Current)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + O1352[Dtype(loc2)-102]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O4137[dtype-660]) = (EIF_REFERENCE) tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R1354[Dtype(loc2)-102])(RTCV(loc2));
			tr1 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == ((EIF_INTEGER_32) 1L))) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4118[dtype-660])(Current)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4139[dtype-660])(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
				loc3 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R1354[Dtype(loc3)-102])(RTCV(loc3));
				}
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + O1352[Dtype(loc2)-102]);
				loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4139[dtype-660])(Current);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1353[Dtype(loc4)-102])(RTCV(loc4), loc1);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R1354[Dtype(loc2)-102])(RTCV(loc2));
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) loc1;
			}
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4143[dtype-660])(Current, loc2);
	}
	RTLE;
}

/* {LINKED_LIST}.remove_left */
void F661_4965 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4115[dtype-612])(Current, ((EIF_INTEGER_32) -2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4133[dtype-660])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[dtype-395])(Current);
	RTLE;
}

/* {LINKED_LIST}.remove_right */
void F661_4966 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		loc2 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			loc1 = (EIF_REFERENCE) loc2;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + O1352[Dtype(loc2)-102]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O4137[dtype-660]) = (EIF_REFERENCE) tr1;
			loc3 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R1354[Dtype(loc3)-102])(RTCV(loc3));
			}
			tr1 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) tr1;
		}
	} else {
		loc3 = *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			loc4 = *(EIF_REFERENCE *)(RTCV(loc3) + O1352[Dtype(loc3)-102]);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				loc1 = (EIF_REFERENCE) loc4;
				tr1 = *(EIF_REFERENCE *)(RTCV(loc4) + O1352[Dtype(loc4)-102]);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1353[Dtype(loc3)-102])(RTCV(loc3), tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R1354[Dtype(loc4)-102])(RTCV(loc4));
			}
		}
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4143[dtype-660])(Current, loc1);
	RTLE;
}

/* {LINKED_LIST}.copy */
void F661_4968 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
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
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2224[Dtype(arg1)-278])(RTCV(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4144[dtype-660])(Current);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2285[Dtype(arg1)-660])(RTCV(arg1));
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				loc1 = (EIF_REFERENCE) loc2;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[Dtype(arg1)-395])(RTCV(arg1));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2233[Dtype(arg1)-242])(RTCV(arg1));
				if (tb1) break;
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2279[Dtype(arg1)-395])(RTCV(arg1));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-395])(Current, tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2246[dtype-660])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[Dtype(arg1)-395])(RTCV(arg1));
			}
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2287[Dtype(arg1)-660])(RTCV(arg1), loc1);
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.new_cell */
EIF_REFERENCE F661_4970 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {102,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y2279,Y2279_gen_type,Dftype(Current),367);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 102, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	tr2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1349[Dtype(tr1)-97])(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {LINKED_LIST}.previous */
EIF_REFERENCE F661_4971 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O4141[dtype-660]);
	} else {
		tb1 = '\01';
		if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4117[dtype-612])(Current)) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		}
		if ((EIF_BOOLEAN) !tb1) {
			loc1 = *(EIF_REFERENCE *)(Current + O4137[dtype-660]);
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O1352[Dtype(loc1)-102]);
					tb1 = (EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current + O4141[dtype-660]));
				}
				if (tb1) break;
				loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O1352[Dtype(loc1)-102]);
			}
			RTLE;
			return (EIF_REFERENCE) loc1;
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {LINKED_LIST}.active */
EIF_REFERENCE F661_4973 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O4141[Dtype(Current) - 660]);
}


/* {LINKED_LIST}.last_element */
EIF_REFERENCE F661_4974 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O4141[Dtype(Current)-660]);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		Result = (EIF_REFERENCE) loc1;
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O1352[Dtype(loc1)-102]);
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.cleanup_after_remove */
void F661_4975 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {LINKED_LIST}.internal_wipe_out */
void F661_4976 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + O4141[dtype-660]) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + O4137[dtype-660]) = (EIF_REFERENCE) NULL;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

void EIF_Minit459 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
