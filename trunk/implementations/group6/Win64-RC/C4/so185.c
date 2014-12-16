/*
 * Code for class SOCKET_RESOURCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "so185.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SOCKET_RESOURCES}.error_number */
EIF_INTEGER_32 F207_2247 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) c_errorno();
}

/* {SOCKET_RESOURCES}.socket_ok */
EIF_BOOLEAN F207_2248 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F207_2247(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {SOCKET_RESOURCES}.level_sol_socket */
EIF_INTEGER_32 F207_2272 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) level_sol_socket();
	
	return Result;
}

/* {SOCKET_RESOURCES}.so_reuse_addr */
EIF_INTEGER_32 F207_2302 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) so_reuse_addr();
	
	return Result;
}

/* {SOCKET_RESOURCES}.c_errorno */
EIF_INTEGER_32 F207_2305 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) c_errorno();
	
	return Result;
}

/* {SOCKET_RESOURCES}.c_reset_error */
void F207_2306 (EIF_REFERENCE Current)
{
	GTCX
	
	c_reset_error();
	
}

/* {SOCKET_RESOURCES}.sock_stream */
EIF_INTEGER_32 F207_2329 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) sock_stream();
	
	return Result;
}

/* {SOCKET_RESOURCES}.af_inet */
EIF_INTEGER_32 F207_2331 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) af_inet();
	
	return Result;
}

/* {SOCKET_RESOURCES}.af_inet6 */
EIF_INTEGER_32 F207_2332 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) af_inet6();
	
	return Result;
}

void EIF_Minit185 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
