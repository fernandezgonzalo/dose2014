/*
 * Code for class OPERATING_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "op32.h"
#include "eif_dir.h"
#include "eif_path_name.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OPERATING_ENVIRONMENT}.directory_separator */
static EIF_CHARACTER_8 F44_545_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (545);
#define Result RTOSR(545)
	Result = (EIF_CHARACTER_8) eif_dir_separator();
	RTOSE (545);
	RTEE;
	return Result;
#undef Result
}

EIF_CHARACTER_8 F44_545 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(545,F44_545_body,(Current));
}

/* {OPERATING_ENVIRONMENT}.case_sensitive_path_names */
EIF_BOOLEAN F44_549 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names());
	
	return Result;
}

/* {OPERATING_ENVIRONMENT}.c_dir_separator */
EIF_CHARACTER_8 F44_550 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	Result = (EIF_CHARACTER_8) eif_dir_separator();
	
	return Result;
}

void EIF_Minit32 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
