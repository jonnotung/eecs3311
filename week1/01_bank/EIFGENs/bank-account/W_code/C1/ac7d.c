/*
 * Class ACCOUNT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_7 [] = {213,6,0xFFFF};
static EIF_TYPE_INDEX gen_type1_7 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_7 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_7 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_7 [] = {220,5,0xFFFF};
static EIF_TYPE_INDEX gen_type5_7 [] = {246,5,0xFFFF};
static EIF_TYPE_INDEX gen_type6_7 [] = {246,5,0xFFFF};


static struct desc_info desc_7[] = {
	{(BODY_INDEX) 168, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_7},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 6, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_7},
	{14, (BODY_INDEX)-1, 0, gen_type2_7},
	{15, (BODY_INDEX)-1, 6, NULL},
	{16, (BODY_INDEX)-1, 6, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_7},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 12, NULL},
	{21, (BODY_INDEX)-1, 196, NULL},
	{22, (BODY_INDEX)-1, 196, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 13, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 6, NULL},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 6, NULL},
	{153, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{154, (BODY_INDEX)-1, 147, NULL},
	{155, 16, 147, NULL},
	{156, (BODY_INDEX)-1, 147, NULL},
	{157, (BODY_INDEX)-1, 147, NULL},
	{158, (BODY_INDEX)-1, 147, NULL},
	{159, (BODY_INDEX)-1, 147, NULL},
	{160, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{161, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{162, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{163, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{164, (BODY_INDEX)-1, 220, gen_type4_7},
	{165, (BODY_INDEX)-1, 180, NULL},
	{166, 0, 246, gen_type5_7},
	{167, 8, 246, gen_type6_7},
};

extern void Init7(void);
void Init7(void)
{
	IDSC(desc_7, 0, 6);
	IDSC(desc_7 + 1, 2, 6);
	IDSC(desc_7 + 32, 114, 6);
}


#ifdef __cplusplus
}
#endif
