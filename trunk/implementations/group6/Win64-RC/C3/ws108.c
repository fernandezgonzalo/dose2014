/*
 * Code for class WSF_MIME_HANDLER_HELPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws108.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_MIME_HANDLER_HELPER}.full_input_data */
EIF_REFERENCE F129_1667 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), Result);
	RTLE;
	return Result;
}

/* {WSF_MIME_HANDLER_HELPER}.add_string_value_to_table */
void F129_1668 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,arg3);
	
	RTGC;
	tr1 = F129_1670(Current, arg1, arg2);
	F129_1669(Current, arg1, tr1, arg3);
	RTLE;
}

/* {WSF_MIME_HANDLER_HELPER}.add_value_to_table */
void F129_1669 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(18);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc3);
	RTLR(5,loc5);
	RTLR(6,loc8);
	RTLR(7,tr2);
	RTLR(8,arg3);
	RTLR(9,loc10);
	RTLR(10,loc4);
	RTLR(11,loc2);
	RTLR(12,loc9);
	RTLR(13,loc11);
	RTLR(14,arg2);
	RTLR(15,loc12);
	RTLR(16,loc13);
	RTLR(17,tr3);
	
	RTGC;
	tr1 = RTOSCF(1671,F129_1671,(Current));
	loc1 = F465_3062(RTCV(tr1), arg1);
	loc6 = F735_5662(RTCV(loc1), (EIF_CHARACTER_32) 91U, ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
		loc7 = F735_5662(RTCV(loc1), (EIF_CHARACTER_32) 93U, (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN) (loc7 > loc6)) {
			loc3 = F740_5893(RTCV(loc1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			loc5 = F740_5893(RTCV(loc1), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), ti4_1);
			F740_5831(RTCV(loc5));
			F740_5832(RTCV(loc5));
			tr1 = RTLNS(820, 820, _OBJSIZ_3_0_0_0_0_0_0_0_);
			tr2 = F733_5610(RTCV(loc3));
			F821_6487(RTCV(tr1), tr2);
			loc8 = (EIF_REFERENCE) tr1;
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(RTCV(loc8) + _REFACS_2_);
			tb2 = F579_4641(RTCV(arg3), tr1);
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
				loc10 = tr1;
				loc10 = RTRV(eif_non_attached_type(820),loc10);
				tb1 = EIF_TEST(loc10);
			}
			if (tb1) {
				loc8 = (EIF_REFERENCE) loc10;
			}
			loc4 = F740_5893(RTCV(loc1), (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)));
			F740_5831(RTCV(loc4));
			F740_5832(RTCV(loc4));
			tb1 = F291_2518(RTCV(loc4));
			if (tb1) {
				ti4_1 = F821_6494(RTCV(loc8));
				F740_5851(RTCV(loc4), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			}
			loc2 = (EIF_REFERENCE) loc8;
			F740_5861(RTCV(loc3), (EIF_CHARACTER_32) 91U);
			F740_5847(RTCV(loc3), loc4);
			F740_5861(RTCV(loc3), (EIF_CHARACTER_32) 93U);
			for (;;) {
				tb1 = F291_2518(RTCV(loc5));
				if (tb1) break;
				loc9 = (EIF_REFERENCE) loc8;
				loc6 = F735_5662(RTCV(loc5), (EIF_CHARACTER_32) 91U, ((EIF_INTEGER_32) 1L));
				if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
					loc7 = F735_5662(RTCV(loc5), (EIF_CHARACTER_32) 93U, (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
					if ((EIF_BOOLEAN) (loc7 > loc6)) {
						tr1 = F821_6493(RTCV(loc9), loc4);
						loc11 = tr1;
						loc11 = RTRV(eif_non_attached_type(820),loc11);
						if (EIF_TEST(loc11)) {
							loc8 = (EIF_REFERENCE) loc11;
						} else {
							tr1 = RTLNS(820, 820, _OBJSIZ_3_0_0_0_0_0_0_0_);
							tr2 = F733_5610(RTCV(loc3));
							F821_6487(RTCV(tr1), tr2);
							loc8 = (EIF_REFERENCE) tr1;
							F821_6502(RTCV(loc9), loc8, loc4);
						}
						loc4 = F740_5893(RTCV(loc5), (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_1_1_0_2_);
						loc5 = F740_5893(RTCV(loc5), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), ti4_1);
						F740_5831(RTCV(loc5));
						F740_5832(RTCV(loc5));
						tb2 = F291_2518(RTCV(loc4));
						if (tb2) {
							ti4_1 = F821_6494(RTCV(loc8));
							F740_5851(RTCV(loc4), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
						}
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '[';
						F740_5861(RTCV(loc3), tw1);
						F740_5847(RTCV(loc3), loc4);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ']';
						F740_5861(RTCV(loc3), tw1);
					}
				} else {
					F740_5875(RTCV(loc5));
				}
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5274[Dtype(arg2)-817])(RTCV(arg2), loc3);
			F821_6502(RTCV(loc8), arg2, loc4);
		}
	}
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		tr1 = F733_5612(RTCV(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5274[Dtype(arg2)-817])(RTCV(arg2), tr1);
		loc2 = (EIF_REFERENCE) arg2;
	}
	tb2 = '\0';
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5271[Dtype(loc2)-817])(RTCV(loc2));
	tb3 = F579_4641(RTCV(arg3), tr1);
	if (tb3) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
		loc12 = tr1;
		tb2 = EIF_TEST(loc12);
	}
	if (tb2) {
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
		} else {
			loc13 = loc12;
			loc13 = RTRV(eif_non_attached_type(819),loc13);
			if (EIF_TEST(loc13)) {
				F820_6484(RTCV(loc13), loc2);
			} else {
				tr1 = RTLNS(819, 819, _OBJSIZ_2_0_0_0_0_0_0_0_);
				{
					static EIF_TYPE_INDEX typarr0[] = {798,816,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
					RT_SPECIAL_COUNT(tr3) = 2L;
					memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
				}
				*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) loc12;
				RTAR(tr3,loc12);
				*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) loc2;
				RTAR(tr3,loc2);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
				F820_6470(RTCV(tr1), tr2);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5271[Dtype(loc2)-817])(RTCV(loc2));
				F579_4679(RTCV(arg3), tr1, tr2);
			}
		}
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5271[Dtype(loc2)-817])(RTCV(loc2));
		F579_4679(RTCV(arg3), loc2, tr1);
	}
	RTLE;
}

/* {WSF_MIME_HANDLER_HELPER}.new_string_value */
EIF_REFERENCE F129_1670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	tr1 = RTLNS(818, 818, _OBJSIZ_4_0_0_0_0_0_0_0_);
	F819_6455(RTCV(tr1), arg1, arg2);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WSF_MIME_HANDLER_HELPER}.url_encoder */
static EIF_REFERENCE F129_1671_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1671);
#define Result RTOSR(1671)
	RTOC_NEW(Result);
	tr1 = RTLNS(465, 465, _OBJSIZ_0_1_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1671);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F129_1671 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1671,F129_1671_body,(Current));
}

void EIF_Minit108 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
