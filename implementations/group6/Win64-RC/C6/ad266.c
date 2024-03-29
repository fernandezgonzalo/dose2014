/*
 * Code for class ADDRINFO_1
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ad266.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ADDRINFO_1}.family */
EIF_INTEGER_32 F510_3667 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) en_addrinfo_ai_family(tp1);
}

/* {ADDRINFO_1}.addr */
EIF_POINTER F510_3672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) en_addrinfo_ai_addr(tp1);
}

/* {ADDRINFO_1}.next */
EIF_REFERENCE F510_3673 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	loc1 = (EIF_POINTER) en_addrinfo_ai_next(tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tr1 = RTLNS(510, 510, _OBJSIZ_0_0_0_0_0_1_0_0_);
		F509_3662(RTCV(tr1), loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {ADDRINFO_1}.c_ai_family */
EIF_INTEGER_32 F510_3675 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_addrinfo_ai_family(arg1);
	
	return Result;
}

/* {ADDRINFO_1}.c_ai_addr */
EIF_POINTER F510_3680 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) en_addrinfo_ai_addr(arg1);
	
	return Result;
}

/* {ADDRINFO_1}.c_ai_next */
EIF_POINTER F510_3681 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) en_addrinfo_ai_next(arg1);
	
	return Result;
}

/* {ADDRINFO_1}.c_free */
void F510_3682 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	en_free_addrinfo(arg1);
	
}

void EIF_Minit266 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
