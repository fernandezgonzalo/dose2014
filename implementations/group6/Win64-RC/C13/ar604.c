/*
 * Code for class ARRAYED_STACK [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar604.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_STACK}.extend */
void F678_5072 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F669_5048(Current, arg1);
	F669_5039(Current);
	RTLE;
}

/* {ARRAYED_STACK}.remove */
void F678_5075 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F669_5060(Current);
	F669_5039(Current);
	RTLE;
}

void EIF_Minit604 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
