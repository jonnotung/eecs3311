/*
 * Class CELL [NATURAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_490 [] = {213,489,156,0xFFFF};
static EIF_TYPE_INDEX gen_type1_490 [] = {489,156,0xFFFF};
static EIF_TYPE_INDEX gen_type2_490 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_490 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_490 [] = {489,156,0xFFFF};
static EIF_TYPE_INDEX gen_type5_490 [] = {489,156,0xFFFF};
static EIF_TYPE_INDEX gen_type6_490 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_490 [] = {489,156,0xFFFF};
static EIF_TYPE_INDEX gen_type8_490 [] = {489,156,0xFFFF};
static EIF_TYPE_INDEX gen_type9_490 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_490 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_490[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_490},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 489, gen_type1_490},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_490},
	{14, (BODY_INDEX)-1, 0, gen_type3_490},
	{15, (BODY_INDEX)-1, 489, gen_type4_490},
	{16, (BODY_INDEX)-1, 489, gen_type5_490},
	{17, (BODY_INDEX)-1, 0, gen_type6_490},
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
	{28, (BODY_INDEX)-1, 489, gen_type7_490},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 489, gen_type8_490},
	{702, 0, (EIF_TYPE_INDEX)-1, gen_type9_490},
	{703, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{704, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_490},
};

extern void Init490(void);
void Init490(void)
{
	IDSC(desc_490, 0, 489);
	IDSC(desc_490 + 1, 2, 489);
	IDSC(desc_490 + 32, 75, 489);
}


#ifdef __cplusplus
}
#endif
