/*
 * Code for class FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi274.h"
#include "eif_file.h"
#include "eif_retrieve.h"
#include "eif_store.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE}.make_with_name */
void F518_3985 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F518_4138(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3501[dtype-517]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F733_5554(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.make_with_path */
void F518_3986 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F518_4139(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3501[dtype-517]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F733_5554(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.make_open_read */
void F518_3987 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F518_3985(Current, arg1);
	F518_4051(Current);
	RTLE;
}

/* {FILE}.path */
EIF_REFERENCE F518_3993 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(RTCV(F518_4136(Current))+ _PTROFF_0_1_0_1_0_0_);
	F747_6070(RTCV(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {FILE}.item */
EIF_CHARACTER_8 F518_3995 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3333[dtype-512])(Current);
	Result = *(EIF_CHARACTER_8 *)(Current + O3279[dtype-511]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2249[dtype-517])(Current);
	RTLE;
	return Result;
}

/* {FILE}.position */
EIF_INTEGER_32 F518_3996 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F518_4040(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_tell((FILE*) tp1);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {FILE}.descriptor */
EIF_INTEGER_32 F518_3997 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3501[dtype-517]);
	Result = (EIF_INTEGER_32) eif_file_fd((FILE*) tp1);
	*(EIF_BOOLEAN *)(Current + O3647[dtype-517]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
	return Result;
}

/* {FILE}.descriptor_available */
EIF_BOOLEAN F518_3998 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3647[Dtype(Current) - 517]);
}


/* {FILE}.date */
EIF_INTEGER_32 F518_4008 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F518_4136(Current))+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) eif_file_date((EIF_FILENAME) tp1);
	RTLE;
	return Result;
}

/* {FILE}.retrieved */
EIF_REFERENCE F518_4010 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(520, 520, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(4303,F521_4303,(RTCV(tr1)));
	{
	/* INLINED CODE (do_nothing) */
	tr2 = tr1;
	
	
	/* END INLINED CODE */
	}
	;
	ti4_1 = F518_3997(Current);
	Result = (EIF_REFERENCE) eretrieve(ti4_1);
	RTLE;
	return Result;
}

/* {FILE}.count */
EIF_INTEGER_32 F518_4011 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3294[dtype-512])(Current)) {
		if ((EIF_BOOLEAN) !F518_4042(Current)) {
			F518_4147(Current);
			Result = F496_3364(RTCV(RTOSCF(4145,F518_4145,(Current))));
		} else {
			tp1 = *(EIF_POINTER *)(Current + O3501[dtype-517]);
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_size((FILE*) tp1);
		}
	}
	RTLE;
	return Result;
}

/* {FILE}.after */
EIF_BOOLEAN F518_4012 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F518_4040(Current)) {
		tb1 = '\01';
		if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3511[dtype-517])(Current)) {
			tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[dtype-517])(Current) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {FILE}.before */
EIF_BOOLEAN F518_4013 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F518_4040(Current);
}

/* {FILE}.off */
EIF_BOOLEAN F518_4014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	if (!((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[dtype-517])(Current) == ((EIF_INTEGER_32) 0L)))) {
		tb1 = F518_4040(Current);
	}
	if (!tb1) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3511[dtype-517])(Current);
	}
	RTLE;
	return Result;
}

/* {FILE}.end_of_file */
EIF_BOOLEAN F518_4015 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) tp1));
}

/* {FILE}.exists */
EIF_BOOLEAN F518_4016 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F518_4040(Current)) {
		tp1 = *(EIF_POINTER *)(RTCV(F518_4136(Current))+ _PTROFF_0_1_0_1_0_0_);
		Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) tp1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {FILE}.is_readable */
EIF_BOOLEAN F518_4019 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F518_4147(Current);
	Result = F496_3391(RTCV(RTOSCF(4145,F518_4145,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.is_writable */
EIF_BOOLEAN F518_4020 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F518_4147(Current);
	Result = F496_3392(RTCV(RTOSCF(4145,F518_4145,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.is_directory */
EIF_BOOLEAN F518_4025 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F518_4147(Current);
	Result = F496_3385(RTCV(RTOSCF(4145,F518_4145,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.is_closed */
EIF_BOOLEAN F518_4040 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3637[Dtype(Current)-517]) == ((EIF_INTEGER_32) 0L));
}

/* {FILE}.is_open_write */
EIF_BOOLEAN F518_4042 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) == ((EIF_INTEGER_32) 3L)));
}

/* {FILE}.open_read */
void F518_4051 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F518_4136(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3594[dtype-517])(Current, tp1, ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current + O3501[dtype-517]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {FILE}.open_write */
void F518_4052 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F518_4136(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3594[dtype-517])(Current, tp1, ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current + O3501[dtype-517]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {FILE}.create_read_write */
void F518_4055 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F518_4136(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3594[dtype-517])(Current, tp1, ((EIF_INTEGER_32) 4L));
	*(EIF_POINTER *)(Current + O3501[dtype-517]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTLE;
}

/* {FILE}.close */
void F518_4068 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3501[dtype-517]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R3597[dtype-517])(Current, tp1);
	*(EIF_INTEGER_32 *)(Current + O3637[dtype-517]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3501[dtype-517]) = (EIF_POINTER) tp2;
	*(EIF_BOOLEAN *)(Current + O3647[dtype-517]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {FILE}.start */
void F518_4069 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
	eif_file_go((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 0L));
}

/* {FILE}.forth */
void F518_4071 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3501[dtype-517]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current + O3501[dtype-517]);
	tc1 = (EIF_CHARACTER_8) eif_file_gc((FILE*) tp1);
	eif_do_nothing_value.it_c1 = tc1;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3511[dtype-517])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2249[dtype-517])(Current);
	}
	RTLE;
}

/* {FILE}.back */
void F518_4072 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) -1L));
}

/* {FILE}.extend */
void F518_4077 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3309[Dtype(Current)-517])(Current, arg1);
}

/* {FILE}.put_string */
void F518_4089 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		eif_file_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {FILE}.put_character */
void F518_4092 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
	eif_file_pc((FILE*) tp1, (EIF_CHARACTER) arg1);
}

/* {FILE}.put_new_line */
void F518_4094 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
	eif_file_tnwl((FILE*) tp1);
}

/* {FILE}.change_date */
EIF_INTEGER_32 F518_4107 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F518_4147(Current);
	Result = F496_3369(RTCV(RTOSCF(4145,F518_4145,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.general_store */
void F518_4110 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti4_1 = F518_3997(Current);
	eestore((EIF_INTEGER) ti4_1, (EIF_REFERENCE) arg1);
	RTLE;
}

/* {FILE}.delete */
void F518_4113 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F518_4136(Current))+ _PTROFF_0_1_0_1_0_0_);
	eif_file_unlink((EIF_FILENAME) tp1);
	RTLE;
}

/* {FILE}.read_character */
void F518_4120 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3501[dtype-517]);
	tc1 = (EIF_CHARACTER_8) eif_file_gc((FILE*) tp1);
	*(EIF_CHARACTER_8 *)(Current + O3279[dtype-511]) = (EIF_CHARACTER_8) tc1;
	RTLE;
}

/* {FILE}.read_line */
void F518_4124 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,loc3);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(Current);
	loc3 = *(EIF_REFERENCE *)(RTCV(loc5));
	loc1 = F737_5741(RTCV(loc5));
	for (;;) {
		if (loc4) break;
		tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
		loc2 += (EIF_INTEGER_32) eif_file_gs((FILE*) tp1, (char*) loc3, (EIF_INTEGER) loc1, (EIF_INTEGER) loc2);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			F741_5986(RTCV(loc5), loc1);
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2048L))) {
				F741_5970(RTCV(loc5), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1024L)));
			} else {
				F310_2526(RTCV(loc5));
			}
			loc1 = F737_5741(RTCV(loc5));
			loc2--;
			loc3 = *(EIF_REFERENCE *)(RTCV(loc5));
		} else {
			F741_5986(RTCV(loc5), loc2);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {FILE}.read_line_thread_aware */
void F518_4126 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc7);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current);
	loc7 = RTOSCF(4146,F518_4146,(Current));
	F741_5966(RTCV(loc4));
	loc1 = F432_2752(RTCV(loc7));
	for (;;) {
		if (loc3) break;
		tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
		tp2 = F432_2750(RTCV(loc7));
		loc2 = (EIF_INTEGER_32) eif_file_gs((FILE*) tp1, (char*) tp2, (EIF_INTEGER) loc1, (EIF_INTEGER) ((EIF_INTEGER_32) 0L));
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
		loc6 = eif_min_int32 (loc2,loc1);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc6);
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 <= loc1);
		F741_5970(RTCV(loc4), loc6);
		F741_5986(RTCV(loc4), loc6);
		ti4_1 = eif_min_int32 (loc2,loc1);
		F432_2745(RTCV(loc7), loc4, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)), ti4_1);
	}
	RTLE;
}

/* {FILE}.read_stream */
void F518_4127 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current);
	F741_5970(RTCV(loc3), arg1);
	loc2 = *(EIF_REFERENCE *)(RTCV(loc3));
	tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
	loc1 = (EIF_INTEGER_32) eif_file_gss((FILE*) tp1, (char*) loc2, (EIF_INTEGER) arg1);
	F741_5986(RTCV(loc3), loc1);
	RTLE;
}

/* {FILE}.read_stream_thread_aware */
void F518_4129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current);
	loc2 = RTOSCF(4146,F518_4146,(Current));
	F432_2758(RTCV(loc2), arg1);
	tp1 = *(EIF_POINTER *)(Current + O3501[Dtype(Current)-517]);
	tp2 = F432_2750(RTCV(loc2));
	loc1 = (EIF_INTEGER_32) eif_file_gss((FILE*) tp1, (char*) tp2, (EIF_INTEGER) arg1);
	F432_2758(RTCV(loc2), loc1);
	F741_5970(RTCV(loc3), loc1);
	F741_5986(RTCV(loc3), loc1);
	F432_2747(RTCV(loc2), loc3);
	RTLE;
}

/* {FILE}.internal_name */
EIF_REFERENCE F518_4135 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FILE}.internal_name_pointer */
EIF_REFERENCE F518_4136 (EIF_REFERENCE Current)
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

/* {FILE}.internal_detachable_name_pointer */
static EIF_REFERENCE F518_4137_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F518_4137 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(506)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F518_4137_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {FILE}.set_name */
void F518_4138 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTOSCF(4145,F518_4145,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = F496_3377(RTCV(tr1), arg1, tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.set_path */
void F518_4139 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F747_6105(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F747_6107(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.buffered_file_info */
static EIF_REFERENCE F518_4145_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (4145);
#define Result RTOSR(4145)
	RTOC_NEW(Result);
	tr1 = RTLNS(495, 495, _OBJSIZ_3_2_0_0_0_0_0_0_);
	F496_3360(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (4145);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F518_4145 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4145,F518_4145_body,(Current));
}

/* {FILE}.read_data_buffer */
static EIF_REFERENCE F518_4146_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (4146);
#define Result RTOSR(4146)
	RTOC_NEW(Result);
	tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F432_2732(RTCV(tr1), ((EIF_INTEGER_32) 256L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (4146);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F518_4146 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4146,F518_4146_body,(Current));
}

/* {FILE}.set_buffer */
void F518_4147 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	tr1 = RTOSCF(4145,F518_4145,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = F518_4136(Current);
	F496_3407(RTCV(tr1), tr2, tr3);
	RTLE;
}

/* {FILE}.file_unlink */
void F518_4149 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_unlink((EIF_FILENAME) arg1);
	
}

/* {FILE}.file_open */
EIF_POINTER F518_4150 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_file_open((EIF_FILENAME) arg1, (int) arg2);
	
	return Result;
}

/* {FILE}.file_close */
void F518_4153 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_close((FILE*) arg1);
	
}

/* {FILE}.file_fd */
EIF_INTEGER_32 F518_4155 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_fd((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_gc */
EIF_CHARACTER_8 F518_4156 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_CHARACTER_8) eif_file_gc((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_gs */
EIF_INTEGER_32 F518_4157 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_gs((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	return Result;
}

/* {FILE}.file_gss */
EIF_INTEGER_32 F518_4158 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_gss((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	return Result;
}

/* {FILE}.file_gs_ta */
EIF_INTEGER_32 F518_4160 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_file_gs((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_gss_ta */
EIF_INTEGER_32 F518_4161 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_file_gss((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_size */
EIF_INTEGER_32 F518_4164 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_size((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_tell */
EIF_INTEGER_32 F518_4166 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_tell((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_tnwl */
void F518_4174 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_tnwl((FILE*) arg1);
	
}

/* {FILE}.file_ps */
void F518_4176 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	eif_file_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {FILE}.file_pc */
void F518_4177 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	
	eif_file_pc((FILE*) arg1, (EIF_CHARACTER) arg2);
	
}

/* {FILE}.file_go */
void F518_4178 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_go((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_move */
void F518_4180 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_move((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_feof */
EIF_BOOLEAN F518_4181 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) arg1));
	
	return Result;
}

/* {FILE}.file_exists */
EIF_BOOLEAN F518_4182 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {FILE}.c_retrieved */
EIF_REFERENCE F518_4186 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	Result = (EIF_REFERENCE) eretrieve(arg1);
	
	RTLE;
	return Result;
}

/* {FILE}.c_general_store */
void F518_4188 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	
	eestore((EIF_INTEGER) arg1, (EIF_REFERENCE) arg2);
	
}

/* {FILE}.eif_file_date */
EIF_INTEGER_32 F518_4190 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_date((EIF_FILENAME) arg1);
	
	return Result;
}

/* {FILE}.set_read_mode */
void F518_4203 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3637[Dtype(Current)-517]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {FILE}.set_write_mode */
void F518_4204 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3637[Dtype(Current)-517]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

void EIF_Minit274 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
