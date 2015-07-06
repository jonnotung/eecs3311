/*
 * Class BILINEAR [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_365 [] = {213,364,147,0xFFFF};
static EIF_TYPE_INDEX gen_type1_365 [] = {364,147,0xFFFF};
static EIF_TYPE_INDEX gen_type2_365 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_365 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_365 [] = {364,147,0xFFFF};
static EIF_TYPE_INDEX gen_type5_365 [] = {364,147,0xFFFF};
static EIF_TYPE_INDEX gen_type6_365 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_365 [] = {364,147,0xFFFF};
static EIF_TYPE_INDEX gen_type8_365 [] = {364,147,0xFFFF};
static EIF_TYPE_INDEX gen_type9_365 [] = {315,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_365 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_365 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_365 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_365[] = {
	{(BODY_INDEX) 1628, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_365},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 364, gen_type1_365},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_365},
	{14, (BODY_INDEX)-1, 0, gen_type3_365},
	{15, (BODY_INDEX)-1, 364, gen_type4_365},
	{16, (BODY_INDEX)-1, 364, gen_type5_365},
	{17, (BODY_INDEX)-1, 0, gen_type6_365},
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
	{28, (BODY_INDEX)-1, 364, gen_type7_365},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 364, gen_type8_365},
	{1499, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1355, (BODY_INDEX)-1, 180, NULL},
	{1356, 0, 180, NULL},
	{1357, (BODY_INDEX)-1, 180, NULL},
	{1358, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1359, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1510, (BODY_INDEX)-1, 315, gen_type9_365},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_365},
	{1500, (BODY_INDEX)-1, 147, NULL},
	{1630, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
	{1502, (BODY_INDEX)-1, 147, NULL},
	{1503, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_365},
	{1504, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_365},
	{1629, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1506, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1507, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1508, (BODY_INDEX)-1, 180, NULL},
	{1509, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1501, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init365(void);
void Init365(void)
{
	IDSC(desc_365, 0, 364);
	IDSC(desc_365 + 1, 2, 364);
	IDSC(desc_365 + 32, 199, 364);
	IDSC(desc_365 + 41, 43, 364);
	IDSC(desc_365 + 50, 131, 364);
	IDSC(desc_365 + 57, 200, 364);
}


#ifdef __cplusplus
}
#endif
