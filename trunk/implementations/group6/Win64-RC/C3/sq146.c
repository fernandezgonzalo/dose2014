/*
 * Code for class SQLITE_EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq146.h"
#include <sqlite3.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_EXCEPTION}.make */
void F168_2151 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F168_2155(Current, arg1);
	F168_2152(Current, arg1, tr1);
	RTLE;
}

/* {SQLITE_EXCEPTION}.make_with_message */
void F168_2152 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,tr2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) arg1;
	tr1 = RTLNSMART(eif_non_attached_type(735));
	tr2 = F733_5612(RTCV(arg2));
	F735_5652(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {SQLITE_EXCEPTION}.message_from_code */
EIF_REFERENCE F168_2155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	RTGC;
	loc1 = eif_bit_and(arg1,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_ERROR)) {
		Result = RTMS_EX_H("SQL error or missing database",29,1457216613);
	} else {
		if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_INTERNAL)) {
			Result = RTMS_EX_H("Internal logic error in SQLite",30,377907045);
		} else {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_PERM)) {
				Result = RTMS_EX_H("Access permission denied",24,401541988);
			} else {
				if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_ABORT)) {
					Result = RTMS_EX_H("Callback routine requested an abort",35,1940845684);
				} else {
					if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_BUSY)) {
						Result = RTMS_EX_H("The database file is locked",27,1487636580);
					} else {
						if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_LOCKED)) {
							Result = RTMS_EX_H("A table in the database is locked",33,2087120484);
						} else {
							if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_NOMEM)) {
								Result = RTMS_EX_H("There is not enough memory",26,307331193);
							} else {
								if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_READONLY)) {
									Result = RTMS_EX_H("Attempted to write a read-only database",39,374305893);
								} else {
									if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_INTERRUPT)) {
										Result = RTMS_EX_H("Operation interrupted",21,940657508);
									} else {
										if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_IOERR)) {
											Result = RTMS_EX_H("I/O operation error",19,1678256498);
										} else {
											if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_CORRUPT)) {
												Result = RTMS_EX_H("The database disk image is malformed",36,711189092);
											} else {
												if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_NOTFOUND)) {
													Result = RTMS_EX_H("Table or record not found",25,1960066916);
												} else {
													if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_FULL)) {
														Result = RTMS_EX_H("Insertion failed because database is full",41,432642924);
													} else {
														if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_CANTOPEN)) {
															Result = RTMS_EX_H("Unable to open the database file",32,432045413);
														} else {
															if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_PROTOCOL)) {
																Result = RTMS_EX_H("Database lock protocol error",28,2017768306);
															} else {
																if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_EMPTY)) {
																	Result = RTMS_EX_H("Database is empty",17,216386681);
																} else {
																	if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_SCHEMA)) {
																		Result = RTMS_EX_H("The database schema changed",27,2123186020);
																	} else {
																		if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_TOOBIG)) {
																			Result = RTMS_EX_H("String or BLOB exceeds size limit",33,620043636);
																		} else {
																			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_CONSTRAINT)) {
																				Result = RTMS_EX_H("Abort due to constraint violation",33,1963456622);
																			} else {
																				if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_MISMATCH)) {
																					Result = RTMS_EX_H("Data type mismatch",18,811392872);
																				} else {
																					if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_MISUSE)) {
																						Result = RTMS_EX_H("Library used incorrectly",24,106989177);
																					} else {
																						if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_NOLFS)) {
																							Result = RTMS_EX_H("Use of OS features not supported on host",40,1117792372);
																						} else {
																							if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_AUTH)) {
																								Result = RTMS_EX_H("Authorization denied",20,783759460);
																							} else {
																								if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_FORMAT)) {
																									Result = RTMS_EX_H("Auxiliary database format error",31,1812450418);
																								} else {
																									if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_RANGE)) {
																										Result = RTMS_EX_H("2nd parameter to sqlite3_bind out of range",42,604313445);
																									} else {
																										if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) SQLITE_NOTADB)) {
																											Result = RTMS_EX_H("File opened that is not a database file",39,1883566693);
																										} else {
																											Result = RTMS_EX_H("Unknown error",13,1947251314);
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {SQLITE_EXCEPTION}.tag */
EIF_REFERENCE F168_2156 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


void EIF_Minit146 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
