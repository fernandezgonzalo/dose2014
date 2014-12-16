/*
 * Code for class DIRECTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di264.h"
#include "eif_dir.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DIRECTORY}.make */
void F508_3604 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F508_3605(Current, arg1);
}

/* {DIRECTORY}.make_with_name */
void F508_3605 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F508_3640(Current, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {DIRECTORY}.make_with_path */
void F508_3606 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = F747_6105(RTCV(arg1));
	F508_3604(Current, tr1);
	RTLE;
}

/* {DIRECTORY}.make_open_read */
void F508_3607 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F508_3604(Current, arg1);
	F508_3614(Current);
	RTLE;
}

/* {DIRECTORY}.create_dir */
void F508_3608 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F508_3642(Current))+ _PTROFF_0_1_0_1_0_0_);
	eif_file_mkdir((EIF_FILENAME) tp1);
	RTLE;
}

/* {DIRECTORY}.recursive_create_dir */
void F508_3609 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,tr2);
	
	RTGC;
	loc3 = F747_6087(RTCV(F508_3610(Current)));
	tr1 = RTLNS(507, 507, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F508_3606(RTCV(tr1), loc3);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F508_3628(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {665,746,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 10L));
		loc2 = (EIF_REFERENCE) tr1;
		loc4 = F747_6082(RTCV(loc3));
		for (;;) {
			tb1 = '\01';
			tb2 = F508_3628(RTCV(loc1));
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(loc4 == NULL);
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc2)-395])(RTCV(loc2), loc3);
			loc3 = F747_6081(RTCV(loc3));
			loc4 = F747_6082(RTCV(loc3));
			F508_3606(RTCV(loc1), loc3);
		}
		F666_5039(RTCV(loc2));
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			tr1 = RTLNS(746, 746, _OBJSIZ_2_1_0_0_0_0_0_0_);
			F747_6064(RTCV(tr1));
			loc3 = (EIF_REFERENCE) tr1;
		}
		for (;;) {
			tb2 = F637_4920(RTCV(loc2));
			if (tb2) break;
			loc3 = F666_5012(RTCV(loc2));
			F666_5041(RTCV(loc2));
			F508_3606(RTCV(loc1), loc3);
			F508_3608(RTCV(loc1));
			tb3 = F508_3628(RTCV(loc1));
			if ((EIF_BOOLEAN) !tb3) {
				tr1 = RTLNS(190, 190, _OBJSIZ_5_1_0_3_0_0_0_0_);
				loc5 = (EIF_REFERENCE) tr1;
				tr1 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000c\000\000\000r\000\000\000e\000\000\000a\000\000\000t\000\000\000e\000\000\000:\000\000\000 \000\000\000",15,2053611808);
				tr2 = F747_6105(RTCV(loc3));
				tr1 = F740_5849(RTCV(tr1), tr2);
				F166_2133(RTCV(loc5), tr1);
				F166_2118(RTCV(loc5));
			}
		}
	}
	RTLE;
}

/* {DIRECTORY}.path */
EIF_REFERENCE F508_3610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(746, 746, _OBJSIZ_2_1_0_0_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(RTCV(F508_3642(Current))+ _PTROFF_0_1_0_1_0_0_);
	F747_6070(RTCV(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {DIRECTORY}.readentry */
void F508_3611 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp1 = (EIF_POINTER) eif_dir_next(tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) = (EIF_POINTER) tp1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) != tp1)) {
		tr1 = RTOSCF(3650,F508_3650,(Current));
		tr1 = F496_3379(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {DIRECTORY}.has_entry */
EIF_BOOLEAN F508_3613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,arg1);
	RTLR(5,loc4);
	
	RTGC;
	tr1 = RTLNS(507, 507, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F508_3607(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	loc1 = (EIF_REFERENCE) tr1;
	F508_3616(RTCV(loc1));
	F508_3611(RTCV(loc1));
	loc2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_0_0_1_0_1_);
	for (;;) {
		tb1 = '\01';
		if (!Result) {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tb1 = (EIF_BOOLEAN)(loc2 == tp1);
		}
		if (tb1) break;
		loc3 = arg1;
		loc3 = RTRV(eif_non_attached_type(736),loc3);
		if (EIF_TEST(loc3)) {
			tr1 = RTOSCF(3650,F508_3650,(Current));
			tr1 = F496_3379(RTCV(tr1), loc2);
			Result = F733_5599(RTCV(arg1), tr1);
		} else {
			tr1 = RTOSCF(3650,F508_3650,(Current));
			tr1 = F496_3378(RTCV(tr1), loc2);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				Result = F733_5599(RTCV(arg1), loc4);
			}
		}
		F508_3611(RTCV(loc1));
		loc2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_0_0_1_0_1_);
	}
	F508_3615(RTCV(loc1));
	RTLE;
	return Result;
}

/* {DIRECTORY}.open_read */
void F508_3614 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F508_3642(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) eif_dir_open((EIF_FILENAME) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {DIRECTORY}.close */
void F508_3615 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	eif_dir_close(tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {DIRECTORY}.start */
void F508_3616 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV(F508_3642(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) eif_dir_rewind((EIF_POINTER) tp1, (EIF_FILENAME) tp2);
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {DIRECTORY}.entries */
EIF_REFERENCE F508_3620 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(507, 507, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F508_3607(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	loc1 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {665,746,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 16L));
	Result = (EIF_REFERENCE) tr1;
	F508_3616(RTCV(loc1));
	F508_3611(RTCV(loc1));
	loc2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_0_0_1_0_1_);
	for (;;) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 == tp1)) break;
		tr1 = RTLNS(746, 746, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F747_6070(RTCV(tr1), loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(Result)-395])(RTCV(Result), tr1);
		F508_3611(RTCV(loc1));
		loc2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_0_0_1_0_1_);
	}
	F508_3615(RTCV(loc1));
	RTLE;
	return Result;
}

/* {DIRECTORY}.lastentry */
static EIF_REFERENCE F508_3625_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F508_3625 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(740)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F508_3625_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.is_closed */
EIF_BOOLEAN F508_3626 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) == ((EIF_INTEGER_32) 1L));
}

/* {DIRECTORY}.exists */
EIF_BOOLEAN F508_3628 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F508_3642(Current))+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_exists((EIF_FILENAME) tp1));
	RTLE;
	return Result;
}

/* {DIRECTORY}.is_writable */
EIF_BOOLEAN F508_3631 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F508_3642(Current))+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_writable((EIF_FILENAME) tp1));
	RTLE;
	return Result;
}

/* {DIRECTORY}.dispose */
void F508_3637 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F508_3626(Current)) {
		F508_3615(Current);
	}
	RTLE;
}

/* {DIRECTORY}.set_name */
void F508_3640 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTOSCF(3650,F508_3650,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = F496_3377(RTCV(tr1), arg1, tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DIRECTORY}.internal_name */
EIF_REFERENCE F508_3641 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DIRECTORY}.internal_name_pointer */
EIF_REFERENCE F508_3642 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {DIRECTORY}.internal_detachable_name_pointer */
static EIF_REFERENCE F508_3643_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F508_3643 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(506)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F508_3643_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.file_info */
static EIF_REFERENCE F508_3650_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3650);
#define Result RTOSR(3650)
	RTOC_NEW(Result);
	tr1 = RTLNS(495, 495, _OBJSIZ_3_2_0_0_0_0_0_0_);
	F496_3360(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3650);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F508_3650 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3650,F508_3650_body,(Current));
}

/* {DIRECTORY}.file_mkdir */
void F508_3651 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_mkdir((EIF_FILENAME) arg1);
	
}

/* {DIRECTORY}.dir_open */
EIF_POINTER F508_3652 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_dir_open((EIF_FILENAME) arg1);
	
	return Result;
}

/* {DIRECTORY}.dir_rewind */
EIF_POINTER F508_3653 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_dir_rewind((EIF_POINTER) arg1, (EIF_FILENAME) arg2);
	
	return Result;
}

/* {DIRECTORY}.dir_close */
void F508_3654 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_dir_close(arg1);
	
}

/* {DIRECTORY}.eif_dir_next */
EIF_POINTER F508_3655 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_dir_next(arg1);
	
	return Result;
}

/* {DIRECTORY}.eif_dir_exists */
EIF_BOOLEAN F508_3657 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {DIRECTORY}.eif_dir_is_writable */
EIF_BOOLEAN F508_3660 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_writable((EIF_FILENAME) arg1));
	
	return Result;
}

void EIF_Minit264 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
