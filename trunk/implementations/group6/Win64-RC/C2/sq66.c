/*
 * Code for class SQLITE_FILE_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq66.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_FILE_SOURCE}.make */
void F78_1020 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(746));
	F747_6066(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {SQLITE_FILE_SOURCE}.file_path */
EIF_REFERENCE F78_1022 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SQLITE_FILE_SOURCE}.locator */
EIF_REFERENCE F78_1023 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr2 = F747_6104(RTCV(tr2));
	F737_5725(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

void EIF_Minit66 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
