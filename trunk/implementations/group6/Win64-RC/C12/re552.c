/*
 * Code for class READABLE_INDEXABLE [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re552.h"

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
EIF_REFERENCE F570_4631 (EIF_REFERENCE Current)
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
		static EIF_TYPE_INDEX typarr0[] = {545,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y3696,Y3696_gen_type,Dftype(Current),523);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 545, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	F546_4583(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	F546_4603(RTCV(Result));
	RTLE;
	return Result;
}

void EIF_Minit552 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
