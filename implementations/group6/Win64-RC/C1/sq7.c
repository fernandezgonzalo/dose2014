/*
 * Code for class SQLITE_THREADING_MODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq7.h"
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

/* {SQLITE_THREADING_MODE}.single_threaded */
EIF_INTEGER_32 F7_88 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_CONFIG_SINGLETHREAD;
	return Result;
}

/* {SQLITE_THREADING_MODE}.multi_threaded_serialized */
EIF_INTEGER_32 F7_90 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_CONFIG_SERIALIZED;
	return Result;
}

void EIF_Minit7 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
