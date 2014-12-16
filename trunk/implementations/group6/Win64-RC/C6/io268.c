/*
 * Code for class IO_MEDIUM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "io268.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IO_MEDIUM}.last_string */
EIF_REFERENCE F512_3693 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {IO_MEDIUM}.dispose */
void F512_3718 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3302[dtype-514])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3304[dtype-512])(Current);
	}
	RTLE;
}

/* {IO_MEDIUM}.read_stream_thread_aware */
void F512_3762 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3346[Dtype(Current)-512])(Current, arg1);
}

/* {IO_MEDIUM}.read_line_thread_aware */
void F512_3765 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3349[Dtype(Current)-512])(Current);
}

void EIF_Minit268 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
