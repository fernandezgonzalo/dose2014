/*
 * Code for class INTERACTIVE_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in463.h"
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

/* {INTERACTIVE_LIST}.default_create */
void F679_5083 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F666_5008(Current, ((EIF_INTEGER_32) 4L));
}

/* {INTERACTIVE_LIST}.on_item_added_at */
void F679_5085 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.on_item_removed_at */
void F679_5086 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.extend */
void F679_5088 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O4178[dtype-678]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F666_5048(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O4178[dtype-678]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(arg1);
	ti4_1 = F666_5029(Current);
	F679_5103(Current, tr1, ti4_1);
	RTLE;
}

/* {INTERACTIVE_LIST}.put_i_th */
void F679_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = F666_5013(Current, arg2);
	*(EIF_BOOLEAN *)(Current + O4178[dtype-678]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F666_5046(Current, tr1, arg2);
	*(EIF_BOOLEAN *)(Current + O4178[dtype-678]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTCCL(loc1);
		F679_5104(Current, tr1, arg2);
	}
	tr1 = RTCCL(arg1);
	F679_5103(Current, tr1, arg2);
	RTLE;
}

/* {INTERACTIVE_LIST}.replace */
void F679_5093 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O4170[dtype-665]);
	loc2 = F666_5012(Current);
	*(EIF_BOOLEAN *)(Current + O4178[dtype-678]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F666_5051(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O4178[dtype-678]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	F679_5104(Current, tr1, loc1);
	tr1 = RTCCL(arg1);
	F679_5103(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.remove */
void F679_5094 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O4170[dtype-665]);
	loc2 = F666_5012(Current);
	*(EIF_BOOLEAN *)(Current + O4178[dtype-678]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F666_5060(Current);
	*(EIF_BOOLEAN *)(Current + O4178[dtype-678]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	F679_5104(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.prune_all */
void F679_5098 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc6);
	RTLR(5,arg1);
	
	RTGC;
	loc5 = *(EIF_BOOLEAN *)(Current + O2226[dtype-218]);
	loc7 = F666_5011(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = F666_5029(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == F666_5029(Current))) break;
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(loc7)-578])(RTCV(loc7), (EIF_INTEGER_32) (loc1 + loc3));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5222[Dtype(loc7)-798])(RTCV(loc7), tr2, loc1);
			}
			loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(loc7)-578])(RTCV(loc7), loc1);
			if (loc5) {
				loc4 = (EIF_BOOLEAN) RTEQ(arg1, loc6);
			} else {
				loc4 = (EIF_BOOLEAN) RTCEQ(arg1, loc6);
			}
			if (loc4) {
				tr1 = RTCCL(loc6);
				F679_5104(Current, tr1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc3++;
			} else {
				loc1++;
			}
		} else {
			loc1++;
		}
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5236[Dtype(loc7)-798])(RTCV(loc7), loc3);
	ti4_1 = F666_5029(Current);
	*(EIF_INTEGER_32 *)(Current + O4170[dtype-665]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {INTERACTIVE_LIST}.wipe_out */
void F679_5100 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (F666_5011(Current));
	loc3 = F666_5029(Current);
	F666_5064(Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5212[Dtype(loc1)-798])(RTCV(loc1), loc2);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4175[Dtype(Current)-678])(Current, tr2, ((EIF_INTEGER_32) 1L));
		loc2++;
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.added_item */
void F679_5103 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O4178[dtype-678])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4174[dtype-678])(Current, tr1, arg2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.removed_item */
void F679_5104 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O4178[dtype-678])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4175[dtype-678])(Current, tr1, arg2);
	}
	RTLE;
}

void EIF_Minit463 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
