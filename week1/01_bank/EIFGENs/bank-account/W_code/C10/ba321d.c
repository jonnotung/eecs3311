/*
 * Class BAG [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_321 [] = {213,320,147,0xFFFF};
static EIF_TYPE_INDEX gen_type1_321 [] = {320,147,0xFFFF};
static EIF_TYPE_INDEX gen_type2_321 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_321 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_321 [] = {320,147,0xFFFF};
static EIF_TYPE_INDEX gen_type5_321 [] = {320,147,0xFFFF};
static EIF_TYPE_INDEX gen_type6_321 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_321 [] = {320,147,0xFFFF};
static EIF_TYPE_INDEX gen_type8_321 [] = {320,147,0xFFFF};
static EIF_TYPE_INDEX gen_type9_321 [] = {315,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_321 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_321[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_321},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 320, gen_type1_321},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_321},
	{14, (BODY_INDEX)-1, 0, gen_type3_321},
	{15, (BODY_INDEX)-1, 320, gen_type4_321},
	{16, (BODY_INDEX)-1, 320, gen_type5_321},
	{17, (BODY_INDEX)-1, 0, gen_type6_321},
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
	{28, (BODY_INDEX)-1, 320, gen_type7_321},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 320, gen_type8_321},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1355, (BODY_INDEX)-1, 180, NULL},
	{1356, 0, 180, NULL},
	{1357, (BODY_INDEX)-1, 180, NULL},
	{1358, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1359, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 315, gen_type9_321},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_321},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1784, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1785, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1786, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
};

extern void Init321(void);
void Init321(void)
{
	IDSC(desc_321, 0, 320);
	IDSC(desc_321 + 1, 2, 320);
	IDSC(desc_321 + 32, 199, 320);
	IDSC(desc_321 + 41, 196, 320);
	IDSC(desc_321 + 50, 203, 320);
}


#ifdef __cplusplus
}
#endif
