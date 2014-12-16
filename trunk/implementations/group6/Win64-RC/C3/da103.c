/*
 * Code for class DATE_TIME_MEASUREMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da103.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_MEASUREMENT}.year */
EIF_INTEGER_32 F123_1619 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1506[Dtype(Current)-123])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1520[Dtype(tr1)-443])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.month */
EIF_INTEGER_32 F123_1620 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1506[Dtype(Current)-123])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1519[Dtype(tr1)-443])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.day */
EIF_INTEGER_32 F123_1621 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1506[Dtype(Current)-123])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1518[Dtype(tr1)-443])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.hour */
EIF_INTEGER_32 F123_1622 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1507[Dtype(Current)-123])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1473[Dtype(tr1)-120])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.minute */
EIF_INTEGER_32 F123_1623 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1507[Dtype(Current)-123])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1474[Dtype(tr1)-120])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.second */
EIF_INTEGER_32 F123_1624 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1507[Dtype(Current)-123])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1475[Dtype(tr1)-120])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.fine_second */
EIF_REAL_64 F123_1625 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1507[Dtype(Current)-123])(Current);
	Result = (FUNCTION_CAST(EIF_REAL_64, (EIF_REFERENCE)) R1476[Dtype(tr1)-120])(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit103 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
