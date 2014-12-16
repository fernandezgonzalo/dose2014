/*
 * Code for class WSF_TRACE_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws242.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_TRACE_RESPONSE}.make */
void F486_3220 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTLNSMART(eif_non_attached_type(680));
	F681_5142(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_TRACE_RESPONSE}.header */
EIF_REFERENCE F486_3221 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_TRACE_RESPONSE}.request */
EIF_REFERENCE F486_3222 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_TRACE_RESPONSE}.send_to */
void F486_3223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc4);
	RTLR(4,loc7);
	RTLR(5,tr1);
	RTLR(6,loc1);
	RTLR(7,loc8);
	RTLR(8,loc9);
	RTLR(9,tr2);
	RTLR(10,loc2);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current);
	F94_1320(RTCV(arg1), ((EIF_INTEGER_32) 200L));
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = F749_6167(RTCV(loc4));
	loc7 = tr1;
	if (EIF_TEST(loc7)) {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7) + O4699[Dtype(loc7)-734]);
		F737_5723(RTCV(tr1), ti4_1);
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = F733_5607(RTCV(loc7));
		F741_5938(RTCV(loc1), tr1);
		F741_5952(RTCV(loc1), (EIF_CHARACTER_8) '\012');
	} else {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
	}
	tb1 = F749_6171(RTCV(loc4));
	if (tb1) {
		F541_4523(RTCV(loc3));
		tr1 = F681_5151(RTCV(loc3));
		F94_1330(RTCV(arg1), tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1279[Dtype(arg1)-93])(RTCV(arg1), loc1, NULL);
		tr1 = F749_6170(RTCV(loc4));
		loc8 = tr1;
		if (EIF_TEST(loc8)) {
			loc9 = loc8;
			loc9 = RTRV(eif_non_attached_type(433),loc9);
			if (EIF_TEST(loc9)) {
				F434_2783(RTCV(loc9));
				for (;;) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc9)+ _LNGOFF_6_1_0_1_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) break;
					tr1 = *(EIF_REFERENCE *)(RTCV(loc9));
					tr2 = *(EIF_REFERENCE *)(RTCV(loc9) + _REFACS_2_);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1279[Dtype(arg1)-93])(RTCV(arg1), tr1, tr2);
					F434_2783(RTCV(loc9));
				}
				tr1 = *(EIF_REFERENCE *)(RTCV(loc9) + _REFACS_2_);
				tr2 = *(EIF_REFERENCE *)(RTCV(loc9) + _REFACS_1_);
				F94_1342(RTCV(arg1), tr1, tr2);
			} else {
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8192L);
				for (;;) {
					if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) break;
					F741_5966(RTCV(loc1));
					loc6 = F433_2764(RTCV(loc8), loc1, ((EIF_INTEGER_32) 1L), loc5);
					if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {
						loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					} else {
						if ((EIF_BOOLEAN) (loc6 < loc5)) {
							loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1279[Dtype(arg1)-93])(RTCV(arg1), loc1, NULL);
					}
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R1281[Dtype(arg1)-93])(RTCV(arg1));
			}
		}
		F94_1344(RTCV(arg1));
	} else {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tu8_1 = *(EIF_NATURAL_64 *)(RTCV(loc4)+ _I64OFF_20_2_0_0_0_0_0_);
		ti4_2 = (EIF_INTEGER_32) tu8_1;
		F737_5723(RTCV(tr1), ti4_2);
		loc2 = (EIF_REFERENCE) tr1;
		F749_6172(RTCV(loc4), loc2);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		F541_4517(RTCV(loc3), (EIF_INTEGER_32) (ti4_2 + ti4_3));
		tr1 = F681_5151(RTCV(loc3));
		F94_1330(RTCV(arg1), tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg1)-93])(RTCV(arg1), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg1)-93])(RTCV(arg1), loc2);
		F94_1344(RTCV(arg1));
	}
	RTLE;
}

void EIF_Minit242 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
