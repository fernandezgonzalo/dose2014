/*
 * Code for class LINKED_STACK [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li566.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_STACK}.item */
EIF_BOOLEAN F664_4977 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_0_);
	RTLE;
	return Result;
}

/* {LINKED_STACK}.force */
void F664_4978 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F662_4957(Current, arg1);
}

/* {LINKED_STACK}.extend */
void F664_4979 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F662_4957(Current, arg1);
}

/* {LINKED_STACK}.remove */
void F664_4981 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F662_4950(Current);
	F662_4964(Current);
	RTLE;
}

void EIF_Minit566 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
