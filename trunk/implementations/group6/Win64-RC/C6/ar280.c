/*
 * Code for class ARGUMENTS_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar280.h"
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

/* {ARGUMENTS_32}.argument */
EIF_REFERENCE F537_4380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTOSCF(4398,F537_4398,(Current));
	Result = F601_4819(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {ARGUMENTS_32}.new_cursor */
EIF_REFERENCE F537_4384 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F567_4631(RTCV(RTOSCF(4398,F537_4398,(Current))));
	RTLE;
	return Result;
}

/* {ARGUMENTS_32}.argument_count */
EIF_INTEGER_32 F537_4394 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count (Current);
	return Result;
}

/* {ARGUMENTS_32}.internal_argument_array */
static EIF_REFERENCE F537_4398_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOSP (4398);
#define Result RTOSR(4398)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {600,735,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 600, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = RTLNS(735, 735, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F733_5554(RTCV(tr2));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count (Current);
	F601_4814(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F219_2481(RTCV(Result));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count (Current))) break;
		tr1 = F537_4399(Current, loc1);
		F601_4839(RTCV(Result), tr1, loc1);
		loc1++;
	}
	RTOSE (4398);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F537_4398 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4398,F537_4398_body,(Current));
}

/* {ARGUMENTS_32}.i_th_argument_string */
EIF_REFERENCE F537_4399 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(493, 493, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F494_3306(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = (EIF_POINTER) eif_builtin_ARGUMENTS_32_i_th_argument_pointer (Current, arg1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		F494_3322(RTCV(loc1), loc2);
		tr1 = RTLNS(735, 735, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr2 = F494_3310(RTCV(loc1));
		F735_5652(RTCV(tr1), tr2);
		Result = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(735, 735, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F733_5554(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {ARGUMENTS_32}.i_th_argument_pointer */
EIF_POINTER F537_4400 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) eif_builtin_ARGUMENTS_32_i_th_argument_pointer (Current, arg1);
	return Result;
}

void EIF_Minit280 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
