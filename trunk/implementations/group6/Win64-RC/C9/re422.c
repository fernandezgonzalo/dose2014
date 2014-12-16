/*
 * Code for class READABLE_INDEXABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re422.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READABLE_INDEXABLE}.new_cursor */
EIF_REFERENCE F567_4631 (EIF_REFERENCE Current)
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
	{
		static EIF_TYPE_INDEX typarr0[] = {542,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y3696,Y3696_gen_type,Dftype(Current),523);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 542, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3911[Dtype(tr1)-542])(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3928[Dtype(Result)-542])(RTCV(Result));
	RTLE;
	return Result;
}

void EIF_Minit422 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
