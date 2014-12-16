/*
 * Code for class SQLITE_TYPE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq16.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_TYPE}.integer */
EIF_INTEGER_32 F16_181 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_INTEGER;
	return Result;
}

/* {SQLITE_TYPE}.float */
EIF_INTEGER_32 F16_182 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_FLOAT;
	return Result;
}

/* {SQLITE_TYPE}.text */
EIF_INTEGER_32 F16_183 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_TEXT;
	return Result;
}

/* {SQLITE_TYPE}.blob */
EIF_INTEGER_32 F16_184 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_BLOB;
	return Result;
}

/* {SQLITE_TYPE}.null */
EIF_INTEGER_32 F16_185 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_NULL;
	return Result;
}

void EIF_Minit16 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
