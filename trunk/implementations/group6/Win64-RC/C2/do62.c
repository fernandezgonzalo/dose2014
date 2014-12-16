/*
 * Code for class DOUBLE_MATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "do62.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DOUBLE_MATH}.log */
EIF_REAL_64 F74_1001 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) log((double) arg1);
	
	return Result;
}

/* {DOUBLE_MATH}.floor */
EIF_REAL_64 F74_1003 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) floor((double) arg1);
	
	return Result;
}

void EIF_Minit62 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
