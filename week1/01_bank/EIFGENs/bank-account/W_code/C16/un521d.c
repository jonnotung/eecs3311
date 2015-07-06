/*
 * Class UNBOUNDED [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_521 [] = {213,520,162,0xFFFF};
static EIF_TYPE_INDEX gen_type1_521 [] = {520,162,0xFFFF};
static EIF_TYPE_INDEX gen_type2_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_521 [] = {520,162,0xFFFF};
static EIF_TYPE_INDEX gen_type5_521 [] = {520,162,0xFFFF};
static EIF_TYPE_INDEX gen_type6_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_521 [] = {520,162,0xFFFF};
static EIF_TYPE_INDEX gen_type8_521 [] = {520,162,0xFFFF};
static EIF_TYPE_INDEX gen_type9_521 [] = {500,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_521 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_521[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_521},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 520, gen_type1_521},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_521},
	{14, (BODY_INDEX)-1, 0, gen_type3_521},
	{15, (BODY_INDEX)-1, 520, gen_type4_521},
	{16, (BODY_INDEX)-1, 520, gen_type5_521},
	{17, (BODY_INDEX)-1, 0, gen_type6_521},
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
	{28, (BODY_INDEX)-1, 520, gen_type7_521},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 520, gen_type8_521},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1671, (BODY_INDEX)-1, 180, NULL},
	{1380, (BODY_INDEX)-1, 180, NULL},
	{1381, 0, 180, NULL},
	{1382, (BODY_INDEX)-1, 180, NULL},
	{1383, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1384, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 500, gen_type9_521},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_521},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
};

extern void Init521(void);
void Init521(void)
{
	IDSC(desc_521, 0, 520);
	IDSC(desc_521 + 1, 2, 520);
	IDSC(desc_521 + 32, 199, 520);
	IDSC(desc_521 + 41, 201, 520);
	IDSC(desc_521 + 42, 235, 520);
}


#ifdef __cplusplus
}
#endif
