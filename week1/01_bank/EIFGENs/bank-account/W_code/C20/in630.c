/*
 * Code for class INFINITE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F630_1332(EIF_REFERENCE);
extern EIF_TYPED_VALUE F630_1333(EIF_REFERENCE);
extern void F630_5204(EIF_REFERENCE, int);
extern void EIF_Minit630(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INFINITE}.is_empty */
EIF_TYPED_VALUE F630_1332 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {INFINITE}.full */
EIF_TYPED_VALUE F630_1333 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {INFINITE}._invariant */
void F630_5204 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 629, Current, 0, 5203);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("never_empty", Current);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1165, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("always_full", Current);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1192, dtype))(Current)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit630 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
