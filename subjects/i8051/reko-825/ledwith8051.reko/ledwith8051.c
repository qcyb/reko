// ledwith8051.c
// Generated by decompiling ledwith8051.hex
// using Reko decompiler version 0.9.3.0.

#include "ledwith8051.h"

// 0000: void fn0000(Register (ptr16 Eq_n) __data)
void fn0000(struct Eq_n * __data)
{
	Eq_n R0_n;
	for (R0_n = 0x7F; R0_n != 0x00; --R0_n)
		__data->*R0_n = 0x00;
	while (true)
	{
		fn0003();
		fn0003();
	}
}

// 0003: void fn0003()
// Called from:
//      fn0000
void fn0003()
{
	byte R7_n = 0x00;
	byte R6_n = 0x00;
	do
	{
		byte R5_n = 0x00;
		byte R4_n = 0x00;
		do
		{
			++R5_n;
			if (R5_n == 0x00)
				++R4_n;
		} while (R4_n != 0x27 || R5_n != 0x10);
		++R7_n;
		if (R7_n == 0x00)
			++R6_n;
	} while ((R7_n ^ 0x0A | R6_n) != 0x00);
}

