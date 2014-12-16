/*
 * Code for class EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex83.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F95_1350 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	
	RTGC;
	tr1 = RTLNS(163, 163, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = RTOSCF(2091,F164_2091,(RTCV(tr1)));
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1288[Dtype(Result)-94])(RTCV(Result));
	RTLE;
	return Result;
}

/* {EXCEPTION_MANAGER}.raise */
void F95_1351 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	
	RTGC;
	tr1 = RTLNS(163, 163, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(2091,F164_2091,(RTCV(tr1)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1289[Dtype(tr1)-94])(RTCV(tr1), arg1);
	RTLE;
}

/* {EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F95_1357 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	
	RTGC;
	tr1 = RTLNS(163, 163, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(2091,F164_2091,(RTCV(tr1)));
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1295[Dtype(tr1)-94])(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F95_1360 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

void EIF_Minit83 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
