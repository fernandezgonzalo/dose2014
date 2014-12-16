/*
 * Code for class SQLITE_BINDING_HELPERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq192.h"
#include <sqlite3.h>
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

/* {SQLITE_BINDING_HELPERS}.iterable_min_count_or_value */
EIF_INTEGER_32 F214_2451 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc2);
	
	RTGC;
	loc1 = arg1;
	{
		static EIF_TYPE_INDEX typarr0[] = {280,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(eif_non_attached_type(typres0),loc1);
	}
	if (EIF_TEST(loc1)) {
		Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[Dtype(loc1)-517])(RTCV(loc1));
		Result = eif_min_int32 (Result,arg2);
	} else {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3695[Dtype(arg1)-535])(RTCV(arg1));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc2)-537])(RTCV(loc2));
			if (tb1) break;
			if ((EIF_BOOLEAN) (Result >= arg2)) break;
			Result++;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc2)-537])(RTCV(loc2));
		}
	}
	RTLE;
	return Result;
}

/* {SQLITE_BINDING_HELPERS}.sqlite_limit_variable_number */
EIF_INTEGER_32 F214_2453 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_LIMIT_VARIABLE_NUMBER;
	return Result;
}

void EIF_Minit192 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
