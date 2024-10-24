#if 0

#clang++ -x c++ -std=c++11 -g $0 -o main -lm && ./main && rm main
#g++     -x c++ -std=c++11 -g $0 -o main -lm && ./main && rm main
#gcc     -x c   -std=c11   -g $0 -o main -lm && ./main && rm main
clang   -x c   -std=c11   -g $0 -o main -lm && ./main && rm main

exit
#endif

#include "/home/instructor/quadrantng/dependency/dm/include/dm/cbase.h"

// https://github.com/mbadolato/iTerm2-Color-Schemes/tree/master/
// http://pod.tst.eu/http://cvs.schmorp.de/rxvt-unicode/doc/rxvt.7.pod#Escape_Sequences
// Note: use '<,'>s/\%V#/0x/g

// Solarized.
//#define Ansi_0_Color 0x073642
//#define Ansi_1_Color 0xdc322f
//#define Ansi_10_Color 0x586e75
//#define Ansi_11_Color 0x657b83
//#define Ansi_12_Color 0x839496
//#define Ansi_13_Color 0x6c71c4
//#define Ansi_14_Color 0x93a1a1
//#define Ansi_15_Color 0xfdf6e3
//#define Ansi_2_Color 0x859900
//#define Ansi_3_Color 0xb58900
//#define Ansi_4_Color 0x268bd2
//#define Ansi_5_Color 0xd33682
//#define Ansi_6_Color 0x2aa198
//#define Ansi_7_Color 0xeee8d5
//#define Ansi_8_Color 0x002b36
//#define Ansi_9_Color 0xcb4b16
//#define Background_Color 0xfdf6e3
//#define Badge_Color 0xff2600
//#define Bold_Color 0x586e75
//#define Cursor_Color 0x657b83
//#define Cursor_Guide_Color 0xb3ecff
//#define Cursor_Text_Color 0xeee8d5
//#define Foreground_Color 0x657b83
//#define Link_Color 0x005cbb
//#define Selected_Text_Color 0x586e75
//#define Selection_Color 0xeee8d5

// Lucius
//#define Ansi_0_Color  0x303030
//#define Ansi_1_Color  0xff5f5f
//#define Ansi_2_Color  0x96d05e
//#define Ansi_3_Color  0xd7d7af
//#define Ansi_4_Color  0x1f7494
//#define Ansi_5_Color  0xd7a0d7
//#define Ansi_6_Color  0x87d7af
//#define Ansi_7_Color  0xd7d7d7
//#define Ansi_8_Color  0x303030
//#define Ansi_9_Color  0xff5f5f
//#define Ansi_10_Color 0xafd787
//#define Ansi_11_Color 0xd7d7af
//#define Ansi_12_Color 0x509fbb
//#define Ansi_13_Color 0xd7a0d7
//#define Ansi_14_Color 0x87d7af
//#define Ansi_15_Color 0xd7d7d7
//#define Background_Color 0x202020
//#define Badge_Color 0xff0000
//#define Bold_Color 0xffffff
//#define Cursor_Color 0xffaf00
//#define Cursor_Guide_Color 0xa6e8ff
//#define Cursor_Text_Color 0xffffff
//#define Foreground_Color 0xd7d7d7
//#define Link_Color 0x0645ad
//#define Selected_Text_Color 0xf2f2f2
//#define Selection_Color 0x363983

// Light.
//#define Ansi_0_Color 0xffffff
//#define Ansi_1_Color 0xcc0000
//#define Ansi_10_Color 0x8ae234
//#define Ansi_11_Color 0xfce94f
//#define Ansi_12_Color 0x729fcf
//#define Ansi_13_Color 0xad7fa8
//#define Ansi_14_Color 0x34e2e2
//#define Ansi_15_Color 0xeeeeec
//#define Ansi_2_Color 0x4e9a06
//#define Ansi_3_Color 0xc4a000
//#define Ansi_4_Color 0x3465a4
//#define Ansi_5_Color 0x75507b
//#define Ansi_6_Color 0x06989a
//#define Ansi_7_Color 0xd3d7cf
//#define Ansi_8_Color 0x555753
//#define Ansi_9_Color 0xef2929
//#define Background_Color 0xffffff
//#define Badge_Color 0xff0000
//#define Bold_Color 0x000000
//#define Cursor_Color 0xffaf00
//#define Cursor_Guide_Color 0xa6e8ff
//#define Cursor_Text_Color 0xffffff
//#define Foreground_Color 0x222222
//#define Link_Color 0x0645ad
//#define Selected_Text_Color 0x000000
//#define Selection_Color 0xb5d5ff

//#define Ansi_0_Color 0x000000
//#define Ansi_1_Color 0xff3333
//#define Ansi_10_Color 0xb8e532
//#define Ansi_11_Color 0xffc94a
//#define Ansi_12_Color 0x73d8ff
//#define Ansi_13_Color 0xffa3aa
//#define Ansi_14_Color 0x7ff1cb
//#define Ansi_15_Color 0xffffff
//#define Ansi_2_Color 0x86b300
//#define Ansi_3_Color 0xf29718
//#define Ansi_4_Color 0x41a6d9
//#define Ansi_5_Color 0xf07178
//#define Ansi_6_Color 0x4dbf99
//#define Ansi_7_Color 0xffffff
//#define Ansi_8_Color 0x323232
//#define Ansi_9_Color 0xff6565
//#define Background_Color 0xfafafa
//#define Bold_Color 0x5c6773
//#define Cursor_Color 0xff6a00
//#define Cursor_Text_Color 0x5c6773
//#define Foreground_Color 0x5c6773
//#define Selected_Text_Color 0x5c6773
//#define Selection_Color 0xf0eee4

// Gruvbox light
#define Ansi_0_Color 0xfbf1c7
#define Ansi_1_Color 0x9d0006
#define Ansi_10_Color 0x98971a
#define Ansi_11_Color 0xd79921
#define Ansi_12_Color 0x458588
#define Ansi_13_Color 0xb16186
#define Ansi_14_Color 0x689d69
#define Ansi_15_Color 0x7c6f64
#define Ansi_2_Color 0x79740e
#define Ansi_3_Color 0xb57614
#define Ansi_4_Color 0x076678
#define Ansi_5_Color 0x8f3f71
#define Ansi_6_Color 0x427b58
#define Ansi_7_Color 0x3c3836
#define Ansi_8_Color 0x9d8374
#define Ansi_9_Color 0xcc241d
#define Background_Color 0xfbf1c7
#define Badge_Color 0xd65d0e
#define Bold_Color 0x000000
#define Cursor_Color 0x282828
#define Cursor_Guide_Color 0x3c3836
#define Cursor_Text_Color 0xfbf1c7
#define Foreground_Color 0x282828
#define Link_Color 0xaf3a03
#define Selected_Text_Color 0x665c54
#define Selection_Color 0xd5c4a1

// Gruvbox dark hard
//#define Ansi_0_Color 0x1b1b1b
//#define Ansi_1_Color 0xcc241d
//#define Ansi_10_Color 0xb8bb26
//#define Ansi_11_Color 0xfabd2f
//#define Ansi_12_Color 0x83a598
//#define Ansi_13_Color 0xd3869b
//#define Ansi_14_Color 0x8ec07c
//#define Ansi_15_Color 0xebdbb2
//#define Ansi_2_Color 0x98971a
//#define Ansi_3_Color 0xd79921
//#define Ansi_4_Color 0x458588
//#define Ansi_5_Color 0xb16286
//#define Ansi_6_Color 0x689d6a
//#define Ansi_7_Color 0xa89984
//#define Ansi_8_Color 0x928374
//#define Ansi_9_Color 0xfb4934
//#define Background_Color 0x1b1b1b
//#define Badge_Color 0xd65d0e
//#define Bold_Color 0xebdbb2
//#define Cursor_Color 0xebdbb2
//#define Cursor_Guide_Color 0x3c3836
//#define Cursor_Text_Color 0x1b1b1b
//#define Foreground_Color 0xebdbb2
//#define Link_Color 0xd65d0e
//#define Selected_Text_Color 0xebdbb2
//#define Selection_Color 0x665c54
//#define Tab_Color 0x1b1b1b

static const uint32_t sc_colors[] =
{
    Ansi_0_Color,
    Ansi_1_Color,
    Ansi_2_Color,
    Ansi_3_Color,
    Ansi_4_Color,
    Ansi_5_Color,
    Ansi_6_Color,
    Ansi_7_Color,
    Ansi_8_Color,
    Ansi_9_Color,
    Ansi_10_Color,
    Ansi_11_Color,
    Ansi_12_Color,
    Ansi_13_Color,
    Ansi_14_Color,
    Ansi_15_Color,
};

static void aput(char* c, char bg_col, char fg_col)
{
    int bg, fg;
    if( bg_col > 7 ) bg = 100 + bg_col-8;
    else             bg =  40 + bg_col;
    if( fg_col > 7 ) fg =  90 + fg_col-8;
    else             fg =  30 + fg_col;
    printf( "\033[%i;%im%s\033[0;0m", fg, bg, c );
}

int main(void)
{
    for (uint32_t ii = 0, ii_end = 16; ii < ii_end; ii++)
    {
        printf("\033]4;%u;#%06x\007", ii, sc_colors[ii]);
    }
    printf("\033]10;#%06x\007", Foreground_Color);
    printf("\033]11;#%06x\007", Background_Color);
    printf("\033]12;#%06x\007", Cursor_Color);
    printf("\033]13;#%06x\007", Cursor_Text_Color);
    printf("\033]17;#%06x\007", Selection_Color);
    printf("\033]19;#%06x\007", Selected_Text_Color);
    printf("\033]706;#%06x\007", Bold_Color);

    printf("command:");
    for (uint32_t ii = 0, ii_end = 16; ii < ii_end; ii++)
    {
        printf("\\033]4;%u;#%06x\\007", ii, sc_colors[ii]);
    }
    printf("\\033]10;#%06x\\007", Foreground_Color);
    printf("\\033]11;#%06x\\007", Background_Color);
    printf("\\033]12;#%06x\\007", Cursor_Color);
    printf("\\033]13;#%06x\\007", Cursor_Text_Color);
    printf("\\033]17;#%06x\\007", Selection_Color);
    printf("\\033]19;#%06x\\007", Selected_Text_Color);
    printf("\\033]706;#%06x\\007", Bold_Color);
    printf("\n");

    //{
    //    int bg, fg;
    //    for( fg = 0; fg <  8; fg += 1 ) { aput("    ", fg, 0); putchar('\n'); }
    //    for( fg = 8; fg < 16; fg += 1 ) { aput("    ", fg, 0); putchar('\n'); }
    //    putchar('\n');
    //    for( bg = 0; bg < 16; bg += 1 )
    //    {
    //        for( fg = 0; fg < 16; fg += 1 )
    //        {
    //            aput( "10", bg, fg );
    //        }
    //        putchar('\n');
    //    }
    //}

    return 0;
}
