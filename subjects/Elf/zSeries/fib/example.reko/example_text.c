// example_text.c
// Generated by decompiling example
// using Reko decompiler version 0.9.3.0.

#include "example_text.h"

// 00000600: void _start(Register Eq_n r14)
void _start(Eq_n r14)
{
	Eq_n r15_n = fp - 0x00A0 & ~0x0F;
	*((word64) r15_n - 0x00B0) = 0x00;
	*((word64) r15_n - 16) = r14;
	*((word64) r15_n - 8) = r15_n - 0x00B0;
	r2_n = (uint64) __libc_start_main(*SEQ(SLICE(r2, word32, 32), 0x2040), qwLocA0, fp - 0x0098, SEQ(SLICE(r5, word32, 32), 0x0820), SEQ(SLICE(r6, word32, 32), 0x0888), *((word64) r15_n - 16), *((word64) r15_n - 8));
}

// 00000648: Register word64 deregister_tm_clones(Register Eq_n r14)
// Called from:
//      __do_global_dtors_aux
word64 deregister_tm_clones(Eq_n r14)
{
	word64 r2_n = SEQ(SLICE(r2, word32, 32), 0x2068);
	union Eq_n * r5_n = SEQ(SLICE(r5, word32, 32), 0x08C8);
	Eq_n r1_n = SEQ(SLICE(r1, word32, 32), 0x2068) + 7 - r2_n;
	if (r1_n > *r5_n)
	{
		Eq_n r1_n = *SEQ(SLICE(r1_n, word32, 32), 0x2030);
		if (r1_n != 0x00)
		{
			word64 r1_n;
			word64 r14_n;
			r1_n();
			return r1_n;
		}
		else
		{
			word64 r1_n;
			r14();
			return r1_n;
		}
	}
	else
	{
		word64 r1_n;
		r14();
		return r1_n;
	}
}

// 00000680: void register_tm_clones(Register (ptr64 ci8) r2, Register Eq_n r14)
// Called from:
//      frame_dummy
void register_tm_clones(ci8 * r2, Eq_n r14)
{
	int64 r3_n = SEQ(SLICE(r3, word32, 32), 0x2068) - SEQ(SLICE(r1, word32, 32), 0x2068);
	uint64 r1_n = r3_n >> 3 >> 63;
	uint64 r3_n = (r3_n >> 3) + r1_n;
	if (r3_n != 0x00)
	{
		Eq_n r1_n = *SEQ(SLICE(r1_n, word32, 32), 0x2050);
		if (r1_n != 0x00)
		{
			word64 r14_n;
			r1_n();
		}
		else
			r14();
	}
	else
		r14();
}

// 000006C8: void __do_global_dtors_aux(Register word64 r1, Register word64 r12)
void __do_global_dtors_aux(word64 r1, word64 r12)
{
	byte * r13_n = SEQ(SLICE(r13, word32, 32), 0x08D0);
	Eq_n r15_n = fp - 320;
	byte * r11_n = SEQ(SLICE(r11, word32, 32), 0x2068);
	if (*r11_n == 0x00)
	{
		if (*r13_n != *SEQ(SLICE(r1, word32, 32), 0x2028))
		{
			word64 r1_n = SEQ(SLICE(r1, word32, 32), 8288);
			__cxa_finalize();
		}
		r1 = deregister_tm_clones(0x070E);
		*r11_n = 0x01;
	}
	Eq_n v12_n = (word64) r15_n + 0x00F8;
	(*((word64) r15_n + 272))();
}

// 00000720: void frame_dummy()
void frame_dummy()
{
	ci8 * r13_n = SEQ(SLICE(r13, word32, 32), 0x08D8);
	ci8 * r2_n = SEQ(SLICE(r2, word32, 32), 0x1E18);
	Eq_n r15_n = fp - 320;
	Eq_n CC_n = *r13_n > *r2_n;
	if (*r13_n == *r2_n)
	{
l00000740:
		Mem18 = Mem10;
		Eq_n v8_n = (word64) r15_n + 264;
		r13_n = (ci8 *) *v8_n;
		Eq_n r14_n = *((word64) v8_n + 8);
		r15_n = *((word64) v8_n + 16);
		if (CC_n)
		{
			register_tm_clones(r2_n, r14_n);
			return;
		}
	}
	Eq_n r1_n = *SEQ(SLICE(r1, word32, 32), 0x2048);
	r1 = r1_n;
	CC_n = r1_n > 0x00;
	if (r1_n != 0x00)
		r1_n();
	goto l00000740;
}

// 00000768: Register Eq_n fib(Register Eq_n r2, Register out Eq_n r10Out, Register out Eq_n r11Out)
// Called from:
//      fib
//      main
Eq_n fib(Eq_n r2, union Eq_n & r10Out, union Eq_n & r11Out)
{
	Eq_n r1_n;
	Eq_n r11_n = fp - 328;
	word32 dwLocA4_n = (word32) r2;
	if (r2 <= 0x01)
		r1_n = r2;
	else
	{
		struct Eq_n * r11_n;
		word64 r10_n;
		fib((int64) (dwLocA4_n - 1), out r10_n, out r11_n);
		word64 r10_n;
		word64 r2_n = fib((int64) (r11_n->dw00A4 - 2), out r10_n, out r11_n);
		r1_n = SEQ(SLICE(r2_n, word32, 32), r2_n + r10_n);
	}
	Eq_n v26_n = (word64) r11_n + 0x00F8;
	int64 r1_n = (int64) (word32) r1_n;
	Eq_n r10_n;
	Eq_n r11_n;
	Eq_n r2_n;
	(*((word64) r11_n + 0x0118))();
	r10Out = r10_n;
	r11Out = r11_n;
	return r2_n;
}

// 000007E0: void main(Register word64 r3)
void main(word64 r3)
{
	struct Eq_n * r11_n;
	word64 r10_n;
	int64 r1_n = (int64) (word32) fib(0x0A, out r10_n, out r11_n);
	r11_n->t0120();
}

// 00000820: void __libc_csu_init(Register word64 r2, Register word64 r3, Register word64 r4, Register word64 r6, Register word64 r7, Register word64 r11, Register word64 r13)
void __libc_csu_init(word64 r2, word64 r3, word64 r4, word64 r6, word64 r7, word64 r11, word64 r13)
{
	union Eq_n * r1_n = SEQ(SLICE(r1_n, word32, 32), 7688);
	Eq_n r15_n = fp - 320;
	int64 r11_n = SEQ(SLICE(r11_n, word32, 32), 0x1E10) - r1_n >> 3;
	word64 r8_n;
	word64 r9_n;
	word64 r10_n;
	word64 r12_n;
	word64 r13_n;
	word64 r6_n;
	if (!_init(r6, r7, r4, r3, r2, r11, r13, out r6_n, out r8_n, out r9_n, out r10_n, out r12_n, out r13_n))
	{
		union Eq_n * r7_n = r1_n;
		do
		{
			word64 r11_n;
			(*r7_n)();
			r11_n = r11_n - 1;
		} while (r11_n != 0x01);
	}
	Eq_n v17_n = (word64) r15_n + 0x00D8;
	Eq_n r4_n = *((word64) r15_n + 272);
	r4_n();
}

// 00000888: void __libc_csu_fini(Register Eq_n r14)
void __libc_csu_fini(Eq_n r14)
{
	r14();
}

