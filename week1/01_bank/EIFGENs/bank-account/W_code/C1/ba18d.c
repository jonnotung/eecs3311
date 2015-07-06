/*
 * Class BASIC_ROUTINES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_18 [] = {213,17,0xFFFF};
static EIF_TYPE_INDEX gen_type1_18 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_18 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_18 [] = {0,0xFFFF};


static struct desc_info desc_18[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_18},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 17, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_18},
	{14, (BODY_INDEX)-1, 0, gen_type2_18},
	{15, (BODY_INDEX)-1, 17, NULL},
	{16, (BODY_INDEX)-1, 17, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_18},
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
	{28, (BODY_INDEX)-1, 17, NULL},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 17, NULL},
	{524, (BODY_INDEX)-1, 177, NULL},
	{525, (BODY_INDEX)-1, 147, NULL},
	{526, (BODY_INDEX)-1, 147, NULL},
	{527, (BODY_INDEX)-1, 147, NULL},
	{528, (BODY_INDEX)-1, 147, NULL},
	{529, (BODY_INDEX)-1, 147, NULL},
};

extern void Init18(void);
void Init18(void)
{
	IDSC(desc_18, 0, 17);
	IDSC(desc_18 + 1, 2, 17);
	IDSC(desc_18 + 32, 243, 17);
}


#ifdef __cplusplus
}
#endif
