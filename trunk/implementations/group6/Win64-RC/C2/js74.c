/*
 * Code for class JSON_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js74.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_TOKENS}.is_close_token */
EIF_BOOLEAN F86_1228 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) ']':
		case (EIF_CHARACTER_8) '}':
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	return Result;
}

/* {JSON_TOKENS}.is_special_character */
EIF_BOOLEAN F86_1229 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	switch (arg1) {
		case (EIF_CHARACTER_8) '\010':
		case (EIF_CHARACTER_8) '\011':
		case (EIF_CHARACTER_8) '\012':
		case (EIF_CHARACTER_8) '\014':
		case (EIF_CHARACTER_8) '\015':
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) '\\':
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	return Result;
}

/* {JSON_TOKENS}.is_special_control */
EIF_BOOLEAN F86_1230 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	switch (arg1) {
		case (EIF_CHARACTER_8) 'b':
		case (EIF_CHARACTER_8) 'f':
		case (EIF_CHARACTER_8) 'n':
		case (EIF_CHARACTER_8) 'r':
		case (EIF_CHARACTER_8) 't':
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	return Result;
}

void EIF_Minit74 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
