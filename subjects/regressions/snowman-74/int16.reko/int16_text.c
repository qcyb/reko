// int16_text.c
// Generated by decompiling int16.dll
// using Reko decompiler version 0.9.3.0.

#include "int16_text.h"

// 10071000: Register int32 get(Stack int32 dwArg04)
int32 A::get(int32 dwArg04)
{
	return this->dw0000 + dwArg04;
}

// 10071010: Register Eq_n DllMain(Stack Eq_n hModule, Stack Eq_n dwReason, Stack Eq_n lpReserved)
Eq_n DllMain(Eq_n hModule, Eq_n dwReason, Eq_n lpReserved)
{
	return 0x01;
}

