// msc-config.h
// Generated by Mojon Script Compiler v3.97 20191202 fromMT Engine MK2 v1.0+
// Copyleft 2014, 2019 The Mojon Twins

unsigned char sc_x, sc_y, sc_n, sc_m, sc_c;
unsigned char script_result = 0;
unsigned char sc_terminado = 0;
unsigned char sc_continuar = 0;
unsigned int main_script_offset;
#ifndef MODE_128K
extern unsigned char main_script [0];
#asm
    ._main_script
        BINARY "../bin/scripts.bin"
#endasm
#endif
unsigned char warp_to_level;
extern unsigned char *script;
#asm
    ._script defw 0
#endasm

#define SCRIPT_0 0x0000
#define SCRIPT_1 0x0646
#define SCRIPT_2 0x0A6A
#define SCRIPT_3 0x0D37
#define SCRIPT_4 0x125B
#define SCRIPT_5 0x15C4
#define SCRIPT_6 0x1DC5
#define SCRIPT_7 0x2401
#define SCRIPT_8 0x2CF8
#define SCRIPT_INIT 49152