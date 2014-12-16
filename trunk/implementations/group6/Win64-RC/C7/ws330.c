/*
 * Code for class WSF_STARTS_WITH_MAPPING_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws330.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_STARTS_WITH_MAPPING_I}.make */
void F813_6407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	F814_6417(Current, arg2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WSF_STARTS_WITH_MAPPING_I}.associated_resource */
EIF_REFERENCE F813_6408 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {WSF_STARTS_WITH_MAPPING_I}.uri */
EIF_REFERENCE F813_6409 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_STARTS_WITH_MAPPING_I}.description */

EIF_REFERENCE F813_6411 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (6411,RTMS32_EX_H("S\000\000\000t\000\000\000a\000\000\000r\000\000\000t\000\000\000s\000\000\000-\000\000\000W\000\000\000i\000\000\000t\000\000\000h\000\000\000-\000\000\000U\000\000\000R\000\000\000I\000\000\000",15,199176521));
}

/* {WSF_STARTS_WITH_MAPPING_I}.is_mapping */
EIF_BOOLEAN F813_6412 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,arg2);
	
	RTGC;
	loc1 = F811_6405(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F813_6415(Current, tr1, arg2);
	tb1 = F737_5756(RTCV(loc1), loc2);
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {WSF_STARTS_WITH_MAPPING_I}.try */
void F813_6413 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,arg4);
	RTLR(6,arg3);
	RTLR(7,arg2);
	
	RTGC;
	loc1 = F811_6405(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F813_6415(Current, tr1, arg4);
	tb1 = F737_5756(RTCV(loc1), loc2);
	if (tb1) {
		F25_355(RTCV(arg3), *(EIF_REFERENCE *)(Current + _REFACS_1_));
		F539_4429(RTCV(arg4), Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F814_6418(Current, tr1, loc2, arg1, arg2);
		{
		/* INLINED CODE (execute_after) */
		/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {WSF_STARTS_WITH_MAPPING_I}.based_uri */
EIF_REFERENCE F813_6415 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_2_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F737_5725(RTCV(tr1), loc2);
		loc1 = (EIF_REFERENCE) tr1;
		F741_5941(RTCV(loc1), arg1);
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}/* NOTREACHED */
	
}

void EIF_Minit330 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
