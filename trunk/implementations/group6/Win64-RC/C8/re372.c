/*
 * Code for class reference REAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re372.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_32}.is_less */
EIF_BOOLEAN F854_7368 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(854, 854, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	Result = F853_7338(Current, tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.truncated_to_integer */
EIF_INTEGER_32 F854_7372 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F853_7349(Current);
}

/* {REAL_32}.to_double */
EIF_REAL_64 F854_7374 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_64) F853_7351(Current);
}

/* {REAL_32}.out */
EIF_REFERENCE F854_7384 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F853_7366(Current);
}

void EIF_Minit372 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
