/*
 * Code for class DATE_TIME_CODE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F206_5047(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5049(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5050(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5051(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5052(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5053(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5054(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5055(EIF_REFERENCE);
extern void F206_5056(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5057(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5058(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5059(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5060(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5061(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5062(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5063(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5064(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5065(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5066(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5067(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5068(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5069(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_5070(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_5071(EIF_REFERENCE);
extern void EIF_Minit206(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_CODE_STRING}.make */
void F206_5047 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc1);
	RTLR(9,loc8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 205, Current, 8, 1, 10695);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10695);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3762, 0xF80001BC, 0); /* value */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3762, dtype, Dftype(Current))));
	ui4_1 = ((EIF_INTEGER_32) 20L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2183, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3762, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(Current, 5, 0xF8000024, 0, 0); /* loc5 */
	
	tr1 = RTLN(36);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(5,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3781, 0xF80000DC, 0); /* days */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(733, "days_text", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(6,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(3781, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3782, 0xF80000DC, 0); /* months */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(734, "months_text", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(7,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(3782, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(8);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3395, "count", arg1));
		
		if ((EIF_BOOLEAN) (loc3 >= ti4_1)) break;
		RTHOOK(10);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		ur1 = RTCCL(arg1);
		ui4_1 = loc3;
		loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3758, dtype))(Current, ur1x, ui4_1x)).it_i4);
		RTHOOK(11);
		RTDBGAL(Current, 6, 0xF8000091, 0, 0); /* loc6 */
		
		ur1 = RTCCL(arg1);
		ui4_1 = loc3;
		ui4_2 = loc4;
		loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3759, dtype))(Current, ur1x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(12);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		ui4_1 = loc4;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(451, dtype))(Current, ui4_1x)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(13);
		RTDBGAL(Current, 7, 0xF80000C4, 0, 0); /* loc7 */
		
		tr1 = eif_boxed_item(loc6,1);
		
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3523, "to_lower", loc7))(loc7);
		
		RTHOOK(15);
		ti4_2 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
		
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(16);
			RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
			
			tr1 = RTLN(140);
			ur1 = RTCCL(loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
			
			RTNHOOK(16,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			ur1 = RTCCL(loc1);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
			
			RTHOOK(18);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
		}
		RTHOOK(19);
		RTDBGAL(Current, 8, 0xF80000C4, 0, 0); /* loc8 */
		
		tr1 = eif_boxed_item(loc6,2);
		
		loc8 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(20);
		ti4_2 = *(EIF_INTEGER_32 *)(loc8 + RTVA(3395, "count", loc8));
		
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			tr2 = RTLN(140);
			ur1 = RTCCL(loc8);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr2)))(tr2, ur1x);
			
			RTNHOOK(21,2);
			ur1 = RTCCL(tr2);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
			
			RTHOOK(22);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
			RTHOOK(23);
			RTDBGAA(Current, dtype, 3769, 0x04000000, 1); /* separators_used */
			
			*(EIF_BOOLEAN *)(Current + RTWA(3769, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(24);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(25);
	RTDBGAA(Current, dtype, 3764, 0x10000000, 1); /* base_century */
	
	tr1 = RTLN(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(25,1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(44, "year_now", tr1))(tr1)).it_i4);
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3764, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 100L)) * ((EIF_INTEGER_32) -100L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("value_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("base_century_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3764, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3764, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_3 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.value */
EIF_TYPED_VALUE F206_5048 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3762,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE_STRING}.name */
EIF_TYPED_VALUE F206_5049 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "name";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 205, Current, 2, 0, 10697);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10697);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000C4, 0,0); /* Result */
	
	tr1 = RTLN(196);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3235, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF800008C, 0, 0); /* loc2 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = loc1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	
	loc2 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 == NULL)) break;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2293, "name", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
		
		RTHOOK(6);
		uc1 = (EIF_CHARACTER_8) ' ';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3507, "append_character", Result))(Result, uc1x);
		
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
		RTHOOK(8);
		RTDBGAL(Current, 2, 0xF800008C, 0, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = loc1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		loc2 = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef uc1
}

/* {DATE_TIME_CODE_STRING}.base_century */
EIF_TYPED_VALUE F206_5050 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3764,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE_STRING}.is_date */
EIF_TYPED_VALUE F206_5051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_date";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 205, Current, 0, 1, 10699);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10699);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3252, "is_empty", arg1))(arg1)).it_b);
			
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3784, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3843, "is_date", tr1))(tr1)).it_b);
	
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.is_time */
EIF_TYPED_VALUE F206_5052 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_time";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 205, Current, 0, 1, 10700);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10700);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3252, "is_empty", arg1))(arg1)).it_b);
			
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3784, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3844, "is_time", tr1))(tr1)).it_b);
	
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.is_date_time */
EIF_TYPED_VALUE F206_5053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_date_time";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 205, Current, 0, 1, 10676);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10676);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3252, "is_empty", arg1))(arg1)).it_b);
			
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3784, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3845, "is_date_time", tr1))(tr1)).it_b);
	
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.is_value_valid */
EIF_TYPED_VALUE F206_5054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_value_valid";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 205, Current, 1, 1, 10677);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10677);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3252, "is_empty", arg1))(arg1)).it_b);
			
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80000D1, 0, 0); /* loc1 */
	
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3784, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\01';
	tb2 = '\01';
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3843, "is_date", loc1))(loc1)).it_b);
	
	if (!tb3) {
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3844, "is_time", loc1))(loc1)).it_b);
		
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3845, "is_date_time", loc1))(loc1)).it_b);
		
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.separators_used */
EIF_TYPED_VALUE F206_5055 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3769,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE_STRING}.set_base_century */
void F206_5056 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_base_century";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 205, Current, 0, 1, 10679);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10679);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3764, 0x10000000, 1); /* base_century */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3764, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("base_century_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3764, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.correspond */
EIF_TYPED_VALUE F206_5057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "correspond";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc8);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 205, Current, 8, 1, 10680);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10680);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3395, "count", arg1));
	
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(7);
		RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
		
		ur1 = RTCCL(arg1);
		loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3760, dtype))(Current, ur1x)).it_b);
	}
	RTHOOK(8);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(9);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3395, "count", arg1));
		
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0);
		}
		if (tb1) break;
		RTHOOK(10);
		RTDBGAL(Current, 4, 0xF800008C, 0, 0); /* loc4 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ui4_1 = loc3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		loc4 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc4 == NULL)) {
			RTHOOK(12);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(13);
			if (loc5) {
				RTHOOK(14);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3758, dtype))(Current, ur1x, ui4_1x)).it_i4);
			} else {
				RTHOOK(15);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2291, "count_max", loc4));
				
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
			}
			RTHOOK(16);
			RTDBGAL(Current, 6, 0xF8000091, 0, 0); /* loc6 */
			
			ur1 = RTCCL(arg1);
			ui4_1 = loc1;
			ui4_2 = loc2;
			loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3759, dtype))(Current, ur1x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(17);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(451, dtype))(Current, ui4_1x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(18);
			RTDBGAL(Current, 7, 0xF80000C4, 0, 0); /* loc7 */
			
			tr1 = eif_boxed_item(loc6,1);
			
			loc7 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
			
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				tb2 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
				
				ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2291, "count_max", loc4));
				
				if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
					
					ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2292, "count_min", loc4));
					
					tb2 = (EIF_BOOLEAN) (ti4_1 >= ti4_2);
				}
				Result = (EIF_BOOLEAN) tb2;
				RTHOOK(21);
				tb2 = *(EIF_BOOLEAN *)(loc4 + RTVA(2298, "is_numeric", loc4));
				
				if (tb2) {
					RTHOOK(22);
					RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
					
					tb2 = '\0';
					if (Result) {
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3266, "is_integer", loc7))(loc7)).it_b);
						
						tb2 = tb3;
					}
					Result = (EIF_BOOLEAN) tb2;
					RTHOOK(23);
					tb2 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2294, "value_max", loc4));
					
					if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) -1L))) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2295, "value_min", loc4));
						
						tb2 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) -1L));
					}
					if (tb2) {
						RTHOOK(24);
						RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
						
						tb2 = '\0';
						tb3 = '\0';
						if (Result) {
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3300, "to_integer", loc7))(loc7)).it_i4);
							
							ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2294, "value_max", loc4));
							
							tb3 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
						}
						if (tb3) {
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3300, "to_integer", loc7))(loc7)).it_i4);
							
							ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2295, "value_min", loc4));
							
							tb2 = (EIF_BOOLEAN) (ti4_1 >= ti4_2);
						}
						Result = (EIF_BOOLEAN) tb2;
					}
				} else {
					RTHOOK(25);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2290, "value", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					
					ur1 = RTCCL(tr1);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(696, "is_meridiem", loc4))(loc4, ur1x)).it_b);
					
					if (tb2) {
						RTHOOK(26);
						RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
						
						tb2 = '\0';
						if (Result) {
							tb3 = '\01';
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3297, "as_upper", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							
							RTNHOOK(26,1);
							tr2 = RTMS_EX_H("AM",2,16717);
							ur1 = tr2;
							tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
							
							if (!tb4) {
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3297, "as_upper", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								
								RTNHOOK(26,2);
								tr2 = RTMS_EX_H("PM",2,20557);
								ur1 = tr2;
								tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
								
								tb3 = tb4;
							}
							tb2 = tb3;
						}
						Result = (EIF_BOOLEAN) tb2;
					} else {
						RTHOOK(27);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2290, "value", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						
						ur1 = RTCCL(tr1);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(674, "is_day_text", loc4))(loc4, ur1x)).it_b);
						
						if (tb2) {
							RTHOOK(28);
							RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
							
							tb2 = '\0';
							if (Result) {
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3781, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(28,1);
								ur1 = RTCCL(loc7);
								tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1164, "has", tr1))(tr1, ur1x)).it_b);
								
								tb2 = tb3;
							}
							Result = (EIF_BOOLEAN) tb2;
						} else {
							RTHOOK(29);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2290, "value", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							
							ur1 = RTCCL(tr1);
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(679, "is_month_text", loc4))(loc4, ur1x)).it_b);
							
							if (tb2) {
								RTHOOK(30);
								RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
								
								tb2 = '\0';
								if (Result) {
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3782, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									RTNHOOK(30,1);
									ur1 = RTCCL(loc7);
									tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1164, "has", tr1))(tr1, ur1x)).it_b);
									
									tb2 = tb3;
								}
								Result = (EIF_BOOLEAN) tb2;
							}
						}
					}
				}
				RTHOOK(31);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3++;
			}
			RTHOOK(32);
			if (loc5) {
				RTHOOK(33);
				RTDBGAL(Current, 4, 0xF800008C, 0, 0); /* loc4 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(33,1);
				ui4_1 = loc3;
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				
				loc4 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(34);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3++;
				RTHOOK(35);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(36);
					RTDBGAL(Current, 8, 0xF80000C4, 0, 0); /* loc8 */
					
					tr1 = eif_boxed_item(loc6,2);
					
					loc8 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(37);
					RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
					
					tb2 = '\0';
					tb3 = '\0';
					if (Result) {
						ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3395, "count", arg1));
						
						tb3 = (EIF_BOOLEAN)(loc2 != ti4_1);
					}
					if (tb3) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2290, "value", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						
						ur1 = RTCCL(tr1);
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3381, "same_string", loc8))(loc8, ur1x)).it_b);
						
						tb2 = tb3;
					}
					Result = (EIF_BOOLEAN) tb2;
				}
			}
			RTHOOK(38);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.create_string */
EIF_TYPED_VALUE F206_5058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc8);
	RTLR(6,Current);
	RTLR(7,tr2);
	RTLR(8,ur1);
	RTLR(9,loc7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 205, Current, 8, 1, 10681);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10681);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 210);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000C4, 0,0); /* Result */
	
	tr1 = RTLN(196);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3235, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80000CF, 0, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(751, "date", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF80000CB, 0, 0); /* loc2 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(750, "time", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	RTDBGAL(Current, 8, 0xF800008C, 0, 0); /* loc8 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ui4_1 = loc4;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	
	loc8 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc8 == NULL)) break;
		RTHOOK(8);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(2296, "type", loc8));
		
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		switch (loc5) {
			case 1L:
				RTHOOK(10);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(752, "day", loc1))(loc1)).it_i4);
				
				RTNHOOK(10,1);
				tr1 = c_outi(ti4_1);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 2L:
				RTHOOK(11);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(752, "day", loc1))(loc1)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(13);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				}
				RTHOOK(14);
				tr1 = c_outi(loc3);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 3L:
				RTHOOK(15);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3811, "day_of_the_week", loc1))(loc1)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3781, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(16,1);
				ui4_1 = loc3;
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 4L:
				RTHOOK(17);
				RTDBGAL(Current, 7, 0xF80000C4, 0, 0); /* loc7 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(754, "year", loc1))(loc1)).it_i4);
				
				RTNHOOK(17,1);
				tr1 = c_outi(ti4_1);
				
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(18);
				ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
				
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					RTHOOK(19);
					ur1 = RTCCL(loc7);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				} else {
					RTHOOK(20);
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
					
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(21);
						tr1 = RTMS_EX_H("000",3,3158064);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
						
						RTHOOK(22);
						ur1 = RTCCL(loc7);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
						
					} else {
						RTHOOK(23);
						ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
						
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
							RTHOOK(24);
							tr1 = RTMS_EX_H("00",2,12336);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
							
							RTHOOK(25);
							ur1 = RTCCL(loc7);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
							
						} else {
							RTHOOK(26);
							ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
							
							if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
								RTHOOK(27);
								tr1 = RTMS_EX_H("0",1,48);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
								
								RTHOOK(28);
								ur1 = RTCCL(loc7);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
								
							}
						}
					}
				}
				break;
			case 5L:
				RTHOOK(29);
				RTDBGAL(Current, 7, 0xF80000C4, 0, 0); /* loc7 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(754, "year", loc1))(loc1)).it_i4);
				
				RTNHOOK(29,1);
				tr1 = c_outi(ti4_1);
				
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(30);
				ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
				
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
					RTHOOK(31);
					ui4_1 = ((EIF_INTEGER_32) 2L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3410, "keep_tail", loc7))(loc7, ui4_1x);
					
				} else {
					RTHOOK(32);
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
					
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(33);
						uc1 = (EIF_CHARACTER_8) '0';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3507, "append_character", Result))(Result, uc1x);
						
					}
				}
				RTHOOK(34);
				ur1 = RTCCL(loc7);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 6L:
				RTHOOK(35);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(753, "month", loc1))(loc1)).it_i4);
				
				RTNHOOK(35,1);
				tr1 = c_outi(ti4_1);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 7L:
				RTHOOK(36);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(753, "month", loc1))(loc1)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(37);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(38);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				}
				RTHOOK(39);
				tr1 = c_outi(loc3);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 8L:
				RTHOOK(40);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(753, "month", loc1))(loc1)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(41);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3782, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(41,1);
				ui4_1 = loc3;
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 9L:
				RTHOOK(42);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(707, "hour", loc2))(loc2)).it_i4);
				
				RTNHOOK(42,1);
				tr1 = c_outi(ti4_1);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 10L:
				RTHOOK(43);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(707, "hour", loc2))(loc2)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(44);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(45);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				}
				RTHOOK(46);
				tr1 = c_outi(loc3);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 11L:
			case 12L:
				RTHOOK(47);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(707, "hour", loc2))(loc2)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(48);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					RTHOOK(49);
					if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(50);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
					}
				} else {
					RTHOOK(51);
					if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 12L))) {
						RTHOOK(52);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						
						loc3 -= ((EIF_INTEGER_32) 12L);
					}
				}
				RTHOOK(53);
				tb1 = '\0';
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2310, 140))(Current)).it_n1);
				ti4_1 = (EIF_INTEGER_32) tu1_1;
				
				if ((EIF_BOOLEAN)(loc5 == ti4_1)) {
					tb1 = (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L));
				}
				if (tb1) {
					RTHOOK(54);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				}
				RTHOOK(55);
				tr1 = c_outi(loc3);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 13L:
				RTHOOK(56);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(708, "minute", loc2))(loc2)).it_i4);
				
				RTNHOOK(56,1);
				tr1 = c_outi(ti4_1);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 14L:
				RTHOOK(57);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(708, "minute", loc2))(loc2)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(58);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(59);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				}
				RTHOOK(60);
				tr1 = c_outi(loc3);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 15L:
				RTHOOK(61);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(709, "second", loc2))(loc2)).it_i4);
				
				RTNHOOK(61,1);
				tr1 = c_outi(ti4_1);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 16L:
				RTHOOK(62);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(709, "second", loc2))(loc2)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(63);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(64);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				}
				RTHOOK(65);
				tr1 = c_outi(loc3);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 17L:
				RTHOOK(66);
				RTDBGAL(Current, 6, 0x20000000, 1, 0); /* loc6 */
				
				tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(716, "fractional_second", loc2));
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(2291, "count_max", loc8));
				
				tr8_2 = (EIF_REAL_64) ((ti4_1));
				
				loc6 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2)));
				RTHOOK(67);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				tr1 = RTLN(171);
				*(EIF_REAL_64 *)tr1 = loc6;
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3022, "rounded", tr1))(tr1)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(68);
				RTDBGAL(Current, 7, 0xF80000C4, 0, 0); /* loc7 */
				
				tr1 = c_outi(loc3);
				
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(69);
				ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
				
				ti4_2 = *(EIF_INTEGER_32 *)(loc8 + RTVA(2291, "count_max", loc8));
				
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					RTHOOK(70);
					tr1 = RTLN(196);
					uc1 = (EIF_CHARACTER_8) '0';
					ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(2291, "count_max", loc8));
					
					ti4_2 = *(EIF_INTEGER_32 *)(loc7 + RTVA(3395, "count", loc7));
					
					ui4_1 = (EIF_INTEGER_32) (ti4_1 - ti4_2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3365, Dtype(tr1)))(tr1, uc1x, ui4_1x);
					
					RTNHOOK(70,1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				}
				RTHOOK(71);
				ur1 = RTCCL(loc7);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
			case 24L:
				RTHOOK(72);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(707, "hour", loc2))(loc2)).it_i4);
				
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(73);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					RTHOOK(74);
					tr1 = RTMS_EX_H("AM",2,16717);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				} else {
					RTHOOK(75);
					tr1 = RTMS_EX_H("PM",2,20557);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
					
				}
				break;
			default:
				RTHOOK(76);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2290, "value", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", Result))(Result, ur1x);
				
				break;
		}
		RTHOOK(77);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		loc4++;
		RTHOOK(78);
		RTDBGAL(Current, 8, 0xF800008C, 0, 0); /* loc8 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(78,1);
		ui4_1 = loc4;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		loc8 = (EIF_REFERENCE) RTCCL(tr2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(79);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(80);
		RTCT("string_correspond", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3771, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(81);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.create_date_string */
EIF_TYPED_VALUE F206_5059 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_date_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 205, Current, 1, 1, 10682);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10682);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 207);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("date_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80000D2, 0, 0); /* loc1 */
	
	tr1 = RTLN(210);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3866, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000C4, 0,0); /* Result */
	
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3772, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("string_correspond", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3771, dtype))(Current, ur1x)).it_b);
		if (tb1) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.create_time_string */
EIF_TYPED_VALUE F206_5060 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_time_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 205, Current, 1, 1, 10683);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10683);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 203);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("time_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80000D2, 0, 0); /* loc1 */
	
	tr1 = RTLN(210);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(707, "hour", arg1))(arg1)).it_i4);
	
	ui4_4 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(708, "minute", arg1))(arg1)).it_i4);
	
	ui4_5 = ti4_2;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(710, "fine_second", arg1))(arg1)).it_r8);
	
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3864, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ur8_1x);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000C4, 0,0); /* Result */
	
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3772, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("string_correspond", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3771, dtype))(Current, ur1x)).it_b);
		if (tb1) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.create_date_time */
EIF_TYPED_VALUE F206_5061 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_date_time";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLR(6,loc3);
	RTLR(7,tr2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 205, Current, 3, 1, 10684);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10684);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exist", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_precise", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3778, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3771, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3768, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3783, 0x04000000, 1); /* right_day_text */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3783, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	RTDBGAL(Current, 2, 0xF80000D1, 0, 0); /* loc2 */
	
	ur1 = RTCCL(arg1);
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3784, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(7);
	RTDBGAL(Current, 0, 0xF80000D2, 0,0); /* Result */
	
	tr1 = RTLN(210);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3834, "year", loc2))(loc2)).it_i4);
	
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3835, "month", loc2))(loc2)).it_i4);
	
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3836, "day", loc2))(loc2)).it_i4);
	
	ui4_3 = ti4_3;
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3837, "hour", loc2))(loc2)).it_i4);
	
	ui4_4 = ti4_4;
	ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3838, "minute", loc2))(loc2)).it_i4);
	
	ui4_5 = ti4_5;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3839, "fine_second", loc2))(loc2)).it_r8);
	
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3864, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ur8_1x);
	
	RTNHOOK(7,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(Current, 3, 0xF80000C4, 0, 0); /* loc3 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3840, "day_text", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTHOOK(10);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(751, "date", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		RTNHOOK(10,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3811, "day_of_the_week", tr1))(tr1)).it_i4);
		
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		RTDBGAA(Current, dtype, 3783, 0x04000000, 1); /* right_day_text */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3781, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ui4_1 = loc1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc3))(loc3, ur1x)).it_b);
		
		*(EIF_BOOLEAN *)(Current + RTWA(3783, dtype)) = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("date_time_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("day_text_equal_day", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3783, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.create_date */
EIF_TYPED_VALUE F206_5062 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_date";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc1);
	RTLR(7,Result);
	RTLR(8,ur2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 205, Current, 3, 1, 10685);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10685);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_precise", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3779, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3771, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF80001BC, 0, 0); /* loc2 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	
	loc2 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(5);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2271, "count", tr1));
	
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3760, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H(" ",1,32);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(7,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ur1 = RTCCL(loc1);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(9);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("hh",2,26728);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(9,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(11);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H(":",1,58);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(11,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(13);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("mi",2,28009);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(13,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(15);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H(":",1,58);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(15,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(16);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 4L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(17);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("ss",2,29555);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(17,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(18);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(19);
		tr1 = RTMS_EX_H(" 0:0:0",6,1039522352);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", arg1))(arg1, ur1x);
		
		RTHOOK(20);
		RTDBGAL(Current, 0, 0xF80000CF, 0,0); /* Result */
		
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3775, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(20,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(751, "date", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		Result = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(21);
		tr1 = RTMS_EX_H(" 0:0:0",6,1039522352);
		ur1 = tr1;
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3479, "replace_substring_all", arg1))(arg1, ur1x, ur2x);
		
	} else {
		RTHOOK(22);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("[0]hh",5,812126824);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(22,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(23);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		ur1 = RTCCL(loc1);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(24);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("[0]mi",5,812128105);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(24,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(25);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(26);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("[0]ss",5,812129651);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(26,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(27);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(27,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(28);
		tr1 = RTMS_EX_H("000000",6,903204912);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", arg1))(arg1, ur1x);
		
		RTHOOK(29);
		RTDBGAL(Current, 0, 0xF80000CF, 0,0); /* Result */
		
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3775, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(29,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(751, "date", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		Result = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(30);
		ui4_1 = ((EIF_INTEGER_32) 6L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3514, "remove_tail", arg1))(arg1, ui4_1x);
		
	}
	RTHOOK(31);
	RTDBGAA(Current, dtype, 3762, 0xF80001BC, 0); /* value */
	
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + RTWA(3762, dtype)) = (EIF_REFERENCE) RTCCL(loc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("day_text_equal_day", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3783, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.create_time */
EIF_TYPED_VALUE F206_5063 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_time";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc1);
	RTLR(7,Result);
	RTLR(8,ur2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 205, Current, 3, 1, 10686);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10686);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_precise", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3780, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3771, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF80001BC, 0, 0); /* loc2 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	
	loc2 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(5);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2271, "count", tr1));
	
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3760, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H(" ",1,32);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(7,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ur1 = RTCCL(loc1);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(9);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("dd",2,25700);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(9,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(11);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("/",1,47);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(11,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(13);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("mm",2,28013);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(13,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(15);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("/",1,47);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(15,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(16);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 4L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(17);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("yy",2,31097);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(17,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(18);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(19);
		tr1 = RTMS_EX_H(" 1/1/01",7,1995643697);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", arg1))(arg1, ur1x);
		
		RTHOOK(20);
		RTDBGAL(Current, 0, 0xF80000CB, 0,0); /* Result */
		
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3775, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(20,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(750, "time", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		Result = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(21);
		tr1 = RTMS_EX_H(" 1/1/01",7,1995643697);
		ur1 = tr1;
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3479, "replace_substring_all", arg1))(arg1, ur1x, ur2x);
		
	} else {
		RTHOOK(22);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("[0]dd",5,812125796);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(22,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(23);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		ur1 = RTCCL(loc1);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(24);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("[0]mm",5,812128109);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(24,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(25);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(26);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = RTLN(140);
		tr2 = RTMS_EX_H("yy",2,31097);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2287, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(26,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(27);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(27,1);
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1217, "put", tr1))(tr1, ur1x, ui4_1x);
		
		RTHOOK(28);
		tr1 = RTMS_EX_H("010101",6,903278129);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3494, "append", arg1))(arg1, ur1x);
		
		RTHOOK(29);
		RTDBGAL(Current, 0, 0xF80000CB, 0,0); /* Result */
		
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3775, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(29,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(750, "time", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		Result = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(30);
		ui4_1 = ((EIF_INTEGER_32) 6L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3514, "remove_tail", arg1))(arg1, ui4_1x);
		
	}
	RTHOOK(31);
	RTDBGAA(Current, dtype, 3762, 0xF80001BC, 0); /* value */
	
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + RTWA(3762, dtype)) = (EIF_REFERENCE) RTCCL(loc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("time_correspond", EX_POST);
		ur1 = RTCCL(Result);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3774, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(33,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.precise */
EIF_TYPED_VALUE F206_5064 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "precise";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 205, Current, 0, 0, 10687);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10687);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3779, dtype))(Current)).it_b);
	if (tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3780, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {DATE_TIME_CODE_STRING}.precise_date */
EIF_TYPED_VALUE F206_5065 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "precise_date";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_BOOL, &loc7);
	
	RTEAA(l_feature_name, 205, Current, 7, 0, 10688);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10688);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = loc3;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF800008C, 0, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2296, "type", loc2));
		
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3769, dtype));
		if (tb1) {
			RTHOOK(8);
			switch (loc4) {
				case 1L:
				case 2L:
					RTHOOK(9);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 4L:
				case 5L:
					RTHOOK(10);
					RTDBGAL(Current, 7, 0x04000000, 1, 0); /* loc7 */
					
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 6L:
				case 7L:
				case 8L:
					RTHOOK(11);
					RTDBGAL(Current, 6, 0x04000000, 1, 0); /* loc6 */
					
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
			}
		} else {
			RTHOOK(12);
			switch (loc4) {
				case 2L:
					RTHOOK(13);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 4L:
				case 5L:
					RTHOOK(14);
					RTDBGAL(Current, 7, 0x04000000, 1, 0); /* loc7 */
					
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 7L:
					RTHOOK(15);
					RTDBGAL(Current, 6, 0x04000000, 1, 0); /* loc6 */
					
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
			}
		}
		RTHOOK(16);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3++;
		RTHOOK(17);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		ui4_1 = loc3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTHOOK(18);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 && loc6) && loc7);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
}

/* {DATE_TIME_CODE_STRING}.precise_time */
EIF_TYPED_VALUE F206_5066 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "precise_time";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_BOOL, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 205, Current, 8, 0, 10689);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10689);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = loc3;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF800008C, 0, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2296, "type", loc2));
		
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3769, dtype));
		if (tb1) {
			RTHOOK(8);
			switch (loc4) {
				case 9L:
				case 10L:
					RTHOOK(9);
					RTDBGAL(Current, 6, 0x04000000, 1, 0); /* loc6 */
					
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 13L:
				case 14L:
					RTHOOK(10);
					RTDBGAL(Current, 7, 0x04000000, 1, 0); /* loc7 */
					
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 15L:
				case 16L:
					RTHOOK(11);
					RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
					
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 11L:
				case 12L:
					RTHOOK(12);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
			}
		} else {
			RTHOOK(13);
			switch (loc4) {
				case 10L:
					RTHOOK(14);
					RTDBGAL(Current, 6, 0x04000000, 1, 0); /* loc6 */
					
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 14L:
					RTHOOK(15);
					RTDBGAL(Current, 7, 0x04000000, 1, 0); /* loc7 */
					
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 16L:
					RTHOOK(16);
					RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
					
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 12L:
					RTHOOK(17);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
			}
		}
		RTHOOK(18);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3++;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0xF800008C, 0, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(19,1);
		ui4_1 = loc3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1214, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTHOOK(20);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc6 || loc5) && loc7) && loc8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
}

/* {DATE_TIME_CODE_STRING}.days */
EIF_TYPED_VALUE F206_5067 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3781,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE_STRING}.months */
EIF_TYPED_VALUE F206_5068 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3782,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE_STRING}.right_day_text */
EIF_TYPED_VALUE F206_5069 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3783,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE_STRING}.parser */
EIF_TYPED_VALUE F206_5070 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parser";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,tr2);
	RTLR(7,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 205, Current, 1, 1, 10693);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 10693);
	if (arg1) {
		RTCC(arg1, 205, l_feature_name, 1, 196);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3252, "is_empty", arg1))(arg1)).it_b);
			
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80000D1, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3785, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3833, "source_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13, dtype))(Current, ur1x, ur2x)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80000D1, 0, 0); /* loc1 */
		
		tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3785, dtype, Dftype(Current))));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3832, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3781, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3848, "set_day_array", loc1))(loc1, ur1x);
		
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3782, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3849, "set_month_array", loc1))(loc1, ur1x);
		
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3764, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3850, "set_base_century", loc1))(loc1, ui4_1x);
		
		RTHOOK(8);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3847, "set_source_string", loc1))(loc1, ur1x);
		
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3851, "parse", loc1))(loc1);
		
		RTHOOK(10);
		RTDBGAA(Current, dtype, 3785, 0xF80000D1, 0); /* internal_parser */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(3785, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTHOOK(11);
	RTDBGAL(Current, 0, 0xF80000D1, 0,0); /* Result */
	
	Result = (EIF_REFERENCE) RTCCL(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("parser_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {DATE_TIME_CODE_STRING}.internal_parser */
EIF_TYPED_VALUE F206_5071 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3785,Dtype(Current)));
	return r;
}


void EIF_Minit206 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
