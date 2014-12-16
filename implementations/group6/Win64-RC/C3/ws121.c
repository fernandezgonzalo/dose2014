/*
 * Code for class WSF_APPLICATION_X_WWW_FORM_URLENCODED_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws121.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_APPLICATION_X_WWW_FORM_URLENCODED_HANDLER}.valid_content_type */
EIF_BOOLEAN F143_1762 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTOSCF(2048,F162_2048,(Current));
	Result = F796_6335(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {WSF_APPLICATION_X_WWW_FORM_URLENCODED_HANDLER}.handle */
void F143_1763 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg4);
	RTLR(4,tr1);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,loc8);
	RTLR(8,arg3);
	
	RTGC;
	loc1 = F129_1667(Current, arg2);
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		tr1 = F733_5610(RTCV(loc1));
		F98_1423(RTCV(arg4), tr1);
	}
	loc2 = *(EIF_INTEGER_32 *)(RTCV(loc1) + O4737[Dtype(loc1)-736]);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) break;
			loc4 = F737_5734(RTCV(loc1), (EIF_CHARACTER_8) '&', loc3);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
				loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(loc1)-735])(RTCV(loc1), loc3, loc2);
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			} else {
				loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(loc1)-735])(RTCV(loc1), loc3, (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
			}
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc6)-735])(RTCV(loc6));
			if ((EIF_BOOLEAN) !tb1) {
				loc5 = F737_5734(RTCV(loc6), (EIF_CHARACTER_8) '=', ((EIF_INTEGER_32) 1L));
				if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
					loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(loc6)-735])(RTCV(loc6), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc6) + O4737[Dtype(loc6)-736]);
					loc8 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(loc6)-735])(RTCV(loc6), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)), ti4_1);
					F129_1668(Current, loc7, loc8, arg3);
				}
			}
		}
	}
	RTLE;
}

void EIF_Minit121 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
