/*
 * Code for class SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "so269.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SOCKET}.was_error */
EIF_BOOLEAN F513_3773 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL);
}

/* {SOCKET}.socket_ok */
EIF_BOOLEAN F513_3774 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if (F207_2248(Current)) {
		Result = (EIF_BOOLEAN) !F513_3773(Current);
	}
	RTLE;
	return Result;
}

/* {SOCKET}.cleanup */
void F513_3785 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3294[Dtype(Current)-512])(Current)) {
		F513_3786(Current);
	}
	RTLE;
}

/* {SOCKET}.close */
void F513_3786 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O3421[dtype-512]) || *(EIF_BOOLEAN *)(Current + O3422[dtype-512]))) {
		F515_3928(Current);
	}
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3294[dtype-512])(Current)) {
		F515_3905(Current);
	}
	RTLE;
}

/* {SOCKET}.descriptor_available */
EIF_BOOLEAN F513_3789 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3423[Dtype(Current) - 512]);
}


/* {SOCKET}.address */
EIF_REFERENCE F513_3793 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SOCKET}.peer_address */
EIF_REFERENCE F513_3794 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SOCKET}.address_type */
EIF_REFERENCE F513_3795 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
		RTCF0;
	RTEC (EN_POST);
	return (EIF_REFERENCE) 0;
}

/* {SOCKET}.set_peer_address */
void F513_3796 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {SOCKET}.put_managed_pointer */
void F513_3803 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti4_1 = F515_3906(Current);
	tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg2);
	c_put_stream(ti4_1, tp1, arg3);
	RTLE;
}

/* {SOCKET}.exists */
EIF_BOOLEAN F513_3825 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current + O3423[Dtype(Current)-512])) {
		Result = (EIF_BOOLEAN) (F515_3906(Current) >= ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {SOCKET}.is_open_write */
EIF_BOOLEAN F513_3826 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3422[Dtype(Current) - 512]);
}


/* {SOCKET}.is_open_read */
EIF_BOOLEAN F513_3827 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3421[Dtype(Current) - 512]);
}


/* {SOCKET}.readable */
EIF_BOOLEAN F513_3831 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3294[dtype-512])(Current)) {
		Result = *(EIF_BOOLEAN *)(Current + O3421[dtype-512]);
	}
	RTLE;
	return Result;
}

/* {SOCKET}.read_character */
void F513_3837 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F513_3882(Current);
	F513_3855(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3293[dtype-511]) != ((EIF_INTEGER_32) 1L))) {
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = F513_3882(Current);
		tc1 = F507_3536(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		*(EIF_CHARACTER_8 *)(Current + O3279[dtype-511]) = (EIF_CHARACTER_8) tc1;
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {SOCKET}.read_stream */
void F513_3853 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F432_2732(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_REFERENCE) tr1;
	ti4_1 = F515_3906(Current);
	tp1 = F432_2750(RTCV(loc1));
	loc2 = (EIF_INTEGER_32) c_read_stream(ti4_1, arg1, tp1);
	*(EIF_INTEGER_32 *)(Current + O3293[Dtype(Current)-511]) = (EIF_INTEGER_32) loc2;
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
		F432_2758(RTCV(loc1), loc2);
		tr1 = F432_2743(RTCV(loc1), ((EIF_INTEGER_32) 1L), loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F741_5966(RTCV(tr1));
	}
	RTLE;
}

/* {SOCKET}.read_to_managed_pointer */
void F513_3855 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg3) || (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L)))) break;
		ti4_1 = F515_3906(Current);
		tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
		tp1 = RTPOF(tp1,arg2);
		tp1 = RTPOF(tp1,loc1);
		loc2 = (EIF_INTEGER_32) c_read_stream(ti4_1, (EIF_INTEGER_32) (arg3 - loc1), tp1);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
			loc1 += loc2;
		}
	}
	*(EIF_INTEGER_32 *)(Current + O3293[Dtype(Current)-511]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {SOCKET}.read_line */
void F513_3856 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 512L));
	loc1 = (EIF_REFERENCE) tr1;
	F513_3837(Current);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O3279[dtype-511]) == (EIF_CHARACTER_8) '\012')) {
			tb1 = F513_3773(Current);
		}
		if (tb1) break;
		F741_5953(RTCV(loc1), *(EIF_CHARACTER_8 *)(Current + O3279[dtype-511]));
		F513_3837(Current);
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {SOCKET}.socket_error */
EIF_REFERENCE F513_3880 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SOCKET}.socket_buffer */
EIF_REFERENCE F513_3882 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(506));
		F507_3515(RTCV(tr1), ((EIF_INTEGER_32) 16L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {SOCKET}.internal_socket_buffer */
EIF_REFERENCE F513_3883 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SOCKET}.c_put_stream */
void F513_3884 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	EIF_ENTER_C;c_put_stream(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
}

/* {SOCKET}.c_read_stream */
EIF_INTEGER_32 F513_3885 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_read_stream(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {SOCKET}.c_set_sock_opt_int */
void F513_3889 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	c_set_sock_opt_int(arg1, arg2, arg3, arg4);
	
}

/* {SOCKET}.c_set_non_blocking */
void F513_3892 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	c_set_non_blocking(arg1);
	
}

/* {SOCKET}.c_set_blocking */
void F513_3893 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	c_set_blocking(arg1);
	
}

void EIF_Minit269 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
