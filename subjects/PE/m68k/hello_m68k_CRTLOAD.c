// hello_m68k_CRTLOAD.c
// Generated by decompiling hello_m68k.exe
// using Reko decompiler version 0.9.2.0.

#include "hello_m68k_CRTLOAD.h"

// 00001498: void fn00001498()
void fn00001498()
{
}

// 0000149C: void fn0000149C()
void fn0000149C()
{
	__syscall(43424);
	if (false)
		*(word16 *) 0x0AF0 = 0x1A;
	else
	{
		__syscall(43118);
		__syscall(43262);
		__syscall(43282);
		__syscall(0xA930);
		__syscall(0xA9CC);
		__syscall(43387);
		__syscall(0xA850);
		__syscall(43398);
	}
	__syscall(~0x560B);
}

// 000014E8: void fn000014E8(Register word32 a3, Register word32 a5, Stack word16 wArg00, Stack int32 dwArg02)
void fn000014E8(word32 a3, word32 a5, word16 wArg00, int32 dwArg02)
{
	0x00 = 0x00;
	__syscall(43424);
	struct Eq_n ** dwLoc12_n = SEQ(wLoc12, 0x4441);
	word32 dwLoc02_n = SEQ((word16) a3, wArg00);
	if (dwLoc12_n == null)
	{
		*(word16 *) 0x0AF0 = ~0x025C;
		__syscall(~0x560B);
		goto l0000159A;
	}
	else
	{
		struct Eq_n * a3_n = *dwLoc12_n;
		uint32 d0_n = a3_n->dw0000;
		word16 * a2_n = a5 - d0_n;
		word16 * a0_n = a2_n;
		uint32 d0_n = d0_n >> 0x01;
		if (d0_n >> 0x01 != 0x00)
		{
			do
			{
				*a0_n = 0x00;
				++a0_n;
				--d0_n;
			} while (d0_n != 0x00);
		}
		word32 a2_n = a2_n - a3_n->dw0004;
		__syscall(0xA02E);
		uint32 d0_n = a3_n->dw0008;
		word16 * a2_n = a2_n - d0_n;
		word16 * a0_n = a2_n;
		uint32 d0_n = d0_n >> 0x01;
		if (d0_n >> 0x01 != 0x00)
		{
			do
			{
				*a0_n = 0x00;
				++a0_n;
				--d0_n;
			} while (d0_n != 0x00);
		}
		union Eq_n * a2_n = a2_n - a3_n->dw000C;
		struct Eq_n * a3_n = &a3_n->dw000C + 1 + a3_n->dw0004 / 16 + a3_n->dw000C / 16;
		__syscall(0xA02E);
l00001556:
		ui32 d0_n;
		ci8 v18_n = a3_n->b0000;
		++a3_n;
		uint32 d0_n = (uint32) v18_n;
		if (v18_n <= 0x00)
		{
			if (v18_n >= 0x00)
			{
				byte v22_n = a3_n->b0000;
				uint32 d0_n = (uint32) v22_n;
				if (v22_n != 0x00)
				{
					uip32 d0_n = SEQ(SLICE(__swap(SEQ(SLICE(SEQ(SLICE(d0_n, word16, 16), (word16) d0_n << 0x08), word24, 8), a3_n[1])), word24, 8), a3_n[2]);
					a3_n += 4;
					d0_n = SEQ(SLICE(SEQ(SLICE(d0_n, word16, 16), (word16) d0_n << 0x08), word24, 8), a3_n[3]) * 0x02;
l00001578:
					a2_n = (union Eq_n *) ((char *) a2_n + d0_n);
					if (dwArg02 != 0x00 && *a2_n >= 0x00)
						*a2_n = (union Eq_n *) ((char *) *a2_n + dwArg02)[2];
					else
						*a2_n = (union Eq_n *) ((char *) *a2_n + dwLoc02_n);
					goto l00001556;
				}
l0000159A:
				__syscall(0xA9A3);
				return;
			}
			++a3_n;
			d0_n = SEQ(SLICE(SEQ(SLICE(d0_n, word16, 16), (word16) d0_n << 0x08), word24, 8), a3_n->b0000);
		}
		d0_n = SEQ(SLICE(d0_n, word16, 16), (word16) (d0_n * 0x02));
		goto l00001578;
	}
}

