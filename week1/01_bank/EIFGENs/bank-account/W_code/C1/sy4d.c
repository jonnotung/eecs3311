/*
 * Class SYSTEM_STRING_FACTORY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_4 [] = {213,3,0xFFFF};
static EIF_TYPE_INDEX gen_type1_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_4 [] = {0,0xFFFF};


static struct desc_info desc_4[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_4},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 3, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_4},
	{14, (BODY_INDEX)-1, 0, gen_type2_4},
	{15, (BODY_INDEX)-1, 3, NULL},
	{16, (BODY_INDEX)-1, 3, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_4},
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
	{28, (BODY_INDEX)-1, 3, NULL},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 3, NULL},
	{61, (BODY_INDEX)-1, 9, NULL},
	{62, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{63, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{64, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{65, (BODY_INDEX)-1, 147, NULL},
};

extern void Init4(void);
void Init4(void)
{
	IDSC(desc_4, 0, 3);
	IDSC(desc_4 + 1, 2, 3);
	IDSC(desc_4 + 32, 146, 3);
}


#ifdef __cplusplus
}
#endif
