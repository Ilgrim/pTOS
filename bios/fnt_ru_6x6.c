/*
 * fnt_ru_6x6.c - a font in standard format
 *
 * Copyright (C) 2010-2015 The EmuTOS development team
 *
 * Automatically generated by fntconv.c
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#include "config.h"
#include "portab.h"
#include "fonthdr.h"

extern const UWORD off_6x6_table[];

static const UBYTE dat_table[] =
{
    0x00, 0x82, 0x04, 0x21, 0xcf, 0xb6, 0x0d, 0xe3, 0x04, 0xe3, 0x81, 0x50, 0xf9, 0x87, 0xbc, 0xc3,
    0xcc, 0x3e, 0x73, 0xe0, 0x38, 0x1f, 0x84, 0x42, 0x00, 0xcd, 0x94, 0x7b, 0x26, 0x0c, 0x31, 0x84,
    0x88, 0x00, 0x00, 0x06, 0x70, 0x4f, 0x3c, 0x33, 0xc7, 0x3e, 0x71, 0xc3, 0x0c, 0x18, 0x06, 0x1c,
    0x71, 0xcf, 0x1e, 0xf3, 0xef, 0x9e, 0x89, 0xc0, 0x92, 0x42, 0x28, 0x9c, 0xf1, 0xcf, 0x1e, 0xfa,
    0x28, 0xa2, 0x8a, 0x2f, 0x9e, 0xc1, 0xe2, 0x00, 0x60, 0x08, 0x00, 0x08, 0x01, 0x80, 0x80, 0x01,
    0x20, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x31, 0xc4, 0x00,
    0x79, 0x41, 0x08, 0x51, 0x02, 0x00, 0x21, 0x44, 0x14, 0x21, 0x05, 0x08, 0x20, 0x07, 0x88, 0x51,
    0x02, 0x10, 0x51, 0x45, 0x04, 0x1a, 0x2f, 0x06, 0x10, 0x41, 0x04, 0xf1, 0xe7, 0x1c, 0x60, 0x00,
    0x30, 0xc0, 0xc3, 0x6c, 0x68, 0x03, 0x42, 0x01, 0xe4, 0x1a, 0x69, 0x41, 0x08, 0x69, 0xe7, 0xbd,
    0x73, 0xef, 0x3e, 0x3b, 0xeb, 0x7c, 0x8a, 0xa4, 0x8e, 0x8a, 0x27, 0x3e, 0xf1, 0xef, 0xa2, 0xfa,
    0x28, 0xa2, 0x8a, 0x24, 0x21, 0xc1, 0xc9, 0x9e, 0x00, 0xce, 0x00, 0x70, 0x00, 0x1c, 0x01, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0xc2, 0x06, 0x62, 0xaf, 0x2a, 0x1a, 0x17, 0x86, 0x82, 0x01, 0x50, 0xc8, 0x80, 0x84, 0xc2,
    0x0c, 0x02, 0x53, 0x67, 0x20, 0x3f, 0x42, 0xf4, 0x00, 0xcd, 0xbe, 0xa3, 0x4d, 0x0c, 0x60, 0xc3,
    0x08, 0x00, 0x00, 0x0c, 0x98, 0xc0, 0x82, 0x52, 0x08, 0x02, 0x8a, 0x23, 0x0c, 0x31, 0xe3, 0x26,
    0x8a, 0x28, 0xa0, 0x8a, 0x08, 0x20, 0x88, 0x80, 0x94, 0x43, 0x6c, 0xa2, 0x8a, 0x28, 0xa0, 0x22,
    0x28, 0xa2, 0x52, 0x21, 0x18, 0x60, 0x67, 0x00, 0x61, 0xcf, 0x1c, 0x79, 0xc2, 0x1e, 0xb1, 0x81,
    0x24, 0x21, 0x4f, 0x1c, 0xf1, 0xe7, 0x0e, 0x72, 0x28, 0xa2, 0x4a, 0x27, 0x8c, 0x30, 0xce, 0x88,
    0x80, 0x02, 0x14, 0x00, 0x80, 0x1e, 0x50, 0x02, 0x00, 0x50, 0x80, 0x00, 0xfb, 0xca, 0x14, 0x00,
    0x85, 0x08, 0x00, 0x00, 0x0e, 0x23, 0x6d, 0x88, 0x20, 0x82, 0x08, 0x00, 0x00, 0xa2, 0x00, 0x00,
    0x30, 0xc0, 0x06, 0xf6, 0xb1, 0xe4, 0x8c, 0x72, 0xc2, 0x2c, 0xb0, 0x02, 0x1c, 0xeb, 0x38, 0xd7,
    0x8a, 0x08, 0xa0, 0x4a, 0x0f, 0xc2, 0x9a, 0x65, 0x12, 0xda, 0x28, 0xa2, 0x8a, 0x02, 0x22, 0xa9,
    0x48, 0xa2, 0x8a, 0x24, 0x21, 0x40, 0x2a, 0x72, 0x73, 0x0a, 0x3e, 0x09, 0xcb, 0x42, 0x88, 0x09,
    0x0e, 0x52, 0x27, 0x3c, 0xf1, 0xcf, 0xa4, 0x72, 0x49, 0x12, 0x8a, 0x24, 0x21, 0xe1, 0xc9, 0x9e,
    0x03, 0x62, 0x3b, 0xdf, 0x6e, 0x1c, 0xb2, 0x97, 0x84, 0xde, 0xe1, 0x50, 0xc8, 0x8f, 0xbe, 0xc3,
    0xef, 0x8e, 0x73, 0x20, 0xb7, 0x60, 0x62, 0x94, 0x00, 0xc9, 0x14, 0x70, 0x86, 0x18, 0x60, 0xc7,
    0xbe, 0x01, 0xe0, 0x18, 0xa8, 0x47, 0x1c, 0x93, 0xcf, 0x04, 0x71, 0xe0, 0x00, 0x60, 0x01, 0x8c,
    0xbb, 0xef, 0x20, 0x8b, 0xcf, 0x26, 0xf8, 0x80, 0x98, 0x42, 0xaa, 0xa2, 0xf2, 0x2f, 0x1c, 0x22,
    0x28, 0xaa, 0x21, 0x42, 0x18, 0x30, 0x6d, 0x80, 0x30, 0x28, 0xa0, 0x8b, 0xe7, 0xa2, 0xc8, 0x81,
    0x38, 0x23, 0xe8, 0xa2, 0x8a, 0x24, 0x98, 0x22, 0x28, 0xaa, 0x32, 0x21, 0x18, 0x30, 0x6b, 0x9c,
    0x82, 0x27, 0x1c, 0x71, 0xc7, 0x20, 0x71, 0xc7, 0x18, 0x21, 0x87, 0x1c, 0x80, 0xef, 0x9c, 0x71,
    0xc8, 0xa2, 0x89, 0xc8, 0x98, 0x71, 0xcf, 0x1e, 0x71, 0x87, 0x22, 0xf1, 0x2f, 0xa2, 0x61, 0xe7,
    0xb6, 0xcc, 0xcd, 0x9b, 0x73, 0x25, 0x96, 0xba, 0xe7, 0x1c, 0x70, 0x00, 0x08, 0xea, 0xdb, 0x55,
    0xfb, 0xcf, 0x20, 0x4b, 0xc7, 0x9c, 0xaa, 0xa6, 0x12, 0xab, 0xe8, 0xa2, 0xf2, 0x02, 0x1e, 0xa8,
    0x88, 0x9e, 0xaa, 0xa7, 0xb9, 0x79, 0xee, 0x5e, 0x8b, 0xcf, 0x20, 0x7b, 0xe7, 0x8c, 0x8a, 0x2e,
    0x12, 0xfa, 0x28, 0xa2, 0x8a, 0x02, 0x24, 0xa9, 0x89, 0x12, 0xaa, 0xa7, 0x39, 0x38, 0xae, 0x72,
    0x00, 0x8d, 0x86, 0x62, 0xac, 0xaa, 0xe2, 0xdf, 0xdc, 0x93, 0xa3, 0x58, 0xd9, 0xcc, 0x06, 0xd8,
    0x69, 0x8c, 0xdb, 0xef, 0xa4, 0x40, 0x21, 0x68, 0x00, 0xc0, 0x3e, 0x29, 0x6e, 0x80, 0x60, 0xc3,
    0x08, 0x30, 0x03, 0x30, 0xc8, 0x48, 0x02, 0xf8, 0x28, 0x88, 0x88, 0x23, 0x0c, 0x31, 0xe3, 0x0c,
    0xb2, 0x28, 0xa0, 0x8a, 0x08, 0x22, 0x88, 0x88, 0x94, 0x42, 0x29, 0xa2, 0x82, 0x2a, 0x02, 0x22,
    0x25, 0x36, 0x50, 0x84, 0x18, 0x18, 0x60, 0x00, 0x03, 0xe8, 0xa0, 0x8a, 0x02, 0x1e, 0x88, 0x81,
    0x24, 0x22, 0xa8, 0xa2, 0x8a, 0x24, 0x06, 0x22, 0x25, 0x2a, 0x31, 0xe2, 0x0c, 0x30, 0xc1, 0x32,
    0x82, 0x2f, 0x82, 0x08, 0x20, 0xa0, 0xfb, 0xef, 0x88, 0x20, 0x88, 0xa2, 0xf3, 0x8a, 0x22, 0x8a,
    0x28, 0xa2, 0x7a, 0x28, 0x8e, 0x20, 0x8d, 0x88, 0x08, 0x88, 0xa2, 0x89, 0xa7, 0x9c, 0x61, 0x00,
    0x8b, 0x14, 0xc6, 0xf6, 0x09, 0xe6, 0x9a, 0xa2, 0xc8, 0xa2, 0x88, 0x00, 0x08, 0x6a, 0xf8, 0xc0,
    0x8a, 0x28, 0xa0, 0x4a, 0x0b, 0x42, 0xcb, 0x25, 0x12, 0x8a, 0x28, 0xa2, 0x82, 0x02, 0x02, 0xf9,
    0x48, 0x82, 0xaa, 0xa4, 0x65, 0x44, 0x2a, 0x4a, 0xfa, 0x29, 0x20, 0x8a, 0x0f, 0xc2, 0x8a, 0x29,
    0x12, 0xab, 0xe8, 0xa2, 0x8a, 0x02, 0x1c, 0xa9, 0x89, 0x0e, 0xaa, 0xa4, 0xa5, 0x24, 0x6e, 0x5e,
    0x00, 0x87, 0x04, 0x21, 0xc9, 0xb6, 0x42, 0x10, 0x3c, 0x18, 0xe7, 0x5c, 0xd9, 0xcc, 0x06, 0xf8,
    0x6d, 0x8c, 0xd8, 0x67, 0x3c, 0x71, 0xee, 0xf0, 0x00, 0x00, 0x14, 0xf2, 0x6d, 0x00, 0x31, 0x84,
    0x88, 0x30, 0x03, 0x20, 0x70, 0x4f, 0xbc, 0x13, 0xc7, 0x08, 0x71, 0xc3, 0x04, 0x18, 0x06, 0x00,
    0x82, 0x2f, 0x1e, 0xf3, 0xe8, 0x1e, 0x89, 0xc7, 0x12, 0x7a, 0x28, 0x9c, 0x81, 0xc9, 0xbc, 0x21,
    0xe2, 0x22, 0x88, 0x8f, 0x9e, 0x09, 0xe0, 0x00, 0x01, 0xef, 0x1c, 0x79, 0xc2, 0x02, 0x89, 0xc1,
    0x22, 0x72, 0x28, 0x9c, 0xf1, 0xe4, 0x1c, 0x11, 0xe2, 0x36, 0x48, 0x27, 0x8e, 0x31, 0xc0, 0x3e,
    0x7a, 0x28, 0x3e, 0xfb, 0xef, 0x9e, 0x82, 0x08, 0x08, 0x20, 0x8f, 0xbe, 0x81, 0xeb, 0xa2, 0x8a,
    0x28, 0xa2, 0x0a, 0x28, 0x84, 0x79, 0xcf, 0x08, 0xf8, 0x88, 0xa2, 0x89, 0x60, 0x00, 0xc9, 0x00,
    0x86, 0x3c, 0xc3, 0x6c, 0xfb, 0x24, 0x8c, 0x79, 0xef, 0xbe, 0x88, 0x00, 0x08, 0x2b, 0x1a, 0x40,
    0x8b, 0xcf, 0x20, 0xff, 0xeb, 0x7c, 0x8a, 0x24, 0xb2, 0x8a, 0x27, 0x22, 0x81, 0xe2, 0x1c, 0x22,
    0x2f, 0xc2, 0xfb, 0xf7, 0xb9, 0x79, 0xc9, 0xb2, 0x89, 0xcf, 0x20, 0x71, 0xcb, 0x5c, 0x75, 0xd8,
    0xb2, 0x8a, 0x27, 0x22, 0xf1, 0xc2, 0x04, 0x72, 0x47, 0x82, 0xfb, 0xf7, 0x39, 0x39, 0xc9, 0xb2,
    0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe3, 0x18, 0x10, 0xb6, 0x4c, 0xf9, 0xcf, 0xbe, 0x1b,
    0xef, 0x8c, 0xf8, 0x60, 0x07, 0x58, 0xac, 0x00, 0x00, 0xc0, 0x00, 0x20, 0x06, 0x80, 0x00, 0x00,
    0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x0c,
    0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x0e,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x30, 0x00, 0x00,
    0xc1, 0xe7, 0x1e, 0x79, 0xe7, 0xb8, 0x71, 0xc7, 0x1c, 0x71, 0xc8, 0xa2, 0xf8, 0x00, 0x1c, 0x71,
    0xc7, 0x9e, 0xf1, 0xc7, 0x80, 0x00, 0x8c, 0x30, 0x79, 0xc7, 0x1e, 0x89, 0x2f, 0xbe, 0x70, 0x00,
    0x0f, 0x04, 0xc0, 0x00, 0x78, 0x0b, 0x10, 0x00, 0x08, 0xa2, 0x70, 0x00, 0x00, 0x29, 0xe7, 0x80,
    0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x40, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x38, 0x20, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
};

const Fonthead fnt_ru_6x6 = {
    1,  /* font_id */
    8,  /* point */
    "6x6 Russian font",  /*   BYTE name[32]     */
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
    0x5555, /* lighten */
    0xaaaa, /* skew */
    F_STDFORM | F_MONOSPACE,  /* flags */
    0,                  /*   UBYTE *hor_table   */
    off_6x6_table,          /*   UWORD *off_table   */
    dat_table,          /*   UWORD *dat_table   */
    192,  /* form_width */
    6,  /* form_height */
    0   /* Fonthead * next_font */
};
