// test_fini.c
// Generated by decompiling test
// using Reko decompiler version 0.9.2.0.

#include "test_fini.h"

// 00000A10: void _fini()
// Called from:
//      calloc
void _fini()
{
	ptr32 r25_n = *(ptr32 *) 0x00020A4C;
	(r25_n + 0x06F4)();
}

