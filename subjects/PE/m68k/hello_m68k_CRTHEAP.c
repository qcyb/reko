// hello_m68k_CRTHEAP.c
// Generated by decompiling hello_m68k.exe
// using Reko decompiler version 0.9.2.0.

#include "hello_m68k_CRTHEAP.h"

// 000024B0: void fn000024B0(Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04)
void fn000024B0(struct Eq_n * a5, Eq_n dwArg04)
{
	fn000024C4(a5, dwArg04);
}

// 000024C4: Register word32 fn000024C4(Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04)
// Called from:
//      fn000024B0
word32 fn000024C4(struct Eq_n * a5, Eq_n dwArg04)
{
	ptr32 a7_n = fp - 0x0C;
	if (dwArg04 > -32)
		return a6;
	Eq_n d3_n = SEQ(SLICE((word32) dwArg04.u1 + 3, word16, 16), (word16) ((word32) dwArg04.u1 + 3) & ~0x03);
	do
	{
		union Eq_n * a7_n = a7_n - 4;
		*a7_n = (union Eq_n *) d3_n;
		struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
		struct Eq_n * a5_n;
		word32 d4_n;
		word32 * a6_n;
		if (fn00002510(a5, *a7_n, out d3_n, out d4_n, out a5_n, out a6_n) != 0x00 || d4_n == 0x00)
			return *a6_n;
		a7_n->t0000 = d3_n;
		struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
		a7_n = &a7_n->t0004;
	} while (fn00002644(a5_n, a7_n->t0000, out a5, out a6_n) != 0x00);
	return *a6_n;
}

// 00002510: Register int32 fn00002510(Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04, Register out Eq_n d3Out, Register out ptr32 d4Out, Register out (ptr32 Eq_n) a5Out, Register out (ptr32 word32) a6Out)
// Called from:
//      fn000024C4
int32 fn00002510(struct Eq_n * a5, Eq_n dwArg04, union Eq_n & d3Out, ptr32 & d4Out, struct Eq_n & a5Out, word32 & a6Out)
{
	Eq_n a0_n;
	struct Eq_n * d0_n = fn000027B0(a5, dwArg04, out a0_n);
	word32 ** a6_n = fp - 0x04;
	Eq_n d3_n = dwArg04;
	struct Eq_n * a7_n = fp - 0x0C;
	struct Eq_n * a2_n = d0_n;
	if (d0_n == null)
	{
		struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
		if (fn000028A0(a0_n, d0_n, a5, dwArg04, out d3_n, out d4, out a5, out a6_n) == -1)
		{
			word32 * a6_n = *a6_n;
			d3Out = a7_n->t0008;
			d4Out = d4;
			a5Out = a5;
			a6Out = a6_n;
			return 0;
		}
		a7_n->t0000 = d3_n;
		word32 a0_n;
		struct Eq_n * d0_n = fn000027B0(a5, a7_n->t0000, out a0_n);
		a7_n = (struct Eq_n *) &a7_n->t0004;
		a2_n = d0_n;
		if (d0_n == null)
		{
			a5 = fn000027A0(a5, a6_n, out a6_n);
			a7_n = (struct Eq_n *) <invalid>;
		}
	}
	struct Eq_n * d0_n = a2_n->ptr0000->ptr0004;
	uipr32 d1_n = a2_n->dw0004;
	if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - d3_n != 4)
	{
		struct Eq_n * a7_n = a7_n - 4;
		a7_n->t0000 = d3_n;
		a7_n->ptrFFFFFFFC = a2_n;
		struct Eq_n * d0_n = fn000025B4(a5, a7_n->ptrFFFFFFFC, a7_n->t0000);
		if (d0_n != null)
		{
			struct Eq_n * d0_n;
			__bclr(d0_n->ptr0004, 0x01, out d0_n);
			struct Eq_n * d0_n;
			__bset(d0_n, 0x00, out d0_n);
			d0_n->ptr0004 = d0_n;
		}
	}
	uipr32 d0_n = a2_n->dw0004;
	a2_n->dw0004 = SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03);
	a5->ptrFFFFFACC = a2_n->ptr0000;
	uipr32 d0_n = a2_n->dw0004;
	word32 * a6_n = *a6_n;
	d3Out = a7_n->t0004;
	d4Out = d4;
	a5Out = a5;
	a6Out = a6_n;
	return SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) + 0x04;
}

// 000025B4: Register (ptr32 Eq_n) fn000025B4(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Stack Eq_n dwArg08)
// Called from:
//      fn00002510
struct Eq_n * fn000025B4(struct Eq_n * a5, struct Eq_n * dwArg04, Eq_n dwArg08)
{
	struct Eq_n * a0_n = dwArg04->ptr0000;
	struct Eq_n * d0_n = a0_n->ptr0004;
	uipr32 d1_n = dwArg04->dw0004;
	if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - 0x04 - dwArg08 <= 0x00)
		return null;
	word32 a0_n;
	struct Eq_n * d0_n = fn0000273C(a0_n, a5, out a0_n);
	if (d0_n == null)
		return null;
	uipr32 d0_n = dwArg04->dw0004;
	struct Eq_n * d0_n = (word32) dwArg08 + SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03);
	d0_n->ptr0004 = (struct Eq_n *) &d0_n->ptr0004;
	d0_n->ptr0004 = d0_n;
	d0_n->dw0000 = dwArg04->ptr0000;
	dwArg04->ptr0000 = d0_n;
	return d0_n;
}

// 00002610: void fn00002610(Register (ptr32 Eq_n) a5, Stack word32 dwArg04)
void fn00002610(struct Eq_n * a5, word32 dwArg04)
{
	a5->dwFFFFFD34 = dwArg04;
}

// 00002644: Register int32 fn00002644(Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04, Register out (ptr32 Eq_n) a5Out, Register out (ptr32 word32) a6Out)
// Called from:
//      fn000024C4
int32 fn00002644(struct Eq_n * a5, Eq_n dwArg04, struct Eq_n & a5Out, word32 & a6Out)
{
	word32 ** a6_n = fp - 0x04;
	<anonymous> * a0_n = a5->ptrFFFFFD34;
	if (a0_n != null)
	{
		word32 d0_n;
		a0_n();
		if (d0_n != 0x00)
		{
			word32 * a6_n = *a6_n;
			a5Out = a5;
			a6Out = a6_n;
			return 1;
		}
	}
	word32 * a6_n = *a6_n;
	a5Out = a5;
	a6Out = a6_n;
	return 0;
}

// 0000273C: Register (ptr32 Eq_n) fn0000273C(Register (ptr32 Eq_n) a0, Register (ptr32 Eq_n) a5, Register out (ptr32 Eq_n) a0Out)
// Called from:
//      fn000025B4
//      fn00002BB4
struct Eq_n * fn0000273C(struct Eq_n * a0, struct Eq_n * a5, struct Eq_n & a0Out)
{
	struct Eq_n * d0_n;
	struct Eq_n * a0_n;
	if (a5->ptrFFFFFAD0 == null)
	{
		d0_n = fn0000275C(a0, a5, out a0_n);
		if (d0_n == null)
		{
l00002758:
			a0Out = a0_n;
			return d0_n;
		}
	}
	d0_n = a5->ptrFFFFFAD0;
	a5->ptrFFFFFAD0 = d0_n->dw0000;
	a0_n = d0_n;
	goto l00002758;
}

// 0000275C: Register int32 fn0000275C(Register (ptr32 Eq_n) a0, Register (ptr32 Eq_n) a5, Register out (ptr32 Eq_n) a0Out)
// Called from:
//      fn0000273C
int32 fn0000275C(struct Eq_n * a0, struct Eq_n * a5, struct Eq_n & a0Out)
{
	__syscall(0xA11E);
	if (a0 != null)
	{
		a5->ptrFFFFFAD0 = a0;
		struct Eq_n * d0_n = a0;
		struct Eq_n * d1_n = (char *) &a0->ptr0004 + 4;
		if (&a0->dw0FF8 - a0 > 0x00)
		{
			do
			{
				d0_n->dw0000 = d1_n;
				d0_n = d1_n;
				d1_n = (struct Eq_n *) ((char *) &d1_n->ptr0004 + 4);
				d1_n = d1_n;
			} while (&a0->dw0FF8 - d1_n > 0x00);
		}
		a0->dw0FF8 = 0;
		a0Out = (struct Eq_n *) &a0->dw0FF8;
		return 1;
	}
	else
	{
		a0Out = a0;
		return 0;
	}
}

// 000027A0: Register (ptr32 Eq_n) fn000027A0(Register (ptr32 Eq_n) a5, Register (ptr32 (ptr32 word32)) a6, Register out (ptr32 (ptr32 word32)) a6Out)
// Called from:
//      fn00002510
//      fn00002A54
//      fn00002B18
struct Eq_n * fn000027A0(struct Eq_n * a5, word32 ** a6, word32 & a6Out)
{
	word32 *** a6_n;
	struct Eq_n * a5_n;
	(*((char *) &a5->dwFFFFFAF4 + 0x0566))();
	a6Out = *a6_n;
	return a5_n;
}

// 000027B0: Register (ptr32 Eq_n) fn000027B0(Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04, Register out (ptr32 Eq_n) a0Out)
// Called from:
//      fn00002510
struct Eq_n * fn000027B0(struct Eq_n * a5, Eq_n dwArg04, struct Eq_n & a0Out)
{
	struct Eq_n * a2_n = a5->ptrFFFFFACC;
	struct Eq_n * a1_n = null;
	if ((char *) &a5->ptrFFFFFAD0 + 4 - a2_n != 0x00)
	{
		do
		{
			ui32 * a4_n = &a2_n->ptr0004;
			if ((*a4_n & 3) == 0x01)
			{
				while (true)
				{
					a0 = a2_n->dw0000;
					struct Eq_n * d0_n = a0->ptr0004;
					ui32 d3_n = *a4_n;
					if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d3_n, word16, 16), (word16) d3_n & ~0x03) - 0x04 - dwArg04 >= 0x00)
						break;
					if ((d0_n & 3) != 0x01)
						goto l0000280C;
					a2_n->dw0000 = a0->dw0000;
					a0->dw0000 = a5->ptrFFFFFAD0;
					a5->ptrFFFFFAD0 = a0;
				}
l00002880:
				a1_n = a2_n;
				goto l00002882;
			}
l0000280C:
			a2_n = a2_n->dw0000;
		} while (a2_n - ((char *) (&a5->ptrFFFFFAD0) + 4) != 0x00);
	}
	a2_n = a5->ptrFFFFFAC8;
	if (a2_n - a5->ptrFFFFFACC == 0x00)
	{
l00002882:
		a0Out = a0;
		return a1_n;
	}
	else
	{
		do
		{
			ui32 * a3_n = &a2_n->ptr0004;
			if ((*a3_n & 3) == 0x01)
			{
				do
				{
					a0 = a2_n->dw0000;
					struct Eq_n * d3_n = a0->ptr0004;
					ui32 d1_n = *a3_n;
					if (SEQ(SLICE(d3_n, word16, 16), (word16) d3_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - 0x04 - dwArg04 >= 0x00)
						goto l00002880;
					if ((d3_n & 3) != 0x01)
						goto l0000288C;
					a2_n->dw0000 = a0->dw0000;
					a0->dw0000 = a5->ptrFFFFFAD0;
					a5->ptrFFFFFAD0 = a0;
				} while (a0 - a5->ptrFFFFFACC != 0x00);
				a5->ptrFFFFFACC = a2_n;
				a0 = a2_n->dw0000;
				struct Eq_n * d0_n = a0->ptr0004;
				ui32 d1_n = *a3_n;
				if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - 0x04 - dwArg04 >= 0x00)
					goto l00002880;
				goto l00002882;
			}
l0000288C:
			a2_n = a2_n->dw0000;
		} while (a2_n - a5->ptrFFFFFACC != 0x00);
		a0Out = a0;
		return null;
	}
}

// 000028A0: Register int32 fn000028A0(Register Eq_n a0, Register (ptr32 Eq_n) a2, Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04, Register out Eq_n d3Out, Register out (ptr32 Eq_n) d4Out, Register out (ptr32 Eq_n) a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00002510
int32 fn000028A0(Eq_n a0, struct Eq_n * a2, struct Eq_n * a5, Eq_n dwArg04, union Eq_n & d3Out, struct Eq_n & d4Out, struct Eq_n & a5Out, ptr32 & a6Out)
{
	int32 d4_n = a5->dwFFFFFAF4;
	ptr32 * a6_n = fp - 0x04;
	struct Eq_n * a7_n = fp - 0x1C;
	uipr32 a2_n = SEQ(SLICE(a2, word16, 16), 0x10);
	int32 d5_n = -1;
	up32 d3_n = SEQ(SLICE((word32) dwArg04 + 7, word16, 16), (word16) ((word32) dwArg04 + 7) & ~0x03);
	if (d4_n - a5->dwFFFFFAE0 < 0x00)
	{
		int32 d7_n = d4_n << 0x04;
		do
		{
			if (*((word32) *a5->tFFFFFADC + d7_n) != 0x00)
			{
				struct Eq_n * a7_n = a7_n - 4;
				a7_n->dw0000 = d3_n;
				a7_n->dwFFFFFFFC = d4_n;
				struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
				a7_n = (struct Eq_n *) &a7_n->t0008;
				if (fn00002A54(a5, a7_n->dwFFFFFFFC, a7_n->dw0000, out d3_n, out d4_n, out d5_n, out a2_n, out a5, out a6_n) != -1)
				{
					a5->dwFFFFFAF4 = d4_n;
					struct Eq_n * d4_n = a7_n->ptr000C;
					ptr32 a6_n = *a6_n;
					d3Out = a7_n->t0008;
					d4Out = d4_n;
					a5Out = a5;
					a6Out = a6_n;
					return 0;
				}
			}
			a0 = *a5->tFFFFFADC;
			if (*((word32) a0 + d7_n) == 0x00)
			{
				d5_n = d4_n;
				break;
			}
			++d4_n;
			d7_n += a2_n;
		} while (d4_n - a5->dwFFFFFAE0 < 0x00);
	}
	if (d5_n != -1)
	{
l000029B4:
		struct Eq_n * a7_n = a7_n - 4;
		a7_n->dw0000 = d3_n;
		a7_n->dwFFFFFFFC = d5_n;
		struct Eq_n * a5_n;
		ptr32 * a6_n;
		int32 d0_n = fn000029C8(a0, a5, a7_n->dwFFFFFFFC, a7_n->dw0000, out a5_n, out a6_n);
		struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
		struct Eq_n * d4_n = a7_n->ptr000C;
		ptr32 a6_n = *a6_n;
		d3Out = a7_n->t0008;
		d4Out = d4_n;
		a5Out = a5_n;
		a6Out = a6_n;
		return d0_n;
	}
	if (a5->tFFFFFADC != 0x00)
	{
		a0 = a5->tFFFFFADC;
		__syscall(0xA024);
	}
	if (a5->tFFFFFADC != 0x00)
	{
		a0 = a5->tFFFFFAF0;
		if (*a0 == 0x00)
			goto l00002974;
	}
	__syscall(0xA122);
	if (a0 == 0x00)
	{
		struct Eq_n * d4_n = a7_n->ptr0004;
		ptr32 a6_n = *a6_n;
		d3Out = a7_n->t0000;
		d4Out = d4_n;
		a5Out = a5;
		a6Out = a6_n;
		return -1;
	}
	__syscall(41001);
	if (a5->tFFFFFADC != 0x00)
	{
		__syscall(0xA02E);
		__syscall(0xA023);
	}
	a5->tFFFFFADC = a0;
l00002974:
	a0 = (word32) *a5->tFFFFFADC + (a5->dwFFFFFAE0 << 0x04);
	int32 d0_n = 7;
	do
	{
		a0->u0 = 0;
		struct Eq_n * a0_n = (word32) a0 + 4;
		a0_n->dw0000 = 0;
		a0_n->dw0004 = 0;
		a0_n->dw0008 = 0;
		a0_n->dw000C = 0;
		a0_n->dw0010 = 0;
		a0_n->dw0014 = 0;
		a0_n->dw0018 = 0;
		a0_n->dw001C = 0;
		a0_n->dw0020 = 0;
		a0_n->dw0024 = 0;
		a0_n->dw0028 = 0;
		a0_n->dw002C = 0;
		a0_n->dw0030 = 0;
		a0_n->dw0034 = 0;
		a0_n->dw0038 = 0;
		word16 v29_n = (word16) d0_n;
		a0 = &a0_n->dw0038 + 1;
		d0_n = SEQ(SLICE(d0_n, word16, 16), v29_n - 1);
	} while (v29_n != 0x00);
	d5_n = a5->dwFFFFFAE0;
	a5->dwFFFFFAE0 += 32;
	goto l000029B4;
}

// 000029C8: Register int32 fn000029C8(Register Eq_n a0, Register (ptr32 Eq_n) a5, Stack int32 dwArg04, Stack up32 dwArg08, Register out (ptr32 Eq_n) a5Out, Register out ptr32 a6Out)
// Called from:
//      fn000028A0
int32 fn000029C8(Eq_n a0, struct Eq_n * a5, int32 dwArg04, up32 dwArg08, struct Eq_n & a5Out, ptr32 & a6Out)
{
	word32 d4_n = a5->dwFFFFFAEC;
	up32 d4_n = SEQ(SLICE(d4_n + 0x0FFF, word16, 16), (word16) (d4_n + 0x0FFF) & 0xF000);
	ptr32 * a6_n = fp - 0x04;
	if (d4_n - dwArg08 < 0x00)
		d4_n = dwArg08;
	int32 d0_n;
	__syscall(0xA11E);
	if (a0 != 0x00)
	{
		Eq_n a1_n = *a5->tFFFFFADC;
		if (((word16) a0 & 0x03) != 0x00)
			*((word32) a1_n + dwArg04 * 0x10) = SEQ(SLICE((word32) a0 + 3, word16, 16), (word16) ((word32) a0 + 3) & ~0x03);
		else
			*((word32) a1_n + dwArg04 * 0x10) = a0;
		struct Eq_n * a1_n = (word32) a1_n + (dwArg04 << 0x04);
		a1_n->t000C = a0;
		a1_n->dw0008 = d4_n;
		a1_n->dw0004 = 0;
		Eq_n d5_n;
		word32 a2_n;
		word32 d4_n;
		word32 d3_n;
		d0_n = fn00002A54(a5, dwArg04, dwArg08, out d3_n, out d4_n, out d5_n, out a2_n, out a5, out a6_n);
		struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
		if (d0_n == 0x00)
		{
l00002A4C:
			ptr32 a6_n = *a6_n;
			a5Out = a5;
			a6Out = a6_n;
			return d0_n;
		}
		a7_n->t0004 = d5_n;
		fn00002AE0(a5, a7_n->t0004);
	}
	d0_n = -1;
	goto l00002A4C;
}

// 00002A54: Register int32 fn00002A54(Register (ptr32 Eq_n) a5, Stack int32 dwArg04, Stack up32 dwArg08, Register out Eq_n d3Out, Register out Eq_n d4Out, Register out Eq_n d5Out, Register out ptr32 a2Out, Register out (ptr32 Eq_n) a5Out, Register out (ptr32 word32) a6Out)
// Called from:
//      fn000028A0
//      fn000029C8
int32 fn00002A54(struct Eq_n * a5, int32 dwArg04, up32 dwArg08, union Eq_n & d3Out, union Eq_n & d4Out, union Eq_n & d5Out, ptr32 & a2Out, struct Eq_n & a5Out, word32 & a6Out)
{
	struct Eq_n * a2_n = (word32) *a5->tFFFFFADC + (dwArg04 << 0x04);
	uipr32 d4_n = a2_n->dw0008;
	word32 d1_n = a2_n->dw0004;
	up32 d0_n = d4_n - d1_n;
	up32 d3_n = SEQ(SLICE(dwArg08 + 0x03, word16, 16), (word16) (dwArg08 + 0x03) & ~0x03);
	struct Eq_n * a1_n = a2_n->dw0000 + d1_n;
	if (d3_n - d0_n > 0x00)
	{
		__syscall(0xA020);
		word32 d4_n = d4_n - d0_n + d3_n;
		uipr32 d4_n = SEQ(SLICE(d4_n + 0x04, word16, 16), (word16) (d4_n + 0x04) & ~0x03);
		a2_n = (word32) *a5->tFFFFFADC + (dwArg04 << 0x04);
		if (*a5->tFFFFFAF0 != 0x00)
		{
			d3Out = d3;
			d4Out = d4;
			d5Out = d5;
			a2Out = a2;
			a5Out = a5;
			a6Out = a6;
			return -1;
		}
		a2_n->dw0008 = d4_n;
		a1_n = a2_n->dw0000 + a2_n->dw0004;
	}
	a2_n->dw0004 += d3_n;
	struct Eq_n * a7_n = fp - 0x14;
	word32 ** a6_n;
	struct Eq_n * a5_n;
	if (fn00002BB4(a5, a1_n, d3_n, out a5_n, out a6_n) != 0x00)
	{
		a5_n = fn000027A0(a5_n, a6_n, out a6_n);
		a7_n = (struct Eq_n *) <invalid>;
	}
	struct Eq_n * a7_n = &a7_n->t0004;
	Eq_n d4_n = a7_n->t0000;
	Eq_n d5_n = a7_n->t0004;
	ptr32 a2_n = a7_n->ptr0008;
	word32 * a6_n = *a6_n;
	d3Out = a7_n->t0000;
	d4Out = d4_n;
	d5Out = d5_n;
	a2Out = a2_n;
	a5Out = a5_n;
	a6Out = a6_n;
	return 0;
}

// 00002AE0: void fn00002AE0(Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04)
// Called from:
//      fn000029C8
void fn00002AE0(struct Eq_n * a5, Eq_n dwArg04)
{
	if (*((word32) *a5->tFFFFFADC + dwArg04 * 0x10) != 0x00)
		__syscall(0xA01F);
	Eq_n a0_n = *a5->tFFFFFADC;
	((word32) a0_n + dwArg04 * 0x10)->u0 = 0;
	*((word32) a0_n + (dwArg04 * 0x10 + 4)) = 0;
	*((word32) a0_n + (dwArg04 * 0x10 + 8)) = 0;
}

// 00002B18: void fn00002B18(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04)
void fn00002B18(struct Eq_n * a5, struct Eq_n * dwArg04)
{
	if (dwArg04 != null)
	{
		struct Eq_n * a2_n = dwArg04->ptrFFFFFFFC;
		struct Eq_n * d1_n = a2_n->ptr0004;
		if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - (dwArg04 - (struct Eq_n *) 0x04) != 0x00)
		{
			word32 a6_n;
			a5 = fn000027A0(a5, fp - 0x04, out a6_n);
		}
		struct Eq_n * d0_n;
		__bclr(a2_n->ptr0004, 0x01, out d0_n);
		struct Eq_n * d0_n;
		__bset(d0_n, 0x00, out d0_n);
		a2_n->ptr0004 = d0_n;
		if (a5->tFFFFFAE4 != -1 && d0_n - (a5->ptrFFFFFACC)->ptr0004 < 0x00)
		{
			word32 d1_n = a2_n->dw0000 + 4;
			if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - 0x04 - a5->tFFFFFAE4 >= 0x00)
				a5->ptrFFFFFACC = a2_n;
		}
	}
}

// 00002BB4: Register int32 fn00002BB4(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Stack up32 dwArg08, Register out (ptr32 Eq_n) a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00002A54
int32 fn00002BB4(struct Eq_n * a5, struct Eq_n * dwArg04, up32 dwArg08, struct Eq_n & a5Out, ptr32 & a6Out)
{
	struct Eq_n *** dwLoc1C_n = fp + ~0x17;
	struct Eq_n * a0_n;
	struct Eq_n * d0_n = fn0000273C(fp + ~0x17, a5, out a0_n);
	if (d0_n != null)
	{
		struct Eq_n * a0_n;
		if (fn0000273C(a0_n, a5, out a0_n) == null)
			goto l00002DE8;
		word32 a0_n;
		if (fn0000273C(a0_n, a5, out a0_n) != null)
		{
			struct Eq_n * a3_n;
			up32 d0_n = fn00002EA8(a5, dwArg04, fp + ~0x07);
			if (d0_n == 0x00)
			{
				if ((dwLoc08->ptr0004 & 3) != 2)
					goto l00002DE8;
				a3_n = dwLoc08;
			}
			else
			{
				a3_n = d0_n;
				dwLoc1C_n = fp + ~0x13;
			}
			a3_n->ptr0004 = dwArg04;
			struct Eq_n * d1_n;
			__bclr(dwArg04, 0x01, out d1_n);
			struct Eq_n * d1_n;
			__bset(d1_n, 0x00, out d1_n);
			a3_n->ptr0004 = d1_n;
			dwArg04->ptr0000 = a3_n;
			if (d0_n + 0x03 <= 3)
			{
				word16 v24_n = g_a2C58[(int32) (int16) (d0_n + 0x03) * 2];
				ptr32 a6_n;
				int32 d0_n;
				struct Eq_n * a5_n;
				word32 a1_n;
				(11352 + (int32) v24_n)();
				a5Out = a5_n;
				a6Out = a6_n;
				return d0_n;
			}
			if ((dwLoc08->ptr0004 & 3) == 2)
			{
				if ((char *) &a5->ptrFFFFFAD0 + 4 - dwLoc08->dw0000 == 0x00)
				{
					struct Eq_n * d0_n = a3_n->ptr0004;
					up32 d0_n = SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) + dwArg08;
					if (d0_n - a5->dwFFFFFAD8 > 0x00)
						a5->dwFFFFFAD8 = d0_n;
				}
				fn00002E18(a3_n, dwArg08, dwLoc08->dw0000, fp + ~0x1B);
				struct Eq_n * d0_n = dwLoc08->dw0000 + 4;
				struct Eq_n * d1_n = dwLoc08->ptr0004;
				up32 d0_n = SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03);
				fn00002E18(dwLoc08, d0_n, a3_n, fp + ~0x1B);
				struct Eq_n * d0_n = a5->ptrFFFFFACC->ptr0004;
				if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - dwArg04 > 0x00)
				{
					word32 d0_n = a3_n->dw0000 + 4;
					struct Eq_n * d1_n = a3_n->ptr0004;
					if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - 0x04 - a5->tFFFFFAE4 >= 0x00)
						a5->ptrFFFFFACC = a3_n;
				}
				a5Out = a5;
				a6Out = a6;
				return 0;
			}
		}
	}
l00002DE8:
	if (*dwLoc1C_n != 0x00)
	{
		do
		{
			**dwLoc1C_n = (struct Eq_n ***) a5->ptrFFFFFAD0;
			a5->ptrFFFFFAD0 = (struct Eq_n *) *dwLoc1C_n;
			struct Eq_n *** v19_n = (char *) dwLoc1C_n + 4;
			dwLoc1C_n = v19_n;
		} while (*v19_n != 0x00);
	}
	a5Out = a5;
	a6Out = a6;
	return -1;
}

// 00002E18: void fn00002E18(Stack (ptr32 Eq_n) dwArg04, Stack up32 dwArg08, Stack (ptr32 Eq_n) dwArg0C, Stack (ptr32 (ptr32 (ptr32 Eq_n))) dwArg10)
// Called from:
//      fn00002BB4
void fn00002E18(struct Eq_n * dwArg04, up32 dwArg08, struct Eq_n * dwArg0C, struct Eq_n *** dwArg10)
{
	struct Eq_n * d2_n = dwArg04->ptr0004;
	struct Eq_n * a2_n = dwArg04;
	if ((d2_n & 3) != 2)
	{
		struct Eq_n * d1_n = dwArg0C->ptr0004;
		if ((d1_n & 0x03) == 0x02)
		{
			struct Eq_n * d2_n = SEQ(SLICE(d2_n, word16, 16), (word16) d2_n & ~0x03) + dwArg08;
			dwArg0C->ptr0004 = d2_n;
			struct Eq_n * d2_n;
			__bclr(d2_n, 0x00, out d2_n);
			struct Eq_n * d2_n;
			__bset(d2_n, 0x01, out d2_n);
			dwArg0C->ptr0004 = d2_n;
			dwArg04->dw0000 = dwArg0C;
			return;
		}
		struct Eq_n * d2_n = SEQ(SLICE(d2_n, word16, 16), (word16) d2_n & ~0x03) + dwArg08;
		if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - d2_n != 0x00)
		{
			struct Eq_n ** a0_n = *dwArg10;
			struct Eq_n * v32_n = *a0_n;
			*dwArg10 = (struct Eq_n ***) ((char *) a0_n + 4);
			v32_n->ptr0004 = d2_n;
			struct Eq_n * d2_n;
			__bclr(d2_n, 0x00, out d2_n);
			struct Eq_n * d2_n;
			__bset(d2_n, 0x01, out d2_n);
			v32_n->ptr0004 = d2_n;
			dwArg04->dw0000 = v32_n;
			a2_n = v32_n;
		}
	}
	a2_n->dw0000 = dwArg0C;
}

// 00002EA8: Register int32 fn00002EA8(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Stack (ptr32 (ptr32 Eq_n)) dwArg08)
// Called from:
//      fn00002BB4
int32 fn00002EA8(struct Eq_n * a5, struct Eq_n * dwArg04, struct Eq_n ** dwArg08)
{
	if ((char *) &a5->ptrFFFFFAD0 + 4 - a5->ptrFFFFFAC8 == 0x00)
		return -3;
	struct Eq_n * d0_n = a5->ptrFFFFFAC8->ptr0004;
	if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - dwArg04 > 0x00)
		return -1;
	up32 d0_n = a5->dwFFFFFAD8;
	if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - dwArg04 <= 0x00)
		return -2;
	struct Eq_n * a1_n = a5->ptrFFFFFAC8;
	while (true)
	{
		struct Eq_n * a0_n = a1_n->dw0000;
		struct Eq_n * d1_n = a0_n->ptr0004;
		if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - dwArg04 > 0x00)
			break;
		a1_n = a0_n;
	}
	*dwArg08 = (struct Eq_n **) a1_n;
	struct Eq_n * d1_n = a1_n->ptr0004;
	int32 d0_n = 0;
	if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - dwArg04 != 0x00)
		d0_n = 1;
	return d0_n;
}

