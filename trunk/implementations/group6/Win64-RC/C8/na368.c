/*
 * Code for class NATURAL_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na368.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_8}.is_less */
EIF_BOOLEAN F852_7299 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(851, 851, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	Result = F850_7243(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.plus */
EIF_NATURAL_8 F852_7300 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(851, 851, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F850_7252(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.integer_quotient */
EIF_NATURAL_8 F852_7305 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(851, 851, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F850_7258(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.integer_remainder */
EIF_NATURAL_8 F852_7306 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(851, 851, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F850_7259(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.as_natural_16 */
EIF_NATURAL_16 F852_7309 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) F850_7266(Current);
}

/* {NATURAL_8}.as_natural_32 */
EIF_NATURAL_32 F852_7310 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F850_7267(Current);
}

/* {NATURAL_8}.as_natural_64 */
EIF_NATURAL_64 F852_7311 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F850_7268(Current);
}

/* {NATURAL_8}.as_integer_32 */
EIF_INTEGER_32 F852_7314 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F850_7271(Current);
}

/* {NATURAL_8}.to_character_8 */
EIF_CHARACTER_8 F852_7318 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F850_7286(Current);
}

/* {NATURAL_8}.to_character_32 */
EIF_CHARACTER_32 F852_7319 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F850_7287(Current);
}

/* {NATURAL_8}.bit_and */
EIF_NATURAL_8 F852_7320 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(851, 851, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F850_7288(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.bit_or */
EIF_NATURAL_8 F852_7321 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(851, 851, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F850_7289(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

void EIF_Minit368 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
