/*
 * fntlat2_6.c - a font in standard format
 *
 * Automatically generated by fntconv.c
 */

#include "portab.h"
#include "fontdef.h"

static UWORD off_table[], dat_table[];

const struct font_head latin2_6x6 = {
    1,  /* font_id */
    8,  /* point */
    "MiNT ISO 8859-2 6x6",  /*   BYTE name[32]  */
    0,  /* first_ade */
    255,  /* last_ade */
    4,  /* top */
    4,  /* ascent */
    3,  /* half */
    1,  /* descent */
    1,  /* bottom */
    6,  /* max_char_width */
    6,  /* max_cell_width */
    0,  /* left_offset */
    3,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555,  /* lighten */
    0xaaaa,  /* skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* flags */
    0,  /* hor_table */
    off_table,  /* off_table */
    dat_table,  /* dat_table */
    192,  /* form_width */
    6,  /* form_height */
    0,  /* struct font * next_font */
    0   /* UWORD next_seg */
};

static UWORD off_table[] =
{
    0x0000, 0x0006, 0x000c, 0x0012, 0x0018, 0x001e, 0x0024, 0x002a, 
    0x0030, 0x0036, 0x003c, 0x0042, 0x0048, 0x004e, 0x0054, 0x005a, 
    0x0060, 0x0066, 0x006c, 0x0072, 0x0078, 0x007e, 0x0084, 0x008a, 
    0x0090, 0x0096, 0x009c, 0x00a2, 0x00a8, 0x00ae, 0x00b4, 0x00ba, 
    0x00c0, 0x00c6, 0x00cc, 0x00d2, 0x00d8, 0x00de, 0x00e4, 0x00ea, 
    0x00f0, 0x00f6, 0x00fc, 0x0102, 0x0108, 0x010e, 0x0114, 0x011a, 
    0x0120, 0x0126, 0x012c, 0x0132, 0x0138, 0x013e, 0x0144, 0x014a, 
    0x0150, 0x0156, 0x015c, 0x0162, 0x0168, 0x016e, 0x0174, 0x017a, 
    0x0180, 0x0186, 0x018c, 0x0192, 0x0198, 0x019e, 0x01a4, 0x01aa, 
    0x01b0, 0x01b6, 0x01bc, 0x01c2, 0x01c8, 0x01ce, 0x01d4, 0x01da, 
    0x01e0, 0x01e6, 0x01ec, 0x01f2, 0x01f8, 0x01fe, 0x0204, 0x020a, 
    0x0210, 0x0216, 0x021c, 0x0222, 0x0228, 0x022e, 0x0234, 0x023a, 
    0x0240, 0x0246, 0x024c, 0x0252, 0x0258, 0x025e, 0x0264, 0x026a, 
    0x0270, 0x0276, 0x027c, 0x0282, 0x0288, 0x028e, 0x0294, 0x029a, 
    0x02a0, 0x02a6, 0x02ac, 0x02b2, 0x02b8, 0x02be, 0x02c4, 0x02ca, 
    0x02d0, 0x02d6, 0x02dc, 0x02e2, 0x02e8, 0x02ee, 0x02f4, 0x02fa, 
    0x0300, 0x0306, 0x030c, 0x0312, 0x0318, 0x031e, 0x0324, 0x032a, 
    0x0330, 0x0336, 0x033c, 0x0342, 0x0348, 0x034e, 0x0354, 0x035a, 
    0x0360, 0x0366, 0x036c, 0x0372, 0x0378, 0x037e, 0x0384, 0x038a, 
    0x0390, 0x0396, 0x039c, 0x03a2, 0x03a8, 0x03ae, 0x03b4, 0x03ba, 
    0x03c0, 0x03c6, 0x03cc, 0x03d2, 0x03d8, 0x03de, 0x03e4, 0x03ea, 
    0x03f0, 0x03f6, 0x03fc, 0x0402, 0x0408, 0x040e, 0x0414, 0x041a, 
    0x0420, 0x0426, 0x042c, 0x0432, 0x0438, 0x043e, 0x0444, 0x044a, 
    0x0450, 0x0456, 0x045c, 0x0462, 0x0468, 0x046e, 0x0474, 0x047a, 
    0x0480, 0x0486, 0x048c, 0x0492, 0x0498, 0x049e, 0x04a4, 0x04aa, 
    0x04b0, 0x04b6, 0x04bc, 0x04c2, 0x04c8, 0x04ce, 0x04d4, 0x04da, 
    0x04e0, 0x04e6, 0x04ec, 0x04f2, 0x04f8, 0x04fe, 0x0504, 0x050a, 
    0x0510, 0x0516, 0x051c, 0x0522, 0x0528, 0x052e, 0x0534, 0x053a, 
    0x0540, 0x0546, 0x054c, 0x0552, 0x0558, 0x055e, 0x0564, 0x056a, 
    0x0570, 0x0576, 0x057c, 0x0582, 0x0588, 0x058e, 0x0594, 0x059a, 
    0x05a0, 0x05a6, 0x05ac, 0x05b2, 0x05b8, 0x05be, 0x05c4, 0x05ca, 
    0x05d0, 0x05d6, 0x05dc, 0x05e2, 0x05e8, 0x05ee, 0x05f4, 0x05fa, 
    0x0600, 
};

static UWORD dat_table[] =
{
    0x0082, 0x0421, 0xcfb6, 0x0de3, 0x04e3, 0x8150, 0xf987, 0xbcc3, 
    0xcc3e, 0x73e0, 0x381f, 0x8442, 0x00cd, 0x947b, 0x260c, 0x3184, 
    0x8800, 0x0006, 0x704f, 0x3c33, 0xc73e, 0x71c3, 0x0c18, 0x061c, 
    0x71cf, 0x1ef3, 0xef9e, 0x89c0, 0x9242, 0x289c, 0xf1cf, 0x1efa, 
    0x28a2, 0x8a2f, 0x9ec1, 0xe200, 0x6008, 0x0008, 0x0180, 0x8001, 
    0x2060, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0e31, 0xc400, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x01c4, 0x9085, 0x4106, 0x5147, 
    0x9410, 0x0508, 0x3000, 0x1811, 0xa094, 0x00a0, 0x0208, 0xa28c, 
    0x1042, 0x1251, 0x211e, 0x504f, 0x9250, 0x4214, 0xf045, 0x0420, 
    0xa500, 0x5081, 0x0a50, 0x4f9c, 0x1042, 0x1251, 0xa100, 0x5040, 
    0x1450, 0x4214, 0x0845, 0x0420, 0xa508, 0x5081, 0x0a50, 0x4208, 
    0x01c2, 0x0662, 0xaf2a, 0x1a17, 0x8682, 0x0150, 0xc880, 0x84c2, 
    0x0c02, 0x5367, 0x203f, 0x42f4, 0x00cd, 0xbea3, 0x4d0c, 0x60c3, 
    0x0800, 0x000c, 0x98c0, 0x8252, 0x0802, 0x8a23, 0x0c31, 0xe326, 
    0x8a28, 0xa08a, 0x0820, 0x8880, 0x9443, 0x6ca2, 0x8a28, 0xa022, 
    0x28a2, 0x5221, 0x1860, 0x6700, 0x61cf, 0x1c79, 0xc21e, 0xb181, 
    0x2421, 0x4f1c, 0xf1e7, 0x0e72, 0x28a2, 0x4a27, 0x8c30, 0xce88, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0223, 0x1879, 0x4788, 0x01e8, 
    0x3ef8, 0x0fbe, 0x49c0, 0x0820, 0xa108, 0x0043, 0x8a11, 0x4100, 
    0xf085, 0x0c01, 0x47a0, 0x7be8, 0x3ef9, 0xc73c, 0x8aaa, 0x9c51, 
    0x4712, 0xf22a, 0x9402, 0xa236, 0x2085, 0x0c00, 0xc21c, 0x2087, 
    0x0020, 0x850a, 0x7c82, 0x0851, 0x4000, 0x2142, 0x1400, 0x8700, 
    0x0362, 0x3bdf, 0x6e1c, 0xb297, 0x84de, 0xe150, 0xc88f, 0xbec3, 
    0xef8e, 0x7320, 0xb760, 0x6294, 0x00c9, 0x1470, 0x8618, 0x60c7, 
    0xbe01, 0xe018, 0xa847, 0x1c93, 0xcf04, 0x71e0, 0x0060, 0x018c, 
    0xbbef, 0x208b, 0xcf26, 0xf880, 0x9842, 0xaaa2, 0xf22f, 0x1c22, 
    0x28aa, 0x2142, 0x1830, 0x6d80, 0x3028, 0xa08b, 0xe7a2, 0xc881, 
    0x3823, 0xe8a2, 0x8a24, 0x9822, 0x28aa, 0x3221, 0x1830, 0x6b9c, 
    0x30c3, 0x0c30, 0xc30c, 0x30c3, 0x0c30, 0xc30c, 0x30c3, 0x0c30, 
    0xc30c, 0x30c3, 0x0c30, 0xc30c, 0x03e0, 0x3049, 0x081c, 0x0207, 
    0x0811, 0xe104, 0x3020, 0x1c00, 0x8380, 0x00e6, 0x1c78, 0x079e, 
    0x89c7, 0x1c71, 0x0820, 0x820f, 0x2080, 0x8222, 0xeb2c, 0xa271, 
    0xc88c, 0x8a28, 0xa28a, 0x223c, 0x71c7, 0x1c70, 0x8720, 0x71cf, 
    0x9c71, 0x821e, 0x8bcf, 0x1c71, 0xc73e, 0x72a8, 0xa28a, 0x2200, 
    0x008d, 0x8662, 0xacaa, 0xe2df, 0xdc93, 0xa358, 0xd9cc, 0x06d8, 
    0x698c, 0xdbef, 0xa440, 0x2168, 0x00c0, 0x3e29, 0x6e80, 0x60c3, 
    0x0830, 0x0330, 0xc848, 0x02f8, 0x2888, 0x8823, 0x0c31, 0xe30c, 
    0xb228, 0xa08a, 0x0822, 0x8888, 0x9442, 0x29a2, 0x822a, 0x0222, 
    0x2536, 0x5084, 0x1818, 0x6000, 0x03e8, 0xa08a, 0x021e, 0x8881, 
    0x2422, 0xa8a2, 0x8a24, 0x0622, 0x252a, 0x31e2, 0x0c30, 0xc132, 
    0x30c3, 0x0c30, 0xc30c, 0x30c3, 0x0c30, 0xc30c, 0x30c3, 0x0c30, 
    0xc30c, 0x30c3, 0x0c30, 0xc30c, 0x0220, 0x1049, 0x071c, 0x01c0, 
    0x8820, 0x0208, 0x03e0, 0x0800, 0x8600, 0x0181, 0x8810, 0x0104, 
    0xf228, 0xa289, 0x0820, 0x83c8, 0x3cf0, 0x8222, 0x8aaa, 0xa28a, 
    0x288c, 0xf228, 0xa289, 0x4236, 0x4820, 0x8208, 0x8820, 0x83e8, 
    0x3ef8, 0x8222, 0x8a28, 0xa28a, 0x2880, 0x4a28, 0xa289, 0xe200, 
    0x0087, 0x0421, 0xc9b6, 0x4210, 0x3c18, 0xe75c, 0xd9cc, 0x06f8, 
    0x6d8c, 0xd867, 0x3c71, 0xeef0, 0x0000, 0x14f2, 0x6d00, 0x3184, 
    0x8830, 0x0320, 0x704f, 0xbc13, 0xc708, 0x71c3, 0x0418, 0x0600, 
    0x822f, 0x1ef3, 0xe81e, 0x89c7, 0x127a, 0x289c, 0x81c9, 0xbc21, 
    0xe222, 0x888f, 0x9e09, 0xe000, 0x01ef, 0x1c79, 0xc202, 0x89c1, 
    0x2272, 0x289c, 0xf1e4, 0x1c11, 0xe236, 0x4827, 0x8e31, 0xc03e, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0220, 0x1e79, 0xe088, 0x002f, 
    0x0840, 0x0410, 0x01e2, 0x1c01, 0xc180, 0x1067, 0x0820, 0x0208, 
    0xa3ef, 0xbef9, 0xe81e, 0x820f, 0xa080, 0x8222, 0xf269, 0xa28a, 
    0x2892, 0xa228, 0xa288, 0x823c, 0x43ef, 0xbef9, 0xc81c, 0x8207, 
    0x2080, 0x8222, 0x7a28, 0xa28a, 0x2888, 0x4228, 0xa288, 0x2100, 
    0x0082, 0x0000, 0x0000, 0x01e3, 0x1810, 0xb64c, 0xf9cf, 0xbe1b, 
    0xef8c, 0xf860, 0x0758, 0xac00, 0x00c0, 0x0020, 0x0680, 0x0000, 
    0x0060, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x000c, 
    0x7800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0060, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x003e, 0x0000, 0x0000, 0x003c, 0x000e, 
    0x0000, 0x0000, 0x8020, 0x0000, 0x0000, 0x03c0, 0x0030, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0060, 0x0084, 0x0f30, 0x03c2, 
    0x08f8, 0x0fbe, 0x0041, 0x0000, 0x0700, 0x21c2, 0x0478, 0x079e, 
    0x9a28, 0xa288, 0x0788, 0x7be1, 0x3ef9, 0xc73c, 0x0228, 0x9c71, 
    0xc700, 0x99e7, 0x9e78, 0x8430, 0x41e7, 0x9e78, 0x0708, 0x71c2, 
    0x1c71, 0xc71e, 0x0228, 0x9c71, 0xc700, 0x41e7, 0x9e7b, 0xc200, 
};

