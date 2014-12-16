/*
 * Code for class ISE_RUNTIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is31.h"
#include "eif_gen_conf.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_455
static EIF_INTEGER_32 inline_F31_455 (EIF_INTEGER_32 arg1)
{
	return eif_non_attached_type((EIF_TYPE_INDEX) arg1)
	;
}
#define INLINE_F31_455
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_RUNTIME}.type_conforms_to */
EIF_BOOLEAN F31_449 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_gen_conf((int16) arg1, (int16) arg2));
	
	return Result;
}

/* {ISE_RUNTIME}.detachable_type */
EIF_INTEGER_32 F31_455 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F31_455 ((EIF_INTEGER_32) arg1);
	return Result;
}

void EIF_Minit31 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
