/** @file    font5x7_1_r.h
    @author  fontgen
    @date    24 Sep 2011

    @defgroup font5x7_1_r  This is a 5x7 font with uppercase, lowercase, digits, and symbols.
 M.P. Hayes 2 Sep 2010

*/

#ifndef FONT5X7_1_R_H_
#define FONT5X7_1_R_H_

#define FONT5X7_1_R_WIDTH 7
#define FONT5X7_1_R_HEIGHT 5
#define FONT5X7_1_R_OFFSET 32
#define FONT5X7_1_R_SIZE 95

#ifndef FONT_WIDTH
#define FONT_WIDTH 7
#endif
#ifndef FONT_HEIGHT
#define FONT_HEIGHT 5
#endif
#ifndef FONT_OFFSET
#define FONT_OFFSET 32
#endif
#ifndef FONT_SIZE_MAX
#define FONT_SIZE_MAX 95
#endif
#include "font.h"

static font_t font5x7_1_r =
{
    .flags = 1, /* (packed)  */
    .width = 7,
    .height = 5,
    .offset = 32,
    .size = 95,
    .bytes = 5,
    .data =
    {
        /*    */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* !  */
        0x80, 0xef, 0x17, 0x00, 0x00, 
        /* "  */
        0x80, 0x03, 0xe0, 0x00, 0x00, 
        /* #  */
        0x94, 0x3f, 0xe5, 0x4f, 0x01, 
        /* $  */
        0x24, 0xd5, 0x5f, 0x25, 0x01, 
        /* %  */
        0xa3, 0x09, 0x82, 0x2c, 0x06, 
        /* &  */
        0xb6, 0x64, 0x55, 0x04, 0x05, 
        /* '  */
        0x80, 0xc2, 0x00, 0x00, 0x00, 
        /* (  */
        0x00, 0x8e, 0x28, 0x08, 0x00, 
        /* )  */
        0x80, 0xa0, 0x88, 0x03, 0x00, 
        /* *  */
        0x14, 0x84, 0x0f, 0x41, 0x01, 
        /* +  */
        0x08, 0x84, 0x0f, 0x81, 0x00, 
        /* ,  */
        0x00, 0x28, 0x0c, 0x00, 0x00, 
        /* -  */
        0x08, 0x04, 0x02, 0x81, 0x00, 
        /* .  */
        0x00, 0x30, 0x18, 0x00, 0x00, 
        /* /  */
        0x20, 0x08, 0x82, 0x20, 0x00, 
        /* 0  */
        0xbe, 0x68, 0xb2, 0xe8, 0x03, 
        /* 1  */
        0x00, 0xe1, 0x1f, 0x08, 0x00, 
        /* 2  */
        0xc2, 0x70, 0x34, 0x69, 0x04, 
        /* 3  */
        0xa2, 0x64, 0x32, 0x69, 0x03, 
        /* 4  */
        0x18, 0x8a, 0xe4, 0x0f, 0x01, 
        /* 5  */
        0xaf, 0x64, 0x32, 0x19, 0x03, 
        /* 6  */
        0xbe, 0x64, 0x32, 0x29, 0x03, 
        /* 7  */
        0x83, 0x40, 0x3c, 0x71, 0x00, 
        /* 8  */
        0xb6, 0x64, 0x32, 0x69, 0x03, 
        /* 9  */
        0xa6, 0x64, 0x32, 0xe9, 0x03, 
        /* :  */
        0x00, 0x9b, 0x0d, 0x00, 0x00, 
        /* ;  */
        0x00, 0xab, 0x0d, 0x00, 0x00, 
        /* <  */
        0x08, 0x8a, 0x28, 0x08, 0x00, 
        /* =  */
        0x14, 0x0a, 0x85, 0x42, 0x01, 
        /* >  */
        0x80, 0xa0, 0x88, 0x82, 0x00, 
        /* ?  */
        0x82, 0x40, 0x34, 0x61, 0x00, 
        /* @  */
        0xb2, 0x64, 0x3e, 0xe8, 0x03, 
        /* A  */
        0x7c, 0x45, 0x42, 0xc1, 0x07, 
        /* B  */
        0xff, 0x64, 0x32, 0x69, 0x03, 
        /* C  */
        0xbe, 0x60, 0x30, 0x28, 0x02, 
        /* D  */
        0xff, 0x60, 0x30, 0xe8, 0x03, 
        /* E  */
        0xff, 0x64, 0x32, 0x19, 0x04, 
        /* F  */
        0xff, 0x44, 0x22, 0x11, 0x00, 
        /* G  */
        0xbe, 0x60, 0x32, 0xa9, 0x07, 
        /* H  */
        0x7f, 0x04, 0x02, 0xf1, 0x07, 
        /* I  */
        0x80, 0xe0, 0x3f, 0x08, 0x00, 
        /* J  */
        0x30, 0x20, 0x10, 0xf8, 0x03, 
        /* K  */
        0x7f, 0x04, 0x45, 0x14, 0x04, 
        /* L  */
        0x7f, 0x20, 0x10, 0x08, 0x04, 
        /* M  */
        0x7f, 0x01, 0x43, 0xf0, 0x07, 
        /* N  */
        0x7f, 0x01, 0x01, 0xf1, 0x07, 
        /* O  */
        0xbe, 0x60, 0x30, 0xe8, 0x03, 
        /* P  */
        0xff, 0x44, 0x22, 0x61, 0x00, 
        /* Q  */
        0xbe, 0x60, 0x34, 0xe4, 0x05, 
        /* R  */
        0xff, 0x44, 0x22, 0x61, 0x07, 
        /* S  */
        0xa6, 0x64, 0x32, 0x29, 0x03, 
        /* T  */
        0x81, 0xc0, 0x3f, 0x10, 0x00, 
        /* U  */
        0x3f, 0x20, 0x10, 0xf8, 0x03, 
        /* V  */
        0x1f, 0x10, 0x10, 0xf4, 0x01, 
        /* W  */
        0x3f, 0x20, 0x0e, 0xf8, 0x03, 
        /* X  */
        0x63, 0x0a, 0x82, 0x32, 0x06, 
        /* Y  */
        0x03, 0x02, 0x9e, 0x30, 0x00, 
        /* Z  */
        0xe1, 0x68, 0xb2, 0x38, 0x04, 
        /* [  */
        0xff, 0x60, 0x10, 0x00, 0x00, 
        /* \  */
        0x02, 0x02, 0x02, 0x02, 0x02, 
        /* ]  */
        0x80, 0x60, 0xf0, 0x0f, 0x00, 
        /* ^  */
        0x04, 0x41, 0x40, 0x40, 0x00, 
        /* _  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* `  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* a  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* b  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* c  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* d  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* e  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* f  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* g  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* h  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* i  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* j  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* k  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* l  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* m  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* n  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* o  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* p  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* q  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* r  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* s  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* t  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* u  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* v  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* w  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* x  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* y  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* z  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* {  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* |  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* }  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
        /* ~  */
        0x00, 0x00, 0x00, 0x00, 0x00, 
    }
};
#endif  /* FONT5X7_1_R_H_  */
