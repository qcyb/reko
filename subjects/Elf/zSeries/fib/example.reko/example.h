// example.h
// Generated by decompiling example
// using Reko decompiler version 0.9.3.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (5CE code t05CE) (5EE code t05EE) (70E code t070E) (8C8 Eq_69 t08C8) (8D0 byte b08D0) (8D8 ci8 b08D8) (1E08 (ptr64 code) ptr1E08) (1E18 ci8 b1E18) (2018 (ptr64 code) ptr2018) (2020 (ptr64 code) ptr2020) (2028 byte b2028) (2030 (ptr64 code) ptr2030) (2038 (ptr64 code) ptr2038) (2048 (ptr64 code) ptr2048) (2050 (ptr64 code) ptr2050) (2068 byte b2068))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_16: (struct "Eq_16" (110 (ptr64 code) ptr0110))
	T_16 (in r15_33 : (ptr64 Eq_16))
	T_19 (in fp - 320<i64> : word64)
Eq_45: (struct "Eq_45" (FFFFFF50 byte bFFFFFF50) (FFFFFFF0 word64 qwFFFFFFF0) (FFFFFFF8 ptr64 ptrFFFFFFF8))
	T_45 (in r15_7 : (ptr64 Eq_45))
	T_50 (in fp - 160<i64> & 0xFFFFFFFFFFFFFFF0<64> : word64)
Eq_46: (union "Eq_46" (int64 u0) (ptr64 u1))
	T_46 (in fp : ptr64)
Eq_47: (union "Eq_47" (int64 u0) (ptr64 u1))
	T_47 (in 160<i64> : int64)
Eq_48: (union "Eq_48" (ui64 u0) (ptr64 u1))
	T_48 (in fp - 160<i64> : ptr64)
Eq_63: (fn void ())
	T_63 (in __libc_start_main : ptr64)
	T_64 (in signature of __libc_start_main : void)
Eq_67: (union "Eq_67" (int64 u0) (ci8 u1) (ptr64 u2))
	T_67 (in 000000000000206F : ptr64)
Eq_68: (union "Eq_68" (int64 u0) (ci8 u1) (ptr64 u2))
	T_68 (in 0000000000002068 : ptr64)
Eq_69: (union "Eq_69" (int64 u0) (ci8 u1))
	T_69 (in 0x206F<u64> - 0x2068<u64> : word64)
	T_71 (in Mem0[0x00000000000008C8<p64>:byte] : byte)
Eq_81: (union "Eq_81" (int64 u0) (ptr64 u1))
	T_81 (in 0000000000002068 : ptr64)
Eq_82: (union "Eq_82" (int64 u0) (ptr64 u1))
	T_82 (in 0000000000002068 : ptr64)
Eq_86: (union "Eq_86" (int64 u0) (uint64 u1))
	T_86 (in r3_5 >> 3<i32> : word64)
Eq_112: (fn void ((ptr64 code)))
	T_112 (in deregister_tm_clones : ptr64)
	T_113 (in signature of deregister_tm_clones : void)
Eq_119: (fn void ())
	T_119 (in __cxa_finalize : ptr64)
	T_120 (in signature of __cxa_finalize : void)
Eq_128: (union "Eq_128" (bool u0) (byte u1))
	T_128 (in CC_43 : Eq_128)
	T_133 (in g_b08D8 > g_b1E18 : bool)
	T_141 (in r1_31 > null : bool)
Eq_144: <unknown>
	T_144 (in Mem10 : <unknown>)
	T_145 (in Mem17 : <unknown>)
Eq_146: (struct "Eq_146" (0 ptr64 ptr0000) (8 (ptr64 code) ptr0008) (10 ptr64 ptr0010))
	T_146 (in v8_16 : (ptr64 Eq_146))
	T_148 (in r15_12 + 264<i64> : word64)
Eq_159: (fn void ((ptr64 code)))
	T_159 (in register_tm_clones : ptr64)
	T_160 (in signature of register_tm_clones : void)
Eq_162: (union "Eq_162" (int64 u0) (up64 u1))
	T_162 (in r2 : Eq_162)
	T_165 (in r1_73 : Eq_162)
	T_172 (in 1<64> : word64)
	T_180 (in CONVERT(dwLocA4_112 - 1<i32>, word32, int64) : int64)
	T_192 (in CONVERT(Mem24[r11_40 + 164<i64>:word32] - 2<i32>, word32, int64) : int64)
	T_198 (in SEQ(SLICE(r2_66, word32, 32), r2_66 + r10_61) : word64)
	T_207 (in r2_102 : Eq_162)
	T_216 (in 0xA<64> : word64)
Eq_166: (struct "Eq_166" (118 (ptr64 code) ptr0118))
	T_166 (in r11_21 : (ptr64 Eq_166))
	T_169 (in fp - 328<i64> : word64)
Eq_174: (struct "Eq_174" (A4 word32 dw00A4))
	T_174 (in r11_40 : (ptr64 Eq_174))
Eq_176: (fn word64 (Eq_162, ptr64, ptr64))
	T_176 (in fib : ptr64)
	T_177 (in signature of fib : void)
	T_186 (in fib : ptr64)
	T_215 (in fib : ptr64)
Eq_212: (struct "Eq_212" (120 (ptr64 code) ptr0120))
	T_212 (in r11_29 : (ptr64 Eq_212))
Eq_232: (struct "Eq_232" (110 (ptr64 code) ptr0110))
	T_232 (in r15_29 : (ptr64 Eq_232))
	T_235 (in fp - 320<i64> : word64)
Eq_237: (union "Eq_237" (int64 u0) (ptr64 u1))
	T_237 (in 0000000000001E10 : ptr64)
Eq_238: (union "Eq_238" (int64 u0) (ptr64 u1))
	T_238 (in 0000000000001E08 : ptr64)
Eq_248: (fn Eq_256 (word64, word64, word64, word64, word64, word64, word64, ptr64, ptr64, ptr64, ptr64, ptr64, ptr64))
	T_248 (in _init : ptr64)
	T_249 (in signature of _init : void)
Eq_256: (union "Eq_256" (bool u0) (byte u1))
	T_256 (in _init(r6, r7, r4, r3, r2, r11, r13, out r6_112, out r8_48, out r9_49, out r10_40, out r12_42, out r13_43) : byte)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in CC : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in r6 : word64)
  Class: Eq_3
  DataType: word64
  OrigDataType: word64
T_4: (in r7 : word64)
  Class: Eq_4
  DataType: word64
  OrigDataType: word64
T_5: (in r8 : word64)
  Class: Eq_5
  DataType: word64
  OrigDataType: word64
T_6: (in r9 : word64)
  Class: Eq_6
  DataType: word64
  OrigDataType: word64
T_7: (in r10 : word64)
  Class: Eq_7
  DataType: word64
  OrigDataType: word64
T_8: (in r11 : word64)
  Class: Eq_8
  DataType: word64
  OrigDataType: word64
T_9: (in r13 : word64)
  Class: Eq_9
  DataType: word64
  OrigDataType: word64
T_10: (in r6Out : ptr64)
  Class: Eq_10
  DataType: ptr64
  OrigDataType: ptr64
T_11: (in r8Out : ptr64)
  Class: Eq_11
  DataType: ptr64
  OrigDataType: ptr64
T_12: (in r9Out : ptr64)
  Class: Eq_12
  DataType: ptr64
  OrigDataType: ptr64
T_13: (in r10Out : ptr64)
  Class: Eq_13
  DataType: ptr64
  OrigDataType: ptr64
T_14: (in r12Out : ptr64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: ptr64
T_15: (in r13Out : ptr64)
  Class: Eq_15
  DataType: ptr64
  OrigDataType: ptr64
T_16: (in r15_33 : (ptr64 Eq_16))
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (struct (110 T_37 t0110)))
T_17: (in fp : ptr64)
  Class: Eq_17
  DataType: ptr64
  OrigDataType: ptr64
T_18: (in 320<i64> : int64)
  Class: Eq_18
  DataType: int64
  OrigDataType: int64
T_19: (in fp - 320<i64> : word64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: ptr64
T_20: (in r1_37 : (ptr64 code))
  Class: Eq_20
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_21: (in 0000000000002038 : ptr64)
  Class: Eq_21
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_22 t0000)))
T_22: (in Mem34[0x0000000000002038<p64>:word64] : word64)
  Class: Eq_20
  DataType: (ptr64 code)
  OrigDataType: word64
T_23: (in 0<64> : word64)
  Class: Eq_20
  DataType: (ptr64 code)
  OrigDataType: word64
T_24: (in r1_37 == null : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in v16_57 : ptr64)
  Class: Eq_25
  DataType: ptr64
  OrigDataType: ptr64
T_26: (in 208<i64> : int64)
  Class: Eq_26
  DataType: int64
  OrigDataType: int64
T_27: (in r15_33 + 208<i64> : word64)
  Class: Eq_25
  DataType: ptr64
  OrigDataType: ptr64
T_28: (in r6_78 : ptr64)
  Class: Eq_10
  DataType: ptr64
  OrigDataType: word64
T_29: (in r8_80 : ptr64)
  Class: Eq_11
  DataType: ptr64
  OrigDataType: word64
T_30: (in r9_81 : ptr64)
  Class: Eq_12
  DataType: ptr64
  OrigDataType: word64
T_31: (in r10_82 : ptr64)
  Class: Eq_13
  DataType: ptr64
  OrigDataType: word64
T_32: (in r12_84 : ptr64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: word64
T_33: (in r13_85 : ptr64)
  Class: Eq_15
  DataType: ptr64
  OrigDataType: word64
T_34: (in CC_89 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_35: (in 272<i64> : int64)
  Class: Eq_35
  DataType: int64
  OrigDataType: int64
T_36: (in r15_33 + 272<i64> : word64)
  Class: Eq_36
  DataType: ptr64
  OrigDataType: ptr64
T_37: (in Mem34[r15_33 + 272<i64>:word64] : word64)
  Class: Eq_37
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_38: (in r1_5 : (ptr64 code))
  Class: Eq_38
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_39: (in 0000000000002018 : ptr64)
  Class: Eq_39
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_40 t0000)))
T_40: (in Mem0[0x0000000000002018<p64>:word64] : word64)
  Class: Eq_38
  DataType: (ptr64 code)
  OrigDataType: word64
T_41: (in r1_5 : (ptr64 code))
  Class: Eq_41
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_42: (in 0000000000002020 : ptr64)
  Class: Eq_42
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_43 t0000)))
T_43: (in Mem0[0x0000000000002020<p64>:word64] : word64)
  Class: Eq_41
  DataType: (ptr64 code)
  OrigDataType: word64
T_44: (in r14 : word64)
  Class: Eq_44
  DataType: word64
  OrigDataType: word64
T_45: (in r15_7 : (ptr64 Eq_45))
  Class: Eq_45
  DataType: (ptr64 Eq_45)
  OrigDataType: (ptr64 (struct (FFFFFF50 T_54 tFFFFFF50) (FFFFFFF0 T_57 tFFFFFFF0) (FFFFFFF8 T_62 tFFFFFFF8)))
T_46: (in fp : ptr64)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_47: (in 160<i64> : int64)
  Class: Eq_47
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_48: (in fp - 160<i64> : ptr64)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: (union (ui64 u1) (ptr64 u0))
T_49: (in 0xFFFFFFFFFFFFFFF0<64> : word64)
  Class: Eq_49
  DataType: ui64
  OrigDataType: ui64
T_50: (in fp - 160<i64> & 0xFFFFFFFFFFFFFFF0<64> : word64)
  Class: Eq_45
  DataType: (ptr64 Eq_45)
  OrigDataType: ui64
T_51: (in 0<8> : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in -176<i64> : int64)
  Class: Eq_52
  DataType: int64
  OrigDataType: int64
T_53: (in r15_7 + -176<i64> : word64)
  Class: Eq_53
  DataType: ui64
  OrigDataType: ui64
T_54: (in Mem10[r15_7 + -176<i64>:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_55: (in -16<i64> : int64)
  Class: Eq_55
  DataType: int64
  OrigDataType: int64
T_56: (in r15_7 + -16<i64> : word64)
  Class: Eq_56
  DataType: ptr64
  OrigDataType: ptr64
T_57: (in Mem14[r15_7 + -16<i64>:word64] : word64)
  Class: Eq_44
  DataType: word64
  OrigDataType: word64
T_58: (in 176<i64> : int64)
  Class: Eq_58
  DataType: int64
  OrigDataType: int64
T_59: (in r15_7 - 176<i64> : word64)
  Class: Eq_59
  DataType: ptr64
  OrigDataType: ptr64
T_60: (in -8<i64> : int64)
  Class: Eq_60
  DataType: int64
  OrigDataType: int64
T_61: (in r15_7 + -8<i64> : word64)
  Class: Eq_61
  DataType: ptr64
  OrigDataType: ptr64
T_62: (in Mem16[r15_7 + -8<i64>:word64] : word64)
  Class: Eq_59
  DataType: ptr64
  OrigDataType: word64
T_63: (in __libc_start_main : ptr64)
  Class: Eq_63
  DataType: (ptr64 Eq_63)
  OrigDataType: (ptr64 (fn T_65 ()))
T_64: (in signature of __libc_start_main : void)
  Class: Eq_63
  DataType: (ptr64 Eq_63)
  OrigDataType: 
T_65: (in __libc_start_main() : void)
  Class: Eq_65
  DataType: void
  OrigDataType: void
T_66: (in r14 : (ptr64 code))
  Class: Eq_66
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_67: (in 000000000000206F : ptr64)
  Class: Eq_67
  DataType: int64
  OrigDataType: (union (int64 u0) (ci8 u1) (ptr64 u2))
T_68: (in 0000000000002068 : ptr64)
  Class: Eq_68
  DataType: int64
  OrigDataType: (union (int64 u0) (ci8 u1) (ptr64 u2))
T_69: (in 0x206F<u64> - 0x2068<u64> : word64)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: (union (int64 u0) (ci8 u1))
T_70: (in 00000000000008C8 : ptr64)
  Class: Eq_70
  DataType: (ptr64 Eq_69)
  OrigDataType: (ptr64 (struct (0 T_71 t0000)))
T_71: (in Mem0[0x00000000000008C8<p64>:byte] : byte)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: ci8
T_72: (in 0x206F<u64> - 0x2068<u64> > g_t08C8 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in r1_11 : (ptr64 code))
  Class: Eq_73
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_74: (in 0000000000002030 : ptr64)
  Class: Eq_74
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_75 t0000)))
T_75: (in Mem0[0x0000000000002030<p64>:word64] : word64)
  Class: Eq_73
  DataType: (ptr64 code)
  OrigDataType: word64
T_76: (in 0<64> : word64)
  Class: Eq_73
  DataType: (ptr64 code)
  OrigDataType: word64
T_77: (in r1_11 != null : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in r14_18 : word64)
  Class: Eq_78
  DataType: word64
  OrigDataType: word64
T_79: (in r14 : (ptr64 code))
  Class: Eq_79
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_80: (in r3_5 : int64)
  Class: Eq_80
  DataType: int64
  OrigDataType: int64
T_81: (in 0000000000002068 : ptr64)
  Class: Eq_81
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_82: (in 0000000000002068 : ptr64)
  Class: Eq_82
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_83: (in 0x2068<u64> - 0x2068<u64> : word64)
  Class: Eq_80
  DataType: int64
  OrigDataType: int64
T_84: (in 3<i32> : int32)
  Class: Eq_84
  DataType: int32
  OrigDataType: int32
T_85: (in r3_5 >> 3<i32> : word64)
  Class: Eq_85
  DataType: int64
  OrigDataType: int64
T_86: (in r3_5 >> 3<i32> : word64)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: (union (int64 u0) (uint64 u1))
T_87: (in 63<i32> : int32)
  Class: Eq_87
  DataType: int32
  OrigDataType: int32
T_88: (in r3_5 >> 3<i32> >> 63<i32> : word64)
  Class: Eq_88
  DataType: uint64
  OrigDataType: uint64
T_89: (in (r3_5 >> 3<i32>) + ((r3_5 >> 3<i32>) >> 63<i32>) : word64)
  Class: Eq_89
  DataType: uint64
  OrigDataType: uint64
T_90: (in 0<64> : word64)
  Class: Eq_89
  DataType: uint64
  OrigDataType: word64
T_91: (in (r3_5 >> 3<i32>) + ((r3_5 >> 3<i32>) >> 63<i32>) != 0<64> : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in r1_13 : (ptr64 code))
  Class: Eq_92
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_93: (in 0000000000002050 : ptr64)
  Class: Eq_93
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_94 t0000)))
T_94: (in Mem0[0x0000000000002050<p64>:word64] : word64)
  Class: Eq_92
  DataType: (ptr64 code)
  OrigDataType: word64
T_95: (in 0<64> : word64)
  Class: Eq_92
  DataType: (ptr64 code)
  OrigDataType: word64
T_96: (in r1_13 != null : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in r14_20 : word64)
  Class: Eq_97
  DataType: word64
  OrigDataType: word64
T_98: (in r11 : word64)
  Class: Eq_98
  DataType: word64
  OrigDataType: word64
T_99: (in r12 : word64)
  Class: Eq_99
  DataType: word64
  OrigDataType: word64
T_100: (in r13 : word64)
  Class: Eq_100
  DataType: word64
  OrigDataType: word64
T_101: (in r14 : (ptr64 code))
  Class: Eq_101
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_102: (in 0000000000002068 : ptr64)
  Class: Eq_102
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_103 t0000)))
T_103: (in Mem16[0x0000000000002068<p64>:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in 0<8> : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_105: (in g_b2068 != 0<8> : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in r4_56 : word64)
  Class: Eq_106
  DataType: word64
  OrigDataType: word64
T_107: (in 00000000000008D0 : ptr64)
  Class: Eq_107
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_108 t0000)))
T_108: (in Mem16[0x00000000000008D0<p64>:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in 0000000000002028 : ptr64)
  Class: Eq_109
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_110 t0000)))
T_110: (in Mem16[0x0000000000002028<p64>:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_111: (in g_b08D0 == g_b2028 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in deregister_tm_clones : ptr64)
  Class: Eq_112
  DataType: (ptr64 Eq_112)
  OrigDataType: (ptr64 (fn T_115 (T_114)))
T_113: (in signature of deregister_tm_clones : void)
  Class: Eq_112
  DataType: (ptr64 Eq_112)
  OrigDataType: 
T_114: (in 000000000000070E : ptr64)
  Class: Eq_66
  DataType: (ptr64 code)
  OrigDataType: ptr64
T_115: (in deregister_tm_clones(&g_t070E) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_116: (in 1<8> : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_117: (in 0000000000002068 : ptr64)
  Class: Eq_117
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_118 t0000)))
T_118: (in Mem34[0x0000000000002068<p64>:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_119: (in __cxa_finalize : ptr64)
  Class: Eq_119
  DataType: (ptr64 Eq_119)
  OrigDataType: (ptr64 (fn T_121 ()))
T_120: (in signature of __cxa_finalize : void)
  Class: Eq_119
  DataType: (ptr64 Eq_119)
  OrigDataType: 
T_121: (in __cxa_finalize() : void)
  Class: Eq_121
  DataType: void
  OrigDataType: void
T_122: (in r13_11 : ptr64)
  Class: Eq_122
  DataType: ptr64
  OrigDataType: ptr64
T_123: (in 00000000000008D8 : ptr64)
  Class: Eq_122
  DataType: ptr64
  OrigDataType: ptr64
T_124: (in r15_12 : ptr64)
  Class: Eq_124
  DataType: ptr64
  OrigDataType: ptr64
T_125: (in fp : ptr64)
  Class: Eq_125
  DataType: ptr64
  OrigDataType: ptr64
T_126: (in 320<i64> : int64)
  Class: Eq_126
  DataType: int64
  OrigDataType: int64
T_127: (in fp - 320<i64> : word64)
  Class: Eq_124
  DataType: ptr64
  OrigDataType: ptr64
T_128: (in CC_43 : Eq_128)
  Class: Eq_128
  DataType: Eq_128
  OrigDataType: (union (bool u0) (byte u1))
T_129: (in 00000000000008D8 : ptr64)
  Class: Eq_129
  DataType: (ptr64 ci8)
  OrigDataType: (ptr64 (struct (0 T_130 t0000)))
T_130: (in Mem10[0x00000000000008D8<p64>:byte] : byte)
  Class: Eq_130
  DataType: ci8
  OrigDataType: ci8
T_131: (in 0000000000001E18 : ptr64)
  Class: Eq_131
  DataType: (ptr64 ci8)
  OrigDataType: (ptr64 (struct (0 T_130 t0000)))
T_132: (in Mem10[0x0000000000001E18<p64>:byte] : byte)
  Class: Eq_130
  DataType: ci8
  OrigDataType: ci8
T_133: (in g_b08D8 > g_b1E18 : bool)
  Class: Eq_128
  DataType: Eq_128
  OrigDataType: bool
T_134: (in Mem10[0x00000000000008D8<p64>:byte] : byte)
  Class: Eq_130
  DataType: ci8
  OrigDataType: ci8
T_135: (in Mem10[0x0000000000001E18<p64>:byte] : byte)
  Class: Eq_130
  DataType: ci8
  OrigDataType: ci8
T_136: (in g_b08D8 != g_b1E18 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in r1_31 : (ptr64 code))
  Class: Eq_137
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_138: (in 0000000000002048 : ptr64)
  Class: Eq_138
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_139 t0000)))
T_139: (in Mem10[0x0000000000002048<p64>:word64] : word64)
  Class: Eq_137
  DataType: (ptr64 code)
  OrigDataType: word64
T_140: (in 0<64> : word64)
  Class: Eq_137
  DataType: (ptr64 code)
  OrigDataType: int64
T_141: (in r1_31 > null : bool)
  Class: Eq_128
  DataType: Eq_128
  OrigDataType: bool
T_142: (in 0<64> : word64)
  Class: Eq_137
  DataType: (ptr64 code)
  OrigDataType: word64
T_143: (in r1_31 == null : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in Mem10 : <unknown>)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: <unknown>
T_145: (in Mem17 : <unknown>)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: <unknown>
T_146: (in v8_16 : (ptr64 Eq_146))
  Class: Eq_146
  DataType: (ptr64 Eq_146)
  OrigDataType: (ptr64 (struct (0 T_151 t0000) (8 T_155 t0008) (10 T_158 t0010)))
T_147: (in 264<i64> : int64)
  Class: Eq_147
  DataType: int64
  OrigDataType: int64
T_148: (in r15_12 + 264<i64> : word64)
  Class: Eq_146
  DataType: (ptr64 Eq_146)
  OrigDataType: ptr64
T_149: (in 0<64> : word64)
  Class: Eq_149
  DataType: word64
  OrigDataType: word64
T_150: (in v8_16 + 0<64> : word64)
  Class: Eq_150
  DataType: ptr64
  OrigDataType: ptr64
T_151: (in Mem17[v8_16 + 0<64>:word64] : word64)
  Class: Eq_122
  DataType: ptr64
  OrigDataType: word64
T_152: (in r14_20 : (ptr64 code))
  Class: Eq_79
  DataType: (ptr64 code)
  OrigDataType: word64
T_153: (in 8<i64> : int64)
  Class: Eq_153
  DataType: int64
  OrigDataType: int64
T_154: (in v8_16 + 8<i64> : word64)
  Class: Eq_154
  DataType: ptr64
  OrigDataType: ptr64
T_155: (in Mem17[v8_16 + 8<i64>:word64] : word64)
  Class: Eq_79
  DataType: (ptr64 code)
  OrigDataType: word64
T_156: (in 16<i64> : int64)
  Class: Eq_156
  DataType: int64
  OrigDataType: int64
T_157: (in v8_16 + 16<i64> : word64)
  Class: Eq_157
  DataType: ptr64
  OrigDataType: ptr64
T_158: (in Mem17[v8_16 + 16<i64>:word64] : word64)
  Class: Eq_124
  DataType: ptr64
  OrigDataType: word64
T_159: (in register_tm_clones : ptr64)
  Class: Eq_159
  DataType: (ptr64 Eq_159)
  OrigDataType: (ptr64 (fn T_161 (T_152)))
T_160: (in signature of register_tm_clones : void)
  Class: Eq_159
  DataType: (ptr64 Eq_159)
  OrigDataType: 
T_161: (in register_tm_clones(r14_20) : void)
  Class: Eq_161
  DataType: void
  OrigDataType: void
T_162: (in r2 : Eq_162)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: up64
T_163: (in r10Out : ptr64)
  Class: Eq_163
  DataType: ptr64
  OrigDataType: ptr64
T_164: (in r11Out : ptr64)
  Class: Eq_164
  DataType: ptr64
  OrigDataType: ptr64
T_165: (in r1_73 : Eq_162)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: up64
T_166: (in r11_21 : (ptr64 Eq_166))
  Class: Eq_166
  DataType: (ptr64 Eq_166)
  OrigDataType: (ptr64 (struct (118 T_210 t0118)))
T_167: (in fp : ptr64)
  Class: Eq_167
  DataType: ptr64
  OrigDataType: ptr64
T_168: (in 328<i64> : int64)
  Class: Eq_168
  DataType: int64
  OrigDataType: int64
T_169: (in fp - 328<i64> : word64)
  Class: Eq_166
  DataType: (ptr64 Eq_166)
  OrigDataType: ptr64
T_170: (in dwLocA4_112 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in SLICE(r2, word32, 0) : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_172: (in 1<64> : word64)
  Class: Eq_162
  DataType: up64
  OrigDataType: up64
T_173: (in r2 > 1<64> : bool)
  Class: Eq_173
  DataType: bool
  OrigDataType: bool
T_174: (in r11_40 : (ptr64 Eq_174))
  Class: Eq_174
  DataType: (ptr64 Eq_174)
  OrigDataType: (ptr64 (struct (A4 T_189 t00A4)))
T_175: (in r10_118 : word64)
  Class: Eq_175
  DataType: word64
  OrigDataType: word64
T_176: (in fib : ptr64)
  Class: Eq_176
  DataType: (ptr64 Eq_176)
  OrigDataType: (ptr64 (fn T_183 (T_180, T_181, T_182)))
T_177: (in signature of fib : void)
  Class: Eq_176
  DataType: (ptr64 Eq_176)
  OrigDataType: 
T_178: (in 1<i32> : int32)
  Class: Eq_178
  DataType: int32
  OrigDataType: int32
T_179: (in dwLocA4_112 - 1<i32> : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in CONVERT(dwLocA4_112 - 1<i32>, word32, int64) : int64)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: int64
T_181: (in out r10_118 : ptr64)
  Class: Eq_163
  DataType: ptr64
  OrigDataType: ptr64
T_182: (in out r11_40 : ptr64)
  Class: Eq_164
  DataType: ptr64
  OrigDataType: ptr64
T_183: (in fib((int64) (dwLocA4_112 - 1<i32>), out r10_118, out r11_40) : word64)
  Class: Eq_183
  DataType: word64
  OrigDataType: word64
T_184: (in r10_61 : word64)
  Class: Eq_184
  DataType: word64
  OrigDataType: word64
T_185: (in r2_66 : word64)
  Class: Eq_183
  DataType: word64
  OrigDataType: word64
T_186: (in fib : ptr64)
  Class: Eq_176
  DataType: (ptr64 Eq_176)
  OrigDataType: (ptr64 (fn T_195 (T_192, T_193, T_194)))
T_187: (in 164<i64> : int64)
  Class: Eq_187
  DataType: int64
  OrigDataType: int64
T_188: (in r11_40 + 164<i64> : word64)
  Class: Eq_188
  DataType: word64
  OrigDataType: word64
T_189: (in Mem24[r11_40 + 164<i64>:word32] : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in 2<i32> : int32)
  Class: Eq_190
  DataType: int32
  OrigDataType: int32
T_191: (in r11_40->dw00A4 - 2<i32> : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in CONVERT(Mem24[r11_40 + 164<i64>:word32] - 2<i32>, word32, int64) : int64)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: int64
T_193: (in out r10_61 : ptr64)
  Class: Eq_163
  DataType: ptr64
  OrigDataType: ptr64
T_194: (in out r11_21 : ptr64)
  Class: Eq_164
  DataType: ptr64
  OrigDataType: ptr64
T_195: (in fib((int64) (r11_40->dw00A4 - 2<i32>), out r10_61, out r11_21) : word64)
  Class: Eq_183
  DataType: word64
  OrigDataType: word64
T_196: (in SLICE(r2_66, word32, 32) : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in r2_66 + r10_61 : word64)
  Class: Eq_197
  DataType: word64
  OrigDataType: word64
T_198: (in SEQ(SLICE(r2_66, word32, 32), r2_66 + r10_61) : word64)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: word64
T_199: (in v26_84 : ptr64)
  Class: Eq_199
  DataType: ptr64
  OrigDataType: ptr64
T_200: (in 248<i64> : int64)
  Class: Eq_200
  DataType: int64
  OrigDataType: int64
T_201: (in r11_21 + 248<i64> : word64)
  Class: Eq_199
  DataType: ptr64
  OrigDataType: ptr64
T_202: (in r1_79 : int64)
  Class: Eq_202
  DataType: int64
  OrigDataType: int64
T_203: (in CONVERT(r1_73, word64, word32) : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in CONVERT(CONVERT(r1_73, word64, word32), word32, int64) : int64)
  Class: Eq_202
  DataType: int64
  OrigDataType: int64
T_205: (in r10_97 : ptr64)
  Class: Eq_163
  DataType: ptr64
  OrigDataType: word64
T_206: (in r11_98 : ptr64)
  Class: Eq_164
  DataType: ptr64
  OrigDataType: word64
T_207: (in r2_102 : Eq_162)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: word64
T_208: (in 280<i64> : int64)
  Class: Eq_208
  DataType: int64
  OrigDataType: int64
T_209: (in r11_21 + 280<i64> : word64)
  Class: Eq_209
  DataType: ptr64
  OrigDataType: ptr64
T_210: (in Mem24[r11_21 + 280<i64>:word64] : word64)
  Class: Eq_210
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_211: (in r3 : word64)
  Class: Eq_211
  DataType: word64
  OrigDataType: word64
T_212: (in r11_29 : (ptr64 Eq_212))
  Class: Eq_212
  DataType: (ptr64 Eq_212)
  OrigDataType: (ptr64 (struct (120 T_224 t0120)))
T_213: (in r10_70 : word64)
  Class: Eq_213
  DataType: word64
  OrigDataType: word64
T_214: (in r1_38 : int64)
  Class: Eq_214
  DataType: int64
  OrigDataType: int64
T_215: (in fib : ptr64)
  Class: Eq_176
  DataType: (ptr64 Eq_176)
  OrigDataType: (ptr64 (fn T_219 (T_216, T_217, T_218)))
T_216: (in 0xA<64> : word64)
  Class: Eq_162
  DataType: int64
  OrigDataType: word64
T_217: (in out r10_70 : ptr64)
  Class: Eq_163
  DataType: ptr64
  OrigDataType: ptr64
T_218: (in out r11_29 : ptr64)
  Class: Eq_164
  DataType: ptr64
  OrigDataType: ptr64
T_219: (in fib(0xA<64>, out r10_70, out r11_29) : word64)
  Class: Eq_183
  DataType: word64
  OrigDataType: word64
T_220: (in CONVERT(fib(0xA<64>, out r10_70, out r11_29), word64, word32) : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_221: (in CONVERT(CONVERT(fib(0xA<64>, out r10_70, out r11_29), word64, word32), word32, int64) : int64)
  Class: Eq_214
  DataType: int64
  OrigDataType: int64
T_222: (in 288<i64> : int64)
  Class: Eq_222
  DataType: int64
  OrigDataType: int64
T_223: (in r11_29 + 288<i64> : word64)
  Class: Eq_223
  DataType: word64
  OrigDataType: word64
T_224: (in Mem24[r11_29 + 288<i64>:word64] : word64)
  Class: Eq_224
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_225: (in r2 : word64)
  Class: Eq_7
  DataType: word64
  OrigDataType: word64
T_226: (in r3 : word64)
  Class: Eq_6
  DataType: word64
  OrigDataType: word64
T_227: (in r4 : word64)
  Class: Eq_5
  DataType: word64
  OrigDataType: word64
T_228: (in r6 : word64)
  Class: Eq_3
  DataType: word64
  OrigDataType: word64
T_229: (in r7 : word64)
  Class: Eq_4
  DataType: word64
  OrigDataType: word64
T_230: (in r11 : word64)
  Class: Eq_8
  DataType: word64
  OrigDataType: word64
T_231: (in r13 : word64)
  Class: Eq_9
  DataType: word64
  OrigDataType: word64
T_232: (in r15_29 : (ptr64 Eq_232))
  Class: Eq_232
  DataType: (ptr64 Eq_232)
  OrigDataType: (ptr64 (struct (110 T_263 t0110)))
T_233: (in fp : ptr64)
  Class: Eq_233
  DataType: ptr64
  OrigDataType: ptr64
T_234: (in 320<i64> : int64)
  Class: Eq_234
  DataType: int64
  OrigDataType: int64
T_235: (in fp - 320<i64> : word64)
  Class: Eq_232
  DataType: (ptr64 Eq_232)
  OrigDataType: ptr64
T_236: (in r11_54 : int64)
  Class: Eq_236
  DataType: int64
  OrigDataType: int64
T_237: (in 0000000000001E10 : ptr64)
  Class: Eq_237
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_238: (in 0000000000001E08 : ptr64)
  Class: Eq_238
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_239: (in 0x1E10<u64> - 0x1E08<u64> : word64)
  Class: Eq_239
  DataType: int64
  OrigDataType: int64
T_240: (in 3<i32> : int32)
  Class: Eq_240
  DataType: int32
  OrigDataType: int32
T_241: (in 0x1E10<u64> - 0x1E08<u64> >> 3<i32> : word64)
  Class: Eq_236
  DataType: int64
  OrigDataType: int64
T_242: (in r8_48 : word64)
  Class: Eq_242
  DataType: word64
  OrigDataType: word64
T_243: (in r9_49 : word64)
  Class: Eq_243
  DataType: word64
  OrigDataType: word64
T_244: (in r10_40 : word64)
  Class: Eq_244
  DataType: word64
  OrigDataType: word64
T_245: (in r12_42 : word64)
  Class: Eq_245
  DataType: word64
  OrigDataType: word64
T_246: (in r13_43 : word64)
  Class: Eq_246
  DataType: word64
  OrigDataType: word64
T_247: (in r6_112 : word64)
  Class: Eq_247
  DataType: word64
  OrigDataType: word64
T_248: (in _init : ptr64)
  Class: Eq_248
  DataType: (ptr64 Eq_248)
  OrigDataType: (ptr64 (fn T_256 (T_228, T_229, T_227, T_226, T_225, T_230, T_231, T_250, T_251, T_252, T_253, T_254, T_255)))
T_249: (in signature of _init : void)
  Class: Eq_248
  DataType: (ptr64 Eq_248)
  OrigDataType: 
T_250: (in out r6_112 : ptr64)
  Class: Eq_10
  DataType: ptr64
  OrigDataType: ptr64
T_251: (in out r8_48 : ptr64)
  Class: Eq_11
  DataType: ptr64
  OrigDataType: ptr64
T_252: (in out r9_49 : ptr64)
  Class: Eq_12
  DataType: ptr64
  OrigDataType: ptr64
T_253: (in out r10_40 : ptr64)
  Class: Eq_13
  DataType: ptr64
  OrigDataType: ptr64
T_254: (in out r12_42 : ptr64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: ptr64
T_255: (in out r13_43 : ptr64)
  Class: Eq_15
  DataType: ptr64
  OrigDataType: ptr64
T_256: (in _init(r6, r7, r4, r3, r2, r11, r13, out r6_112, out r8_48, out r9_49, out r10_40, out r12_42, out r13_43) : byte)
  Class: Eq_256
  DataType: Eq_256
  OrigDataType: (union (bool u0) (byte u1))
T_257: (in v17_92 : ptr64)
  Class: Eq_257
  DataType: ptr64
  OrigDataType: ptr64
T_258: (in 216<i64> : int64)
  Class: Eq_258
  DataType: int64
  OrigDataType: int64
T_259: (in r15_29 + 216<i64> : word64)
  Class: Eq_257
  DataType: ptr64
  OrigDataType: ptr64
T_260: (in r4_91 : (ptr64 code))
  Class: Eq_260
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_261: (in 272<i64> : int64)
  Class: Eq_261
  DataType: int64
  OrigDataType: int64
T_262: (in r15_29 + 272<i64> : word64)
  Class: Eq_262
  DataType: ptr64
  OrigDataType: ptr64
T_263: (in Mem28[r15_29 + 272<i64>:word64] : word64)
  Class: Eq_260
  DataType: (ptr64 code)
  OrigDataType: word64
T_264: (in r7_55 : (ptr64 (ptr64 code)))
  Class: Eq_264
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_269 t0000)))
T_265: (in 0000000000001E08 : ptr64)
  Class: Eq_264
  DataType: (ptr64 (ptr64 code))
  OrigDataType: ptr64
T_266: (in r11_78 : word64)
  Class: Eq_266
  DataType: word64
  OrigDataType: word64
T_267: (in 0<64> : word64)
  Class: Eq_267
  DataType: word64
  OrigDataType: word64
T_268: (in r7_55 + 0<64> : word64)
  Class: Eq_268
  DataType: ptr64
  OrigDataType: ptr64
T_269: (in Mem28[r7_55 + 0<64>:word64] : word64)
  Class: Eq_269
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_270: (in 1<i64> : int64)
  Class: Eq_270
  DataType: int64
  OrigDataType: int64
T_271: (in r11_78 - 1<i64> : word64)
  Class: Eq_236
  DataType: int64
  OrigDataType: word64
T_272: (in 1<64> : word64)
  Class: Eq_266
  DataType: word64
  OrigDataType: word64
T_273: (in r11_78 != 1<64> : bool)
  Class: Eq_273
  DataType: bool
  OrigDataType: bool
T_274: (in r14 : (ptr64 code))
  Class: Eq_274
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_275: (in r6 : word64)
  Class: Eq_275
  DataType: word64
  OrigDataType: word64
T_276: (in r7 : word64)
  Class: Eq_276
  DataType: word64
  OrigDataType: word64
T_277: (in r8 : word64)
  Class: Eq_277
  DataType: word64
  OrigDataType: word64
T_278: (in r9 : word64)
  Class: Eq_278
  DataType: word64
  OrigDataType: word64
T_279: (in r10 : word64)
  Class: Eq_279
  DataType: word64
  OrigDataType: word64
T_280: (in r11 : word64)
  Class: Eq_280
  DataType: word64
  OrigDataType: word64
T_281: (in r12 : word64)
  Class: Eq_281
  DataType: word64
  OrigDataType: word64
T_282: (in r13 : word64)
  Class: Eq_282
  DataType: word64
  OrigDataType: word64
T_283: (in r14 : (ptr64 code))
  Class: Eq_283
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_284: (in r4_68 : word64)
  Class: Eq_284
  DataType: word64
  OrigDataType: word64
*/
typedef struct Globals {
	<anonymous> t05CE;	// 5CE
	<anonymous> t05EE;	// 5EE
	<anonymous> t070E;	// 70E
	Eq_69 t08C8;	// 8C8
	byte b08D0;	// 8D0
	ci8 b08D8;	// 8D8
	<anonymous> * ptr1E08;	// 1E08
	ci8 b1E18;	// 1E18
	<anonymous> * ptr2018;	// 2018
	<anonymous> * ptr2020;	// 2020
	byte b2028;	// 2028
	<anonymous> * ptr2030;	// 2030
	<anonymous> * ptr2038;	// 2038
	<anonymous> * ptr2048;	// 2048
	<anonymous> * ptr2050;	// 2050
	byte b2068;	// 2068
} Eq_1;

typedef struct Eq_16 {
	<anonymous> * ptr0110;	// 110
} Eq_16;

typedef struct Eq_45 {
	byte bFFFFFF50;	// FFFFFF50
	word64 qwFFFFFFF0;	// FFFFFFF0
	ptr64 ptrFFFFFFF8;	// FFFFFFF8
} Eq_45;

typedef union Eq_46 {
	int64 u0;
	ptr64 u1;
} Eq_46;

typedef union Eq_47 {
	int64 u0;
	ptr64 u1;
} Eq_47;

typedef union Eq_48 {
	ui64 u0;
	ptr64 u1;
} Eq_48;

typedef void (Eq_63)();

typedef union Eq_67 {
	int64 u0;
	ci8 u1;
	ptr64 u2;
} Eq_67;

typedef union Eq_68 {
	int64 u0;
	ci8 u1;
	ptr64 u2;
} Eq_68;

typedef union Eq_69 {
	int64 u0;
	ci8 u1;
} Eq_69;

typedef union Eq_81 {
	int64 u0;
	ptr64 u1;
} Eq_81;

typedef union Eq_82 {
	int64 u0;
	ptr64 u1;
} Eq_82;

typedef union Eq_86 {
	int64 u0;
	uint64 u1;
} Eq_86;

typedef void (Eq_112)(code *);

typedef void (Eq_119)();

typedef union Eq_128 {
	bool u0;
	byte u1;
} Eq_128;

typedef void;

typedef struct Eq_146 {
	ptr64 ptr0000;	// 0
	<anonymous> * ptr0008;	// 8
	ptr64 ptr0010;	// 10
} Eq_146;

typedef void (Eq_159)(code *);

typedef union Eq_162 {
	int64 u0;
	up64 u1;
} Eq_162;

typedef struct Eq_166 {
	<anonymous> * ptr0118;	// 118
} Eq_166;

typedef struct Eq_174 {
	word32 dw00A4;	// A4
} Eq_174;

typedef word64 (Eq_176)(Eq_162, ptr64, ptr64);

typedef struct Eq_212 {
	<anonymous> * ptr0120;	// 120
} Eq_212;

typedef struct Eq_232 {
	<anonymous> * ptr0110;	// 110
} Eq_232;

typedef union Eq_237 {
	int64 u0;
	ptr64 u1;
} Eq_237;

typedef union Eq_238 {
	int64 u0;
	ptr64 u1;
} Eq_238;

typedef Eq_256 (Eq_248)(word64, word64, word64, word64, word64, word64, word64, ptr64, ptr64, ptr64, ptr64, ptr64, ptr64);

typedef union Eq_256 {
	bool u0;
	byte u1;
} Eq_256;

