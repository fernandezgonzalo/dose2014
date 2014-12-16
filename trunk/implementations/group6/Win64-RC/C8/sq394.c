/*
 * Code for class SQLITE_RESULT_ROW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq394.h"
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

/* {SQLITE_RESULT_ROW}.make */
void F922_7875 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tu4_1 = *(EIF_NATURAL_32 *)(RTCV(arg1) + O6270[Dtype(arg1)-924]);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_NATURAL_32) tu4_1;
	RTLE;
}

/* {SQLITE_RESULT_ROW}.statement */
EIF_REFERENCE F922_7876 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SQLITE_RESULT_ROW}.set_index */
void F922_7879 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_NATURAL_32) arg1;
}

/* {SQLITE_RESULT_ROW}.column_name */
EIF_REFERENCE F922_7883 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(925),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = F926_8003(RTCV(loc1), arg1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F733_5554(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {SQLITE_RESULT_ROW}.value */
EIF_REFERENCE F922_7884 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	loc1 = F922_7885(Current, arg1);
	if ((EIF_BOOLEAN)(loc1 != (EIF_INTEGER_32) SQLITE_NULL)) {
		if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_BLOB)) {
			RTLE;
			return (EIF_REFERENCE) F922_7886(Current, arg1);
		} else {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_FLOAT)) {
				Result = RTLNS(857, 857, _OBJSIZ_0_0_0_0_0_0_0_1_);
				*(EIF_REAL_64 *)Result = F922_7891(Current, arg1);
			} else {
				if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_INTEGER)) {
					Result = RTLNS(830, 830, _OBJSIZ_0_0_0_0_0_0_1_0_);
					*(EIF_INTEGER_64 *)Result = F922_7888(Current, arg1);
				} else {
					if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_TEXT)) {
						RTLE;
						return (EIF_REFERENCE) F922_7889(Current, arg1);
					} else {
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {SQLITE_RESULT_ROW}.type */
EIF_INTEGER_32 F922_7885 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tr2 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
	Result = F76_1014(Current, tr1, tp1, ti4_1);
	RTLE;
	return Result;
}

/* {SQLITE_RESULT_ROW}.blob_value */
EIF_REFERENCE F922_7886 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tr2 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
	loc2 = F76_1006(Current, tr1, tp1, ti4_1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tr2 = *(EIF_REFERENCE *)(Current);
		tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
		loc1 = F76_1007(Current, tr1, tp1, ti4_1);
		if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNS(506, 506, _OBJSIZ_0_1_0_1_0_1_1_0_);
			F507_3517(RTCV(tr1), loc2, loc1);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {SQLITE_RESULT_ROW}.integer_value */
EIF_INTEGER_32 F922_7887 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tr2 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
	Result = F76_1010(Current, tr1, tp1, ti4_1);
	RTLE;
	return Result;
}

/* {SQLITE_RESULT_ROW}.integer_64_value */
EIF_INTEGER_64 F922_7888 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tr2 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
	Result = F76_1011(Current, tr1, tp1, ti4_1);
	RTLE;
	return Result;
}

/* {SQLITE_RESULT_ROW}.string_value */
EIF_REFERENCE F922_7889 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tr2 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
	loc3 = F76_1012(Current, tr1, tp1, ti4_1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc3 == tp1)) {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tr2 = *(EIF_REFERENCE *)(Current);
		tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
		loc2 = F76_1007(Current, tr1, tp1, ti4_1);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
			F432_2734(RTCV(tr1), loc3, loc2);
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = F432_2744(RTCV(loc1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F733_5554(RTCV(tr1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}/* NOTREACHED */
	
}

/* {SQLITE_RESULT_ROW}.real_64_value */
EIF_REAL_64 F922_7891 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tr2 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
	Result = F76_1009(Current, tr1, tp1, ti4_1);
	RTLE;
	return Result;
}

/* {SQLITE_RESULT_ROW}.boolean_value */
EIF_BOOLEAN F922_7893 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tr2 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr2) + O6287[Dtype(tr2)-924]);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (arg1 - tu4_1);
	loc1 = F76_1010(Current, tr1, tp1, ti4_1);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L))) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

void EIF_Minit394 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
