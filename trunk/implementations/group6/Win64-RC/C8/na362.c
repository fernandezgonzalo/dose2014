/*
 * Code for class NATURAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na362.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_32}.is_less */
EIF_BOOLEAN F846_7117 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	Result = F844_7062(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.plus */
EIF_NATURAL_32 F846_7118 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F844_7071(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.minus */
EIF_NATURAL_32 F846_7119 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F844_7072(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.product */
EIF_NATURAL_32 F846_7120 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F844_7073(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.integer_quotient */
EIF_NATURAL_32 F846_7123 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F844_7077(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.integer_remainder */
EIF_NATURAL_32 F846_7124 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F844_7078(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.as_natural_8 */
EIF_NATURAL_8 F846_7126 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) F844_7083(Current);
}

/* {NATURAL_32}.as_natural_16 */
EIF_NATURAL_16 F846_7127 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) F844_7084(Current);
}

/* {NATURAL_32}.as_natural_32 */
EIF_NATURAL_32 F846_7128 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F844_7085(Current);
}

/* {NATURAL_32}.as_natural_64 */
EIF_NATURAL_64 F846_7129 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F844_7086(Current);
}

/* {NATURAL_32}.as_integer_32 */
EIF_INTEGER_32 F846_7132 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F844_7089(Current);
}

/* {NATURAL_32}.as_integer_64 */
EIF_INTEGER_64 F846_7133 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) F844_7090(Current);
}

/* {NATURAL_32}.to_character_8 */
EIF_CHARACTER_8 F846_7136 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F844_7104(Current);
}

/* {NATURAL_32}.to_character_32 */
EIF_CHARACTER_32 F846_7137 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F844_7105(Current);
}

/* {NATURAL_32}.bit_and */
EIF_NATURAL_32 F846_7138 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F844_7106(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.bit_or */
EIF_NATURAL_32 F846_7139 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F844_7107(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.bit_shift_left */
EIF_NATURAL_32 F846_7142 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_32 *)F844_7111(Current, arg1);
}

/* {NATURAL_32}.bit_shift_right */
EIF_NATURAL_32 F846_7143 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_32 *)F844_7112(Current, arg1);
}

void EIF_Minit362 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
