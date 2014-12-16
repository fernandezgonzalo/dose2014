/*
 * Code for class SQLITE_MODIFY_STATEMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq399.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_MODIFY_STATEMENT}.execute */
void F927_8008 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F925_7992(Current, NULL, NULL);
}

/* {SQLITE_MODIFY_STATEMENT}.execute_with_arguments */
void F927_8009 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F215_2456(Current, arg1);
	F925_7992(Current, NULL, tr1);
	RTLE;
}

void EIF_Minit399 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
