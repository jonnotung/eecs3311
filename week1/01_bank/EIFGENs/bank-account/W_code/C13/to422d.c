/*
 * Class TO_SPECIAL [NATURAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_422 [] = {213,421,156,0xFFFF};
static EIF_TYPE_INDEX gen_type1_422 [] = {421,156,0xFFFF};
static EIF_TYPE_INDEX gen_type2_422 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_422 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_422 [] = {421,156,0xFFFF};
static EIF_TYPE_INDEX gen_type5_422 [] = {421,156,0xFFFF};
static EIF_TYPE_INDEX gen_type6_422 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_422 [] = {421,156,0xFFFF};
static EIF_TYPE_INDEX gen_type8_422 [] = {421,156,0xFFFF};
static EIF_TYPE_INDEX gen_type9_422 [] = {406,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_422 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_422 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_422 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_422[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_422},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 421, gen_type1_422},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_422},
	{14, (BODY_INDEX)-1, 0, gen_type3_422},
	{15, (BODY_INDEX)-1, 421, gen_type4_422},
	{16, (BODY_INDEX)-1, 421, gen_type5_422},
	{17, (BODY_INDEX)-1, 0, gen_type6_422},
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
	{28, (BODY_INDEX)-1, 421, gen_type7_422},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 421, gen_type8_422},
	{2779, 0, 406, gen_type9_422},
	{2780, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2781, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2782, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_422},
	{2783, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_422},
	{2784, (BODY_INDEX)-1, 180, NULL},
	{2785, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2786, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_422},
};

extern void Init422(void);
void Init422(void)
{
	IDSC(desc_422, 0, 421);
	IDSC(desc_422 + 1, 2, 421);
	IDSC(desc_422 + 32, 47, 421);
}


#ifdef __cplusplus
}
#endif
