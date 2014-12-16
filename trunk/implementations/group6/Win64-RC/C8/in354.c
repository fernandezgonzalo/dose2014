/*
 * Code for class reference INTEGER_16
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in354.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_16}.is_less */
EIF_BOOLEAN F836_6841 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(836, 836, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	Result = F835_6782(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.plus */
EIF_INTEGER_16 F836_6842 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(836, 836, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F835_6792(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.opposite */
EIF_INTEGER_16 F836_6847 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_16 *)F835_6797(Current);
}

/* {INTEGER_16}.integer_quotient */
EIF_INTEGER_16 F836_6848 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(836, 836, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F835_6798(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.integer_remainder */
EIF_INTEGER_16 F836_6849 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(836, 836, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F835_6799(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.as_natural_64 */
EIF_NATURAL_64 F836_6854 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F835_6808(Current);
}

/* {INTEGER_16}.as_integer_32 */
EIF_INTEGER_32 F836_6857 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F835_6811(Current);
}

/* {INTEGER_16}.as_integer_64 */
EIF_INTEGER_64 F836_6858 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) F835_6812(Current);
}

/* {INTEGER_16}.to_character_8 */
EIF_CHARACTER_8 F836_6861 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F835_6827(Current);
}

void EIF_Minit354 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
