/*
 * Class DATE_TIME_TOOLS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_16 [] = {213,15,0xFFFF};
static EIF_TYPE_INDEX gen_type1_16 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_16 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_16 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_16 [] = {220,196,0xFFFF};
static EIF_TYPE_INDEX gen_type5_16 [] = {220,196,0xFFFF};
static EIF_TYPE_INDEX gen_type6_16 [] = {220,196,0xFFFF};
static EIF_TYPE_INDEX gen_type7_16 [] = {220,196,0xFFFF};


static struct desc_info desc_16[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_16},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 15, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_16},
	{14, (BODY_INDEX)-1, 0, gen_type2_16},
	{15, (BODY_INDEX)-1, 15, NULL},
	{16, (BODY_INDEX)-1, 15, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_16},
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
	{28, (BODY_INDEX)-1, 15, NULL},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 15, NULL},
	{515, (BODY_INDEX)-1, 196, NULL},
	{516, (BODY_INDEX)-1, 220, gen_type4_16},
	{517, (BODY_INDEX)-1, 220, gen_type5_16},
	{518, (BODY_INDEX)-1, 220, gen_type6_16},
	{519, (BODY_INDEX)-1, 220, gen_type7_16},
	{522, (BODY_INDEX)-1, 196, NULL},
	{520, (BODY_INDEX)-1, 196, NULL},
	{521, (BODY_INDEX)-1, 196, NULL},
};

extern void Init16(void);
void Init16(void)
{
	IDSC(desc_16, 0, 15);
	IDSC(desc_16 + 1, 2, 15);
	IDSC(desc_16 + 32, 252, 15);
}


#ifdef __cplusplus
}
#endif
