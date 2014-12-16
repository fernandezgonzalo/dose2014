/*
 * Code for class SQLITE_SHARED_API
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq393.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_SHARED_API}.sqlite_api */
static EIF_REFERENCE F921_7872_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (7872);
#define Result RTOSR(7872)
	RTOC_NEW(Result);
	tr1 = RTLNS(938, 938, _OBJSIZ_0_0_0_0_0_0_0_0_);
	F939_8209(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (7872);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F921_7872 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(7872,F921_7872_body,(Current));
}

/* {SQLITE_SHARED_API}.is_interface_usable */
EIF_BOOLEAN F921_7873 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F939_8215(RTCV(RTOSCF(7872,F921_7872,(Current))));
	RTLE;
	return Result;
}

/* {SQLITE_SHARED_API}.is_sqlite_available */
static EIF_BOOLEAN F921_7874_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOSP (7874);
#define Result RTOSR(7874)
	Result = F939_8215(RTCV(RTOSCF(7872,F921_7872,(Current))));
	RTOSE (7874);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F921_7874 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(7874,F921_7874_body,(Current));
}

void EIF_Minit393 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
