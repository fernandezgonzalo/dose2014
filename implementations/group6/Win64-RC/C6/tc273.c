/*
 * Code for class TCP_STREAM_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tc273.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TCP_STREAM_SOCKET}.make */
void F517_3979 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F516_3941(Current);
	F515_3922(Current);
	RTLE;
}

/* {TCP_STREAM_SOCKET}.make_server_by_address_and_port */
void F517_3980 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	F517_3979(Current);
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y3369,Y3369_gen_type,Dftype(Current),512)));
	F209_2361(RTCV(tr1), arg1, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F515_3908(Current);
	RTLE;
}

/* {TCP_STREAM_SOCKET}.put_readable_string_8 */
void F517_3982 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F432_2731(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	F513_3803(Current, tr1, ((EIF_INTEGER_32) 0L), ti4_1);
	RTLE;
}

/* {TCP_STREAM_SOCKET}.try_ready_for_reading */
EIF_BOOLEAN F517_3983 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F515_3906(Current);
	loc1 = (EIF_INTEGER_32) c_select_poll_with_timeout(ti4_1, (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 0L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

void EIF_Minit273 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
