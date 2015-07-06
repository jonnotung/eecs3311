/*
 * Code for class TEST_ACCOUNT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F58_1106(EIF_REFERENCE);
extern EIF_TYPED_VALUE F58_1107(EIF_REFERENCE);
extern EIF_TYPED_VALUE F58_1108(EIF_REFERENCE);
extern EIF_TYPED_VALUE F58_1109(EIF_REFERENCE);
extern EIF_TYPED_VALUE F58_1110(EIF_REFERENCE);
extern EIF_TYPED_VALUE F58_1111(EIF_REFERENCE);
extern void F58_1112(EIF_REFERENCE);
extern void F58_1113(EIF_REFERENCE);
extern void EIF_Minit58(void);
extern EIF_REFERENCE _A58_80();
extern EIF_REFERENCE _A58_79();
extern EIF_REFERENCE _A58_78();
extern EIF_REFERENCE _A58_77();
extern EIF_REFERENCE _A58_82();
extern EIF_REFERENCE _A58_76();
extern EIF_REFERENCE _A58_81();

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

/* {TEST_ACCOUNT}.make */
void F58_1106 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 57, Current, 0, 0, 1155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(57, Current, 1155);
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,145,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {252,0,0xFFF9,0,145,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0, 0, (EIF_POINTER) _A58_76, (EIF_POINTER)(0),1042, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1017, dtype))(Current, ur1x);
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,145,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {252,0,0xFFF9,0,145,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0, 0, (EIF_POINTER) _A58_78, (EIF_POINTER)(0),1044, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1017, dtype))(Current, ur1x);
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,145,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {252,0,0xFFF9,0,145,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0, 0, (EIF_POINTER) _A58_77, (EIF_POINTER)(0),1043, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1017, dtype))(Current, ur1x);
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,145,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {252,0,0xFFF9,0,145,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0, 0, (EIF_POINTER) _A58_79, (EIF_POINTER)(0),1045, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1017, dtype))(Current, ur1x);
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,145,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {252,0,0xFFF9,0,145,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0, 0, (EIF_POINTER) _A58_80, (EIF_POINTER)(0),1046, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1017, dtype))(Current, ur1x);
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,145,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {217,0,0xFFF9,0,145,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0, 0, (EIF_POINTER) _A58_81, (EIF_POINTER)(0),1047, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1019, dtype))(Current, ur1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("not_too_small",13,272062828);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,145,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {217,0,0xFFF9,0,145,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNRW(typres0, 0, (EIF_POINTER) _A58_82, (EIF_POINTER)(0),1048, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1018, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ur2
}

/* {TEST_ACCOUNT}.test_create_account */
EIF_TYPED_VALUE F58_1107 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_create_account";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 57, Current, 1, 0, 1156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(57, Current, 1156);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t0: test_create_account",23,1004232308);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1022, dtype))(Current, ur1x);
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT(NULL, EX_CHECK);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 500L) + ((EIF_INTEGER_32) 1200L)) >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000006, 0, 0); /* loc1 */
	
	tr1 = RTLN(6);
	ui4_1 = ((EIF_INTEGER_32) 1200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(158, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(159, "balance", loc1))(loc1)).it_i4);
	
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(160, "credit", loc1));
		
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1200L));
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_CHECK) {
		RTHOOK(5);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {TEST_ACCOUNT}.test_withdraw */
EIF_TYPED_VALUE F58_1108 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_withdraw";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 57, Current, 1, 0, 1157);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(57, Current, 1157);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t1: test_withdraw",17,1396303479);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1022, Dtype(Current)))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000006, 0, 0); /* loc1 */
	
	tr1 = RTLN(6);
	ui4_1 = ((EIF_INTEGER_32) 1200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(158, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 700L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(166, "withdraw", loc1))(loc1, ui4_1x);
	
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(159, "balance", loc1))(loc1)).it_i4);
	
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -700L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(160, "credit", loc1));
		
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1200L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {TEST_ACCOUNT}.test_deposit */
EIF_TYPED_VALUE F58_1109 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_deposit";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 57, Current, 1, 0, 1158);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(57, Current, 1158);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t2: test_deposit",16,1048240756);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1022, Dtype(Current)))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000006, 0, 0); /* loc1 */
	
	tr1 = RTLN(6);
	ui4_1 = ((EIF_INTEGER_32) 1200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(158, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 800L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(165, "deposit", loc1))(loc1, ui4_1x);
	
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(159, "balance", loc1))(loc1)).it_i4);
	
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 800L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(160, "credit", loc1));
		
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1200L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {TEST_ACCOUNT}.test_deposit_and_withdraw */
EIF_TYPED_VALUE F58_1110 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_deposit_and_withdraw";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 57, Current, 1, 0, 1159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(57, Current, 1159);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t4: test_deposit_and_withdraw",29,1873463927);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1022, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000006, 0, 0); /* loc1 */
	
	tr1 = RTLN(6);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(158, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(159, "balance", loc1))(loc1)).it_i4);
	
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(162, "total_deposits", loc1))(loc1)).it_i4);
		
		tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(163, "total_withdrawals", loc1))(loc1)).it_i4);
		
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 800L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(165, "deposit", loc1))(loc1, ui4_1x);
	
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 400L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(165, "deposit", loc1))(loc1, ui4_1x);
	
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 1200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(166, "withdraw", loc1))(loc1, ui4_1x);
	
	RTHOOK(8);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(159, "balance", loc1))(loc1)).it_i4);
	
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(162, "total_deposits", loc1))(loc1)).it_i4);
		
		tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1200L));
	}
	if (tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(163, "total_withdrawals", loc1))(loc1)).it_i4);
		
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1200L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {TEST_ACCOUNT}.test_transaction_value_and_date */
EIF_TYPED_VALUE F58_1111 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_transaction_value_and_date";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc1);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	
	RTEAA(l_feature_name, 57, Current, 8, 0, 1160);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(57, Current, 1160);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t5: test_transaction_value_and_date",35,933358437);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1022, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
	
	loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5000L);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF80000CF, 0, 0); /* loc2 */
	
	tr1 = RTLN(207);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(3796, Dtype(tr1)))(tr1);
	
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 3, 0xF80000CF, 0, 0); /* loc3 */
	
	tr1 = RTLN(207);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(3796, Dtype(tr1)))(tr1);
	
	RTNHOOK(4,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3817, "day_forth", loc3))(loc3);
	
	RTHOOK(6);
	RTDBGAL(Current, 1, 0xF8000006, 0, 0); /* loc1 */
	
	tr1 = RTLN(6);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(158, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(6,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ui4_1 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 500L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(165, "deposit", loc1))(loc1, ui4_1x);
	
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT(NULL, EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(159, "balance", loc1))(loc1)).it_i4);
		
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5500L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 1000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(166, "withdraw", loc1))(loc1, ui4_1x);
	
	RTHOOK(10);
	ui4_1 = ((EIF_INTEGER_32) 4000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(166, "withdraw", loc1))(loc1, ui4_1x);
	
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 400L);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(168, "withdraw_on_date", loc1))(loc1, ui4_1x, ur1x);
	
	RTHOOK(12);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(159, "balance", loc1))(loc1)).it_i4);
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 100L));
	if (RTAL & CK_CHECK) {
		RTHOOK(13);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(14);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(164, "withdraws_today", loc1))(loc1)).it_i4);
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5000L));
	if (RTAL & CK_CHECK) {
		RTHOOK(15);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(16);
	RTDBGAL(Current, 4, 0xF80000DC, 0, 0); /* loc4 */
	
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(169, "withdraws_on", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1194, "count", loc4))(loc4)).it_i4);
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	if (RTAL & CK_CHECK) {
		RTHOOK(18);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(19);
	RTDBGAL(Current, 5, 0xF8000005, 0, 0); /* loc5 */
	
	tr1 = RTLN(5);
	ui4_1 = ((EIF_INTEGER_32) 1000L);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(155, Dtype(tr1)))(tr1, ui4_1x, ur1x);
	
	RTNHOOK(19,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(20);
	RTDBGAL(Current, 6, 0xF8000005, 0, 0); /* loc6 */
	
	tr1 = RTLN(5);
	ui4_1 = ((EIF_INTEGER_32) 4000L);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(155, Dtype(tr1)))(tr1, ui4_1x, ur1x);
	
	RTNHOOK(20,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(21);
	RTDBGAL(Current, 7, 0xF8000005, 0, 0); /* loc7 */
	
	tr1 = RTLN(5);
	ui4_1 = ((EIF_INTEGER_32) 400L);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(155, Dtype(tr1)))(tr1, ui4_1x, ur1x);
	
	RTNHOOK(21,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_CHECK) {
		RTHOOK(22);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(23);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tb2 = '\0';
	ur1 = RTCCL(loc5);
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1164, "has", loc4))(loc4, ur1x)).it_b);
	
	if (tb3) {
		ur1 = RTCCL(loc6);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1164, "has", loc4))(loc4, ur1x)).it_b);
		
		tb2 = tb3;
	}
	if (tb2) {
		ur1 = RTCCL(loc7);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1164, "has", loc4))(loc4, ur1x)).it_b);
		
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {TEST_ACCOUNT}.test_withdraw_violation */
void F58_1112 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_withdraw_violation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 57, Current, 1, 0, 1161);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(57, Current, 1161);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("**t100: test_withdraw_violation",31,1929141870);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1022, Dtype(Current)))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000006, 0, 0); /* loc1 */
	
	tr1 = RTLN(6);
	ui4_1 = ((EIF_INTEGER_32) 600L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(158, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(165, "deposit", loc1))(loc1, ui4_1x);
	
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 800L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(166, "withdraw", loc1))(loc1, ui4_1x);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
}

/* {TEST_ACCOUNT}.test_deposit_amount */
void F58_1113 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_deposit_amount";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 57, Current, 1, 0, 1162);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(57, Current, 1162);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("**t101: test_deposit_amount violation",37,1769161838);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1022, Dtype(Current)))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000006, 0, 0); /* loc1 */
	
	tr1 = RTLN(6);
	ui4_1 = ((EIF_INTEGER_32) 500L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(158, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) -200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(165, "deposit", loc1))(loc1, ui4_1x);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
}

void EIF_Minit58 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
