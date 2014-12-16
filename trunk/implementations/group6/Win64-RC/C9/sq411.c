/*
 * Code for class SQLITE_API
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq411.h"
#include "eif_built_in.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_API}.make */
void F939_8209 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOSCF(8213,F939_8213,(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc1)-97])(RTCV(loc1)));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		if (F939_8217(Current)) {
			ti4_1 = (EIF_INTEGER_32) SQLITE_CONFIG_SERIALIZED;
			F939_8214(Current, ti4_1);
		} else {
			ti4_1 = (EIF_INTEGER_32) SQLITE_CONFIG_SINGLETHREAD;
			F939_8214(Current, ti4_1);
		}
		loc2 = F136_1697(Current, Current);
		if (F213_2444(Current, loc2)) {
			F102_1422(RTCV(loc1), ((EIF_INTEGER_32) 1L));
		} else {
			F213_2446(Current, loc2);
		}
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc1)-97])(RTCV(loc1)));
		F102_1422(RTCV(loc1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {SQLITE_API}.initialization_count */
static EIF_REFERENCE F939_8213_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8213);
#define Result RTOSR(8213)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {101,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 101, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F102_1422(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (8213);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F939_8213 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8213,F939_8213_body,(Current));
}

/* {SQLITE_API}.set_threading_mode */
void F939_8214 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) SQLITE_CONFIG_SERIALIZED;
	loc1 = F136_1703(Current, Current, ti4_1);
	RTLE;
}

/* {SQLITE_API}.is_interface_usable */
EIF_BOOLEAN F939_8215 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F939_8216(Current);
}

/* {SQLITE_API}.is_initialized */
EIF_BOOLEAN F939_8216 (EIF_REFERENCE Current)
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
	tr1 = RTOSCF(8213,F939_8213,(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(tr1)-97])(RTCV(tr1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {SQLITE_API}.is_thread_safe */
EIF_BOOLEAN F939_8217 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable) {
		Result = (EIF_BOOLEAN)(F136_1699(Current, Current) != ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

void EIF_Minit411 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
