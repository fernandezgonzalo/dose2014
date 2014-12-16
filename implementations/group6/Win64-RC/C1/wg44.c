/*
 * Code for class WGI_OUTPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg44.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_OUTPUT_STREAM}.put_header_line */
void F56_844 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F161_2027(Current, arg1);
	F56_845(Current);
	RTLE;
}

/* {WGI_OUTPUT_STREAM}.put_crlf */
void F56_845 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(849,F56_849,(Current));
	F161_2027(Current, tr1);
	RTLE;
}

/* {WGI_OUTPUT_STREAM}.crlf */

EIF_REFERENCE F56_849 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (849,RTMS_EX_H("\015\012",2,3338));
}

void EIF_Minit44 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
