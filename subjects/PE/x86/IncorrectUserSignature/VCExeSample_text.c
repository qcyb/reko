// VCExeSample_text.c
// Generated by decompiling VCExeSample.exe
// using Reko decompiler version 0.9.3.0.

#include "VCExeSample_text.h"

// 00401120: void test6(Stack (ptr32 Eq_n) c, Stack int32 a, Stack int32 b)
void test6(cdecl_class * c, int32 a, int32 b)
{
	// Incorrect user-defined signature
	// "void sum(int, int)" is set instead of "int sum(int, int)"
	// Reko should emit code which gives chance for user to find this mistake
	c->vtbl->sum(c, a, b);
	word32 eax_n = <invalid>;
	c->vtbl->method04(c, eax_n);
}

