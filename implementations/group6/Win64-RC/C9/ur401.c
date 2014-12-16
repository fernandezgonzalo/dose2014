/*
 * Code for class URI_TEMPLATE_EXPRESSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ur401.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {URI_TEMPLATE_EXPRESSION}.make */
void F929_8013 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_0_) = (EIF_INTEGER_32) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) arg3;
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	RTLE;
}

/* {URI_TEMPLATE_EXPRESSION}.analyze */
void F929_8014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc5);
	RTLR(5,tr1);
	RTLR(6,loc7);
	RTLR(7,loc6);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_)) {
		loc1 = *(EIF_REFERENCE *)(Current);
		tb1 = F286_2518(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb1) {
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
			tc1 = F741_5903(RTCV(loc1), ((EIF_INTEGER_32) 1L));
			switch (tc1) {
				case (EIF_CHARACTER_8) '+':
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '+';
					break;
				case (EIF_CHARACTER_8) '.':
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
					break;
				case (EIF_CHARACTER_8) '/':
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
					break;
				case (EIF_CHARACTER_8) ';':
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
					break;
				case (EIF_CHARACTER_8) '\?':
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\?';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\?';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
					break;
				case (EIF_CHARACTER_8) '&':
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
					break;
				case (EIF_CHARACTER_8) '#':
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '#';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '#';
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
					break;
				case (EIF_CHARACTER_8) '!':
				case (EIF_CHARACTER_8) '@':
				case (EIF_CHARACTER_8) '|':
					tc1 = F741_5903(RTCV(loc1), ((EIF_INTEGER_32) 1L));
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
					break;
				default:
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
					break;
			}
			if ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) != (EIF_CHARACTER_8) '\000')) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
				loc2 = F741_5984(RTCV(loc1), ((EIF_INTEGER_32) 2L), ti4_1);
			} else {
				loc2 = (EIF_REFERENCE) loc1;
			}
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
			loc3 = F733_5632(RTCV(loc2), tw1);
			{
				static EIF_TYPE_INDEX typarr0[] = {665,860,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[Dtype(loc3)-517])(RTCV(loc3));
			F666_5008(RTCV(tr1), ti4_1);
			loc5 = (EIF_REFERENCE) tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[Dtype(loc3)-395])(RTCV(loc3));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2245[Dtype(loc3)-395])(RTCV(loc3));
				if (tb1) break;
				loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2279[Dtype(loc3)-395])(RTCV(loc3));
				loc7 = (EIF_REFERENCE) NULL;
				loc4 = F737_5734(RTCV(loc2), (EIF_CHARACTER_8) '=', ((EIF_INTEGER_32) 1L));
				if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
					loc6 = F741_5984(RTCV(loc2), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
					loc2 = F741_5984(RTCV(loc2), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)), ti4_1);
				} else {
					loc6 = (EIF_REFERENCE) loc2;
					loc2 = (EIF_REFERENCE) NULL;
				}
				loc7 = (EIF_REFERENCE) NULL;
				loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				loc9 = *(EIF_INTEGER_32 *)(RTCV(loc6)+ _LNGOFF_1_1_0_2_);
				for (;;) {
					if ((EIF_BOOLEAN) (loc8 > loc9)) break;
					tc1 = F741_5903(RTCV(loc6), loc8);
					switch (tc1) {
						case (EIF_CHARACTER_8) '*':
						case (EIF_CHARACTER_8) '+':
						case (EIF_CHARACTER_8) ':':
						case (EIF_CHARACTER_8) '^':
							loc7 = F741_5984(RTCV(loc6), loc8, loc9);
							loc6 = F741_5984(RTCV(loc6), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 1L)));
							loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
							break;
						default:
							loc8++;
							break;
					}
				}
				tr1 = RTLNS(860, 860, _OBJSIZ_4_5_0_0_0_0_0_0_);
				F861_7488(RTCV(tr1), Current, loc6, loc2, loc7);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2318[Dtype(loc5)-398])(RTCV(loc5), tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[Dtype(loc3)-395])(RTCV(loc3));
			}
			RTAR(Current, loc5);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc5;
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

/* {URI_TEMPLATE_EXPRESSION}.end_position */
EIF_INTEGER_32 F929_8016 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) + ((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

/* {URI_TEMPLATE_EXPRESSION}.expression */
EIF_REFERENCE F929_8017 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {URI_TEMPLATE_EXPRESSION}.variables */
EIF_REFERENCE F929_8023 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit401 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
