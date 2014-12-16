/*
 * Code for class ARGUMENTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar279.h"
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

/* {ARGUMENTS}.argument */
EIF_REFERENCE F536_4356 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOSCF(4379,F536_4379,(Current));
	Result = F537_4380(RTCV(Result), arg1);
	Result = F733_5610(RTCV(Result));
	RTLE;
	return Result;
}

/* {ARGUMENTS}.argument_array */
static EIF_REFERENCE F536_4357_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (4357);
#define Result RTOSR(4357)
	RTOC_NEW(Result);
	Result = F536_4378(Current);
	RTOSE (4357);
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F536_4357 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4357,F536_4357_body,(Current));
}

/* {ARGUMENTS}.new_cursor */
EIF_REFERENCE F536_4360 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F567_4631(RTCV(RTOSCF(4357,F536_4357,(Current))));
	RTLE;
	return Result;
}

/* {ARGUMENTS}.argument_count */
EIF_INTEGER_32 F536_4374 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count (RTOSCF(4379,F536_4379,(Current)));
	RTLE;
	return Result;
}

/* {ARGUMENTS}.internal_argument_array */
EIF_REFERENCE F536_4378 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {600,740,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 600, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = RTMS_EX_H("",0,0);
	ti4_1 = F536_4374(Current);
	F601_4814(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F219_2481(RTCV(Result));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > F536_4374(Current))) break;
		tr1 = F536_4356(Current, loc1);
		F601_4839(RTCV(Result), tr1, loc1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {ARGUMENTS}.internal_arguments */
static EIF_REFERENCE F536_4379_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (4379);
#define Result RTOSR(4379)
	RTOC_NEW(Result);
	tr1 = RTLNS(536, 536, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (4379);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F536_4379 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4379,F536_4379_body,(Current));
}

void EIF_Minit279 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
