/*
 * fnt_l9_8x16.c - a font in standard format
 *
 * Copyright (C) 2005-2015 The EmuTOS development team
 *
 * Automatically generated by fntconv.c
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#include "config.h"
#include "portab.h"
#include "fonthdr.h"

extern const UWORD off_8x8_table[];
#define off_8x16_table off_8x8_table

static const UBYTE dat_table[] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x04,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c,
    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x60, 0x06, 0x18, 0x32, 0x00, 0x3c, 0x00, 0x00, 0x60, 0x06, 0x18, 0x00, 0x60, 0x06, 0x18, 0x00,
    0x00, 0x32, 0x60, 0x06, 0x18, 0x32, 0x00, 0x00, 0x00, 0x60, 0x06, 0x18, 0x00, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xa0,
    0x7c, 0x00, 0x7c, 0x7c, 0x00, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x28,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x18, 0xe0, 0x00, 0x00,
    0x00, 0x00, 0x06, 0x18, 0x00, 0x60, 0x1c, 0x00, 0x18, 0x00, 0x60, 0x00, 0x18, 0x60, 0x66, 0x66,
    0x0c, 0x00, 0x3e, 0x18, 0x00, 0x60, 0x18, 0x60, 0x00, 0x66, 0x66, 0x00, 0x0e, 0x00, 0x00, 0x00,
    0x06, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
    0x38, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00,
    0x30, 0x0c, 0x3c, 0x7a, 0x66, 0x66, 0x3e, 0x00, 0x30, 0x0c, 0x3c, 0x66, 0x30, 0x0c, 0x3c, 0x66,
    0x00, 0x7a, 0x30, 0x0c, 0x3c, 0x7a, 0x66, 0x00, 0x01, 0x30, 0x0c, 0x3c, 0x66, 0x0c, 0x00, 0x00,
    0x60, 0x06, 0x18, 0x32, 0x00, 0x1c, 0x00, 0x00, 0x60, 0x06, 0x18, 0x00, 0x60, 0x06, 0x18, 0x00,
    0x00, 0x32, 0x60, 0x06, 0x18, 0x32, 0x00, 0x00, 0x00, 0x60, 0x06, 0x18, 0x00, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x30, 0x0c, 0x7c, 0xfe, 0xee, 0x01, 0x00, 0x00, 0x08, 0x78, 0x38, 0x05, 0xa0,
    0xba, 0x02, 0x3a, 0x3a, 0x82, 0xb8, 0xb8, 0xba, 0xba, 0xba, 0x00, 0x78, 0x00, 0x00, 0x0d, 0xd8,
    0x00, 0x18, 0x66, 0x66, 0x3e, 0x66, 0x6c, 0x18, 0x06, 0x60, 0x66, 0x00, 0x00, 0x00, 0x00, 0x06,
    0x3c, 0x18, 0x3c, 0x7e, 0x0c, 0x7e, 0x1c, 0x7e, 0x3c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c,
    0x38, 0x18, 0x7c, 0x3c, 0x78, 0x7e, 0x7e, 0x3e, 0x66, 0x7e, 0x06, 0xcc, 0x60, 0xc6, 0x66, 0x3c,
    0x7c, 0x3c, 0xf8, 0x3e, 0x7e, 0x66, 0x66, 0xc6, 0x66, 0x66, 0x7e, 0x1e, 0x60, 0x78, 0x10, 0x00,
    0x70, 0x00, 0x60, 0x00, 0x06, 0x00, 0x0e, 0x00, 0x60, 0x18, 0x0c, 0xc0, 0x38, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00,
    0x3c, 0x66, 0x0c, 0x3c, 0x66, 0x30, 0x36, 0x00, 0x3c, 0x66, 0x30, 0x66, 0x3c, 0x30, 0x66, 0x3c,
    0x18, 0x00, 0x7e, 0x3c, 0x66, 0x30, 0x3c, 0x30, 0x66, 0x66, 0x66, 0x18, 0x1e, 0x66, 0x18, 0x0e,
    0x0c, 0x00, 0x18, 0x1e, 0x1c, 0x66, 0x18, 0x1c, 0x66, 0x7c, 0x3c, 0x00, 0x00, 0x00, 0x7c, 0xfe,
    0x6c, 0x00, 0x30, 0x78, 0x18, 0x00, 0x7a, 0x00, 0x66, 0x18, 0x3c, 0x00, 0x7e, 0x00, 0x66, 0x18,
    0x18, 0x18, 0x66, 0x4c, 0x66, 0x3c, 0x7e, 0x3c, 0x18, 0x18, 0x66, 0x66, 0x18, 0x18, 0x66, 0x66,
    0x78, 0x4c, 0x18, 0x18, 0x66, 0x4c, 0x66, 0x00, 0x3d, 0x18, 0x18, 0x66, 0x66, 0x18, 0x60, 0x18,
    0x30, 0x0c, 0x3c, 0x7a, 0x66, 0x36, 0x00, 0x00, 0x30, 0x0c, 0x3c, 0x66, 0x30, 0x0c, 0x3c, 0x66,
    0x66, 0x7a, 0x30, 0x0c, 0x3c, 0x7a, 0x66, 0x00, 0x00, 0x30, 0x0c, 0x3c, 0x66, 0x0c, 0x00, 0x66,
    0x00, 0x18, 0x3c, 0x38, 0x1c, 0x38, 0xfe, 0xc6, 0x01, 0x3c, 0x00, 0x0e, 0x40, 0x40, 0x05, 0xa0,
    0xc6, 0x06, 0x06, 0x06, 0xc6, 0xc0, 0xc0, 0xc6, 0xc6, 0xc6, 0x00, 0x40, 0x00, 0x00, 0x06, 0x28,
    0x00, 0x18, 0x66, 0x66, 0x7e, 0x66, 0x6c, 0x18, 0x0c, 0x30, 0x66, 0x18, 0x00, 0x00, 0x00, 0x06,
    0x7e, 0x18, 0x7e, 0x7e, 0x0c, 0x7e, 0x3c, 0x7e, 0x7e, 0x7e, 0x00, 0x00, 0x0e, 0x00, 0xe0, 0x7e,
    0x7c, 0x3c, 0x7e, 0x7e, 0x7c, 0x7e, 0x7e, 0x7e, 0x66, 0x7e, 0x06, 0xcc, 0x60, 0xc6, 0x66, 0x7e,
    0x7e, 0x7e, 0xfc, 0x7e, 0x7e, 0x66, 0x66, 0xc6, 0x66, 0x66, 0x7e, 0x1e, 0x60, 0x78, 0x38, 0x00,
    0x38, 0x00, 0x60, 0x00, 0x06, 0x00, 0x1e, 0x00, 0x60, 0x18, 0x0c, 0xc0, 0x38, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00,
    0x7e, 0x66, 0x18, 0x66, 0x66, 0x18, 0x1c, 0x00, 0x66, 0x66, 0x18, 0x66, 0x66, 0x18, 0x18, 0x18,
    0x7e, 0x00, 0xf8, 0x66, 0x66, 0x18, 0x66, 0x18, 0x66, 0x00, 0x00, 0x18, 0x38, 0x66, 0x3c, 0x1e,
    0x18, 0x18, 0x18, 0x38, 0x3e, 0x66, 0x3e, 0x36, 0x3c, 0xc6, 0x06, 0x00, 0x00, 0x00, 0xc6, 0x00,
    0x44, 0x18, 0x48, 0x18, 0x7e, 0x00, 0xca, 0x00, 0x3c, 0x78, 0x66, 0x00, 0xfe, 0x00, 0x00, 0x18,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0xf8, 0x7e, 0x7e, 0x7e, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00,
    0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x3c,
    0x18, 0x18, 0x66, 0x4c, 0x66, 0x1c, 0x00, 0x00, 0x18, 0x18, 0x66, 0x66, 0x18, 0x18, 0x66, 0x66,
    0x18, 0x4c, 0x18, 0x18, 0x66, 0x4c, 0x66, 0x18, 0x00, 0x18, 0x18, 0x66, 0x66, 0x18, 0x60, 0x66,
    0x00, 0x3c, 0x24, 0x2c, 0x34, 0xba, 0xfe, 0xd6, 0x03, 0x66, 0x18, 0x0f, 0x70, 0x40, 0x05, 0xa0,
    0xc6, 0x06, 0x06, 0x06, 0xc6, 0xc0, 0xc0, 0xc6, 0xc6, 0xc6, 0x00, 0x70, 0x00, 0x00, 0x07, 0xd0,
    0x00, 0x18, 0x66, 0xff, 0x60, 0x6c, 0x38, 0x18, 0x1c, 0x38, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x06,
    0x66, 0x38, 0x66, 0x0c, 0x1c, 0x60, 0x70, 0x06, 0x66, 0x66, 0x18, 0x18, 0x1c, 0x7e, 0x70, 0x66,
    0xe6, 0x7e, 0x66, 0x66, 0x6e, 0x60, 0x60, 0x60, 0x66, 0x18, 0x06, 0xd8, 0x60, 0xee, 0x66, 0x66,
    0x66, 0x66, 0xcc, 0x60, 0x18, 0x66, 0x66, 0xc6, 0x66, 0x66, 0x0c, 0x18, 0x60, 0x18, 0x38, 0x00,
    0x1c, 0x00, 0x60, 0x00, 0x06, 0x00, 0x18, 0x00, 0x60, 0x00, 0x00, 0xc0, 0x18, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00,
    0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3c,
    0x7e, 0x00, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x66, 0x3c, 0x30, 0x66, 0x66, 0x18,
    0x00, 0x18, 0x3c, 0x30, 0x66, 0x66, 0x7e, 0x32, 0x18, 0x82, 0x7e, 0x00, 0x00, 0x00, 0x82, 0x00,
    0x6c, 0x18, 0x18, 0x30, 0x7e, 0x00, 0xca, 0x00, 0x18, 0x18, 0x66, 0x00, 0xd8, 0x00, 0x66, 0x00,
    0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0xd8, 0x66, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e,
    0x6e, 0x66, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0xc3, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x60, 0x66,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00,
    0x00, 0x66, 0x24, 0xe6, 0x67, 0x92, 0xfc, 0x92, 0x03, 0xc3, 0x3c, 0x09, 0x40, 0x40, 0x0d, 0xb0,
    0xc6, 0x06, 0x06, 0x06, 0xc6, 0xc0, 0xc0, 0xc6, 0xc6, 0xc6, 0x7c, 0x40, 0x00, 0x00, 0x2e, 0x10,
    0x00, 0x18, 0x66, 0xff, 0x60, 0x0c, 0x38, 0x18, 0x18, 0x18, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x0c,
    0x66, 0x38, 0x66, 0x0c, 0x1c, 0x60, 0x60, 0x06, 0x66, 0x66, 0x18, 0x18, 0x38, 0x7e, 0x38, 0x66,
    0xc2, 0x66, 0x66, 0x66, 0x66, 0x60, 0x60, 0x60, 0x66, 0x18, 0x06, 0xd8, 0x60, 0xee, 0x76, 0x66,
    0x66, 0x66, 0xcc, 0x60, 0x18, 0x66, 0x66, 0xc6, 0x3c, 0x66, 0x0c, 0x18, 0x30, 0x18, 0x6c, 0x00,
    0x0c, 0x3c, 0x7c, 0x3c, 0x3e, 0x3c, 0x18, 0x3e, 0x7c, 0x38, 0x0c, 0xcc, 0x18, 0x6c, 0x3c, 0x3c,
    0x7c, 0x3e, 0x7c, 0x3e, 0x7e, 0x66, 0x66, 0xc6, 0x66, 0x66, 0x7e, 0x18, 0x18, 0x30, 0x62, 0x18,
    0x66, 0x66, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38, 0x38, 0x38, 0x7e, 0x7e,
    0x60, 0x76, 0xd8, 0x3c, 0x3c, 0x3c, 0x66, 0x66, 0x66, 0x7e, 0x66, 0x7e, 0x30, 0x66, 0x66, 0x18,
    0x3c, 0x00, 0x7e, 0x30, 0x60, 0x66, 0x60, 0x18, 0x3e, 0xba, 0x66, 0x00, 0x00, 0x00, 0xba, 0x00,
    0x38, 0x18, 0x30, 0x18, 0x0c, 0x66, 0xca, 0x00, 0x7e, 0x18, 0x66, 0x00, 0xd8, 0x7e, 0x66, 0x18,
    0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0xd8, 0x66, 0x60, 0x60, 0x7e, 0x7e, 0x18, 0x18, 0x7e, 0x7e,
    0x66, 0x66, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7c, 0x66,
    0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x76, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38, 0x38, 0x38, 0x38,
    0x06, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0x3d, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7c, 0x66,
    0x00, 0xc3, 0x24, 0x83, 0xc1, 0xd6, 0xfc, 0xba, 0x06, 0x91, 0x3c, 0x08, 0x40, 0x38, 0x0d, 0xb0,
    0x82, 0x02, 0x3a, 0x3a, 0xba, 0xb8, 0xb8, 0x82, 0xba, 0xba, 0x7e, 0x78, 0x00, 0x00, 0x39, 0xe0,
    0x00, 0x18, 0x66, 0x66, 0x7c, 0x18, 0x70, 0x18, 0x18, 0x18, 0xff, 0x7e, 0x00, 0x7e, 0x00, 0x0c,
    0x66, 0x18, 0x0c, 0x18, 0x3c, 0x7c, 0x60, 0x0c, 0x3c, 0x7e, 0x18, 0x18, 0x70, 0x00, 0x1c, 0x0c,
    0xda, 0x66, 0x7e, 0x60, 0x66, 0x7c, 0x7c, 0x6e, 0x7e, 0x18, 0x06, 0xf0, 0x60, 0xfe, 0x76, 0x66,
    0x66, 0x66, 0xcc, 0x70, 0x18, 0x66, 0x66, 0xc6, 0x3c, 0x3c, 0x18, 0x18, 0x30, 0x18, 0x6c, 0x00,
    0x04, 0x3e, 0x7e, 0x7c, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x38, 0x0c, 0xdc, 0x18, 0xfe, 0x7e, 0x7e,
    0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x66, 0x66, 0xc6, 0x66, 0x66, 0x7e, 0x38, 0x18, 0x38, 0xf2, 0x18,
    0x60, 0x66, 0x7e, 0x3e, 0x3e, 0x3e, 0x3e, 0x7c, 0x7e, 0x7e, 0x7e, 0x38, 0x38, 0x38, 0x66, 0x66,
    0x60, 0x7f, 0xde, 0x7e, 0x7e, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x30, 0x7e, 0x66, 0x18,
    0x3e, 0x18, 0x66, 0x30, 0xfc, 0x7e, 0x70, 0x3c, 0x7e, 0xa2, 0x66, 0x1a, 0x00, 0x3c, 0xaa, 0x00,
    0x00, 0x7e, 0x60, 0x48, 0x0c, 0x66, 0xca, 0x00, 0x7e, 0x18, 0x66, 0xb0, 0xde, 0xff, 0x66, 0x18,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xde, 0x60, 0x60, 0x60, 0x60, 0x60, 0x18, 0x18, 0x18, 0x18,
    0x76, 0x76, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x6e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x66,
    0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x7f, 0x7c, 0x7e, 0x7e, 0x7e, 0x7e, 0x38, 0x38, 0x38, 0x38,
    0x1e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x66,
    0x00, 0x81, 0xe7, 0x83, 0xc1, 0xc6, 0xf8, 0x38, 0x06, 0x91, 0x3c, 0x08, 0x00, 0x00, 0x1d, 0xb8,
    0x00, 0x00, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x00, 0x7c, 0x7c, 0x06, 0x00, 0x00, 0x00, 0x38, 0x00,
    0x00, 0x18, 0x66, 0x66, 0x3e, 0x18, 0x70, 0x18, 0x18, 0x18, 0xff, 0x7e, 0x00, 0x7e, 0x00, 0x18,
    0x6e, 0x18, 0x0c, 0x18, 0x3c, 0x7e, 0x7c, 0x0c, 0x3c, 0x3e, 0x18, 0x18, 0xe0, 0x00, 0x0e, 0x0c,
    0xd6, 0x66, 0x7c, 0x60, 0x66, 0x7c, 0x7c, 0x6e, 0x7e, 0x18, 0x06, 0xf0, 0x60, 0xd6, 0x7e, 0x66,
    0x66, 0x66, 0xfc, 0x38, 0x18, 0x66, 0x66, 0xd6, 0x18, 0x3c, 0x18, 0x18, 0x18, 0x18, 0xc6, 0x00,
    0x00, 0x06, 0x66, 0x60, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x18, 0x0c, 0xf8, 0x18, 0xfe, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x60, 0x18, 0x66, 0x66, 0xd6, 0x3c, 0x66, 0x0c, 0xf0, 0x18, 0x1e, 0xbe, 0x3c,
    0x60, 0x66, 0x66, 0x06, 0x06, 0x06, 0x06, 0x60, 0x66, 0x66, 0x66, 0x18, 0x18, 0x18, 0x66, 0x66,
    0x7c, 0x1b, 0xde, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x60, 0x30, 0x3c, 0x7c, 0x7e,
    0x06, 0x18, 0x60, 0x30, 0x60, 0x3c, 0x38, 0x66, 0x60, 0xa2, 0x3e, 0x36, 0x00, 0x3c, 0xb2, 0x00,
    0x00, 0x7e, 0x78, 0x30, 0x18, 0x66, 0xca, 0x18, 0x0c, 0x7c, 0x3c, 0xd8, 0xde, 0xdb, 0x66, 0x18,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xde, 0x60, 0x7c, 0x7c, 0x60, 0x60, 0x18, 0x18, 0x18, 0x18,
    0xf6, 0x76, 0x66, 0x66, 0x66, 0x66, 0x66, 0x18, 0x6e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7c,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1b, 0x60, 0x66, 0x66, 0x66, 0x66, 0x18, 0x18, 0x18, 0x18,
    0x3e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x00, 0xe7, 0x81, 0xe6, 0x67, 0xd6, 0xfa, 0xba, 0x8c, 0x9d, 0x3c, 0x78, 0x1e, 0x1c, 0x39, 0x9c,
    0x82, 0x02, 0xb8, 0x3a, 0x3a, 0x3a, 0xba, 0x02, 0xba, 0x3a, 0x06, 0x0e, 0x07, 0xf0, 0x00, 0x00,
    0x00, 0x18, 0x00, 0xff, 0x06, 0x30, 0xde, 0x00, 0x18, 0x18, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x18,
    0x76, 0x18, 0x18, 0x0c, 0x6c, 0x06, 0x7e, 0x18, 0x66, 0x06, 0x00, 0x00, 0x70, 0x7e, 0x1c, 0x18,
    0xd6, 0x7e, 0x66, 0x60, 0x66, 0x60, 0x60, 0x66, 0x66, 0x18, 0x06, 0xd8, 0x60, 0xd6, 0x7e, 0x66,
    0x7e, 0x66, 0xf8, 0x1c, 0x18, 0x66, 0x66, 0xd6, 0x18, 0x18, 0x30, 0x18, 0x18, 0x18, 0xc6, 0x00,
    0x00, 0x3e, 0x66, 0x60, 0x66, 0x66, 0x18, 0x66, 0x66, 0x18, 0x0c, 0xf0, 0x18, 0xd6, 0x66, 0x66,
    0x66, 0x66, 0x60, 0x70, 0x18, 0x66, 0x66, 0xd6, 0x3c, 0x66, 0x18, 0xf0, 0x18, 0x1e, 0x9c, 0x24,
    0x60, 0x66, 0x66, 0x3e, 0x3e, 0x3e, 0x3e, 0x60, 0x66, 0x66, 0x66, 0x18, 0x18, 0x18, 0x7e, 0x7e,
    0x7c, 0x7b, 0xf8, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x60, 0xfe, 0x18, 0x66, 0x18,
    0x3e, 0x18, 0x60, 0xfe, 0xf8, 0x18, 0x1c, 0x66, 0x70, 0xa2, 0x00, 0x6c, 0x00, 0x00, 0xba, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x18, 0x66, 0x7a, 0x18, 0x18, 0x00, 0x00, 0x6c, 0xd8, 0xdb, 0x3c, 0x30,
    0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0xf8, 0x60, 0x7c, 0x7c, 0x7c, 0x7c, 0x18, 0x18, 0x18, 0x18,
    0xe6, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x76, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x66, 0x7c,
    0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x7b, 0x60, 0x66, 0x66, 0x66, 0x66, 0x18, 0x18, 0x18, 0x18,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x6e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x00, 0x24, 0xc3, 0x2c, 0x34, 0x92, 0xf2, 0x92, 0x8c, 0x81, 0x3c, 0xf8, 0x10, 0x12, 0x79, 0x9e,
    0xc6, 0x06, 0xc0, 0x06, 0x06, 0x06, 0xc6, 0x06, 0xc6, 0x06, 0x7e, 0x10, 0x0f, 0xf8, 0x00, 0x00,
    0x00, 0x18, 0x00, 0xff, 0x06, 0x36, 0xde, 0x00, 0x18, 0x18, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x30,
    0x66, 0x18, 0x18, 0x0c, 0x6c, 0x06, 0x66, 0x18, 0x66, 0x06, 0x00, 0x00, 0x38, 0x7e, 0x38, 0x18,
    0xdc, 0x7e, 0x66, 0x60, 0x66, 0x60, 0x60, 0x66, 0x66, 0x18, 0x06, 0xd8, 0x60, 0xc6, 0x6e, 0x66,
    0x7c, 0x66, 0xd8, 0x0e, 0x18, 0x66, 0x66, 0xfe, 0x3c, 0x18, 0x30, 0x18, 0x0c, 0x18, 0x00, 0x00,
    0x00, 0x7e, 0x66, 0x60, 0x66, 0x7e, 0x18, 0x66, 0x66, 0x18, 0x0c, 0xf8, 0x18, 0xd6, 0x66, 0x66,
    0x66, 0x66, 0x60, 0x3c, 0x18, 0x66, 0x66, 0xfe, 0x18, 0x66, 0x18, 0x38, 0x18, 0x38, 0x00, 0x66,
    0x60, 0x66, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x60, 0x7e, 0x7e, 0x7e, 0x18, 0x18, 0x18, 0x7e, 0x7e,
    0x60, 0xff, 0xf8, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x30, 0x7e, 0x66, 0x18,
    0x7e, 0x18, 0x66, 0x30, 0x60, 0x7e, 0x0e, 0x3c, 0x3c, 0xba, 0x00, 0xd8, 0x7e, 0x00, 0xaa, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x30, 0x66, 0x0a, 0x00, 0x18, 0x00, 0x00, 0x36, 0xd8, 0xdf, 0x3c, 0x30,
    0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0xf8, 0x60, 0x60, 0x60, 0x7c, 0x7c, 0x18, 0x18, 0x18, 0x18,
    0x66, 0x6e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x76, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x7e, 0x66,
    0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0xff, 0x60, 0x7e, 0x7e, 0x7e, 0x7e, 0x18, 0x18, 0x18, 0x18,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x18, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x00, 0x24, 0x66, 0x38, 0x1c, 0xba, 0xf6, 0xd6, 0xd8, 0xc3, 0x7e, 0x70, 0x1c, 0x1c, 0x71, 0x8e,
    0xc6, 0x06, 0xc0, 0x06, 0x06, 0x06, 0xc6, 0x06, 0xc6, 0x06, 0x66, 0x0c, 0x1f, 0xec, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x66, 0x7e, 0x66, 0xcc, 0x00, 0x18, 0x18, 0x66, 0x18, 0x18, 0x00, 0x18, 0x30,
    0x66, 0x18, 0x30, 0x66, 0x7e, 0x06, 0x66, 0x30, 0x66, 0x06, 0x18, 0x18, 0x1c, 0x00, 0x70, 0x18,
    0xc0, 0x66, 0x66, 0x66, 0x66, 0x60, 0x60, 0x66, 0x66, 0x18, 0x66, 0xcc, 0x60, 0xc6, 0x6e, 0x66,
    0x60, 0x66, 0xcc, 0x06, 0x18, 0x66, 0x3c, 0xfe, 0x3c, 0x18, 0x60, 0x18, 0x0c, 0x18, 0x00, 0x00,
    0x00, 0x66, 0x66, 0x60, 0x66, 0x60, 0x18, 0x66, 0x66, 0x18, 0x0c, 0xd8, 0x18, 0xd6, 0x66, 0x66,
    0x66, 0x66, 0x60, 0x0e, 0x18, 0x66, 0x3c, 0xfe, 0x3c, 0x66, 0x30, 0x18, 0x18, 0x30, 0x00, 0x42,
    0x66, 0x66, 0x60, 0x66, 0x66, 0x66, 0x66, 0x60, 0x60, 0x60, 0x60, 0x18, 0x18, 0x18, 0x66, 0x66,
    0x60, 0xd8, 0xd8, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x30, 0x18, 0x66, 0x18,
    0x66, 0x18, 0x7e, 0x30, 0x60, 0x18, 0x06, 0x18, 0x0e, 0x82, 0x00, 0x6c, 0x7e, 0x00, 0x82, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x30, 0x66, 0x0a, 0x00, 0x30, 0x00, 0x00, 0x6c, 0xd8, 0xd8, 0x18, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xd8, 0x66, 0x60, 0x60, 0x60, 0x60, 0x18, 0x18, 0x18, 0x18,
    0x66, 0x6e, 0x66, 0x66, 0x66, 0x66, 0x66, 0xc3, 0x66, 0x66, 0x66, 0x66, 0x66, 0x18, 0x7c, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xd8, 0x60, 0x60, 0x60, 0x60, 0x60, 0x18, 0x18, 0x18, 0x18,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x18, 0x76, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x00, 0x24, 0x3c, 0x30, 0x0c, 0x38, 0xe6, 0xc6, 0x58, 0x66, 0xff, 0x00, 0x10, 0x14, 0x71, 0x8e,
    0xc6, 0x06, 0xc0, 0x06, 0x06, 0x06, 0xc6, 0x06, 0xc6, 0x06, 0x66, 0x02, 0x18, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x66, 0x7c, 0x66, 0xcc, 0x00, 0x1c, 0x38, 0x66, 0x00, 0x18, 0x00, 0x18, 0x60,
    0x66, 0x18, 0x30, 0x66, 0x7e, 0x66, 0x66, 0x30, 0x66, 0x0e, 0x18, 0x18, 0x0e, 0x00, 0xe0, 0x00,
    0xe2, 0x66, 0x66, 0x66, 0x6e, 0x60, 0x60, 0x66, 0x66, 0x18, 0x66, 0xcc, 0x60, 0xc6, 0x66, 0x66,
    0x60, 0x6a, 0xcc, 0x06, 0x18, 0x66, 0x3c, 0xee, 0x66, 0x18, 0x60, 0x18, 0x06, 0x18, 0x00, 0x00,
    0x00, 0x66, 0x66, 0x60, 0x66, 0x60, 0x18, 0x7e, 0x66, 0x18, 0x0c, 0xcc, 0x18, 0xc6, 0x66, 0x66,
    0x66, 0x66, 0x60, 0x06, 0x18, 0x66, 0x3c, 0xee, 0x3c, 0x7e, 0x30, 0x18, 0x18, 0x30, 0x00, 0xc3,
    0x66, 0x66, 0x60, 0x66, 0x66, 0x66, 0x66, 0x60, 0x60, 0x60, 0x60, 0x18, 0x18, 0x18, 0x66, 0x66,
    0x60, 0xd8, 0xd8, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x3c, 0x30, 0x18, 0x7c, 0x18,
    0x66, 0x18, 0x3c, 0x30, 0x66, 0x18, 0x06, 0x4c, 0x06, 0xc6, 0x00, 0x36, 0x06, 0x00, 0xc6, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x60, 0x7f, 0x0a, 0x00, 0x30, 0x00, 0x00, 0xd8, 0xd8, 0xd8, 0x18, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xd8, 0x66, 0x60, 0x60, 0x60, 0x60, 0x18, 0x18, 0x18, 0x18,
    0x6e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x18, 0x60, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xd8, 0x60, 0x60, 0x60, 0x60, 0x60, 0x18, 0x18, 0x18, 0x18,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x66, 0x7e,
    0x00, 0x3c, 0x18, 0x00, 0x00, 0x7c, 0xee, 0xee, 0x70, 0x3c, 0x10, 0x00, 0x10, 0x12, 0x61, 0x86,
    0xba, 0x02, 0xb8, 0x3a, 0x02, 0x3a, 0xba, 0x02, 0xba, 0x3a, 0x7e, 0x1c, 0x18, 0x04, 0x00, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0xfe, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x18, 0x00, 0x18, 0x60,
    0x7e, 0x7e, 0x7e, 0x7e, 0x0c, 0x7e, 0x7e, 0x30, 0x7e, 0x3c, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18,
    0x7e, 0x66, 0x7e, 0x7e, 0x7c, 0x7e, 0x60, 0x7e, 0x66, 0x7e, 0x7e, 0xc6, 0x7e, 0xc6, 0x66, 0x7e,
    0x60, 0x7c, 0xc6, 0x7e, 0x18, 0x7e, 0x18, 0xc6, 0x66, 0x18, 0x7e, 0x1e, 0x06, 0x78, 0x00, 0xfe,
    0x00, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x18, 0x3e, 0x66, 0x3c, 0x0c, 0xce, 0x3c, 0xc6, 0x66, 0x7e,
    0x7e, 0x7e, 0x60, 0x7e, 0x1e, 0x7e, 0x18, 0xc6, 0x66, 0x3e, 0x7e, 0x18, 0x18, 0x30, 0x00, 0xff,
    0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x3c, 0x3c, 0x3c, 0x66, 0x66,
    0x7e, 0xff, 0xde, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x3e, 0x7e, 0x7e, 0x18, 0x7f, 0x18, 0x6c, 0x18,
    0x7e, 0x18, 0x18, 0x7f, 0x3e, 0x18, 0x7e, 0x6c, 0x7e, 0x7c, 0x00, 0x1a, 0x06, 0x00, 0x7c, 0x00,
    0x00, 0x7e, 0x00, 0x00, 0x7e, 0x5d, 0x0a, 0x00, 0x7e, 0x00, 0x00, 0xb0, 0xfe, 0xff, 0x18, 0x7e,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xde, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e,
    0x7c, 0x66, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x00, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x18, 0x60, 0x66,
    0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0xff, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x3c, 0x3c, 0x3c, 0x3c,
    0x7e, 0x66, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x00, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x3e, 0x7e, 0x3e,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x38, 0x00, 0x00, 0x00, 0x41, 0x82,
    0x7c, 0x00, 0x7c, 0x7c, 0x00, 0x7c, 0x7c, 0x00, 0x7c, 0x7c, 0x3c, 0x00, 0x10, 0x04, 0x00, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x76, 0x00, 0x06, 0x60, 0x00, 0x00, 0x18, 0x00, 0x18, 0x60,
    0x3c, 0x7e, 0x7e, 0x3c, 0x0c, 0x3c, 0x3c, 0x30, 0x3c, 0x38, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18,
    0x3c, 0x66, 0x7c, 0x3c, 0x78, 0x7e, 0x60, 0x3c, 0x66, 0x7e, 0x3c, 0xc6, 0x7e, 0xc6, 0x66, 0x3c,
    0x60, 0x36, 0xc6, 0x7c, 0x18, 0x3c, 0x18, 0x82, 0x66, 0x18, 0x7e, 0x1e, 0x06, 0x78, 0x00, 0xfe,
    0x00, 0x3e, 0x7c, 0x3e, 0x3e, 0x3e, 0x18, 0x06, 0x66, 0x3c, 0x0c, 0xc6, 0x3c, 0xc6, 0x66, 0x3c,
    0x7c, 0x3e, 0x60, 0x7c, 0x0e, 0x3e, 0x18, 0x82, 0x66, 0x06, 0x7e, 0x18, 0x18, 0x30, 0x00, 0x00,
    0x3c, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3c, 0x3c, 0x3c, 0x66, 0x66,
    0x7e, 0x7f, 0xde, 0x3c, 0x3c, 0x3c, 0x3e, 0x3e, 0x06, 0x3c, 0x3c, 0x18, 0xff, 0x18, 0x60, 0x70,
    0x3e, 0x18, 0x18, 0xff, 0x1c, 0x18, 0x7c, 0x38, 0x7c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x00, 0x7e, 0x00, 0x00, 0x7e, 0xc0, 0x0a, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x7e, 0x7f, 0x18, 0x3c,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xde, 0x3c, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e,
    0x78, 0x66, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0xbc, 0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x60, 0x6c,
    0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x7f, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3c, 0x3c, 0x3c, 0x3c,
    0x3c, 0x66, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0xbc, 0x3e, 0x3e, 0x3e, 0x3e, 0x06, 0x7c, 0x06,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x3c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x60, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x0e, 0x18, 0xe0, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60,
    0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x60, 0x7e,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x54, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x60, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x60, 0x7c
};

const Fonthead fnt_l9_8x16 =
{
    1,  /* font_id */
    10,  /* point */
    "8x16 system font",  /* BYTE name[32] */
    0,  /* first_ade */
    255,  /* last_ade */
    13,  /* top */
    11,  /* ascent */
    8,  /* half */
    2,  /* descent */
    2,  /* bottom */
    7,  /* max_char_width */
    8,  /* max_cell_width */
    1,  /* left_offset */
    7,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555,  /* lighten */
    0x5555,  /* skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* flags */
    0,  /* hor_table */
    off_8x16_table,  /* off_table */
    dat_table,  /* dat_table */
    256,  /* form_width */
    16,  /* form_height */
    0    /* Fonthead * next_font */
};
