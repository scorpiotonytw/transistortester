
#include "tbitmap.h"

// update a bmp_n_e_igbt to bpm_n_d_igbt
//*****************************************************************************
// Bitmap:       bmp_n_d_igbt
// Width:        2
// Height:       32
// Memory usage: 10 bytes
//*****************************************************************************

//*****************************************************************************
//
// The data for the bitmapbmp_n_d_igbt
//
//*****************************************************************************
static const unsigned char bmp_n_d_igbt_data[2 * 4] PROGMEM ={
     /* 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1e, 0x21, 0x21, */
                                0xa1, 0x92, 
                                         /* 0x00, 0xf0, 
	0xe0, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x0f, 0x07, 

	0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0xff, 0x00, */
                                0xff, 0xff, 
                                         /* 0x8e, 0x07, 
	0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x00, 0x00, 

	0xcf, 0xd0, 0xd4, 0xd4, 0xcd, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xff, 0xff, 0x00, */
                                0xff, 0xff, 
                                         /* 0x71, 0xe3, 
	0xc6, 0x8c, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0x00, 

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0x94, 0x94, 0x94, */
                                0x85, 0x01 
                                       /* , 0x04, 0x06, 
	0x07, 0x07, 0x07, 0x0f, 0x1c, 0x38, 0xf0, 0xe0, */
};

//*****************************************************************************
//
// The bitmap definition
//
//*****************************************************************************
const struct tbitmap g_bmp_n_d_igbt PROGMEM =
{
	//
	// The width of the bitmap.
	//
	2,

	//
	// The height of the bitmap.
	//
	32,

	//
	// A pointer to the table containing the bitmap data.
	//
	bmp_n_d_igbt_data
};

