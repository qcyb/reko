// test.h
// Generated by decompiling test
// using Reko decompiler version 0.8.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (10A60 (ptr32 code) ptr10A60) (10AA4 Eq_28 t10AA4) (10AAC word32 dw10AAC) (10AB0 int32 dw10AB0) (10ABC (ptr32 word32) ptr10ABC) (10AD4 (ptr32 code) ptr10AD4) (10AE4 (ptr32 code) ptr10AE4) (10AF0 byte b10AF0) (10AF4 Eq_68 t10AF4) (20A24 (ptr32 code) ptr20A24) (20A4C ptr32 ptr20A4C) (20A60 word32 dw20A60))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_28: (union "Eq_28" (int32 u0) (ptr32 u1))
	T_28 (in Mem0[0x00010AA4:word32] : word32)
	T_29 (in 0x00010A84 : ptr32)
	T_38 (in Mem0[0x00010AA4:word32] : word32)
Eq_36: (union "Eq_36" (int32 u0) (uint32 u1))
	T_36 (in r5_12 : Eq_36)
	T_42 (in globals->t10AA4 - 0x00010A84 >> 0x02 : word32)
Eq_39: (union "Eq_39" (int32 u0) (ptr32 u1))
	T_39 (in 0x00010A84 : ptr32)
Eq_44: (union "Eq_44" (int32 u0) (uint32 u1))
	T_44 (in r5_12 >> 0x1F : word32)
Eq_45: (union "Eq_45" (int32 u0) (uint32 u1))
	T_45 (in (r5_12 >>u 0x1F) + r5_12 : word32)
Eq_68: (union "Eq_68" (int32 u0) (uint32 u1))
	T_68 (in r2_40 : Eq_68)
	T_70 (in Mem19[0x00010AF4:word32] : word32)
	T_71 (in r16_42 : Eq_68)
	T_79 (in (globals->dw10AB0 - 0x00010A68 >> 0x02) + -1 : word32)
	T_96 (in r2_47 : Eq_68)
	T_98 (in r2_40 + 1 : word32)
	T_100 (in Mem50[0x00010AF4:word32] : word32)
	T_112 (in Mem50[0x00010AF4:word32] : word32)
Eq_74: (union "Eq_74" (int32 u0) (ptr32 u1))
	T_74 (in 0x00010A68 : ptr32)
Eq_90: (fn void ())
	T_90 (in deregister_tm_clones : ptr32)
	T_91 (in signature of deregister_tm_clones : void)
Eq_97: (union "Eq_97" (int32 u0) (up32 u1))
	T_97 (in 1 : int32)
Eq_117: (fn void ())
	T_117 (in register_tm_clones : ptr32)
	T_118 (in signature of register_tm_clones : void)
Eq_120: (fn (ptr32 void) ((ptr32 void), int32, Eq_124))
	T_120 (in memset : ptr32)
	T_121 (in signature of memset : void)
Eq_124: (union "Eq_124" (int32 u0) (size_t u1))
	T_124 (in num : size_t)
	T_129 (in 5 : int32)
	T_134 (in num : size_t)
	T_135 (in size : size_t)
	T_136 (in 1 : int32)
	T_137 (in 5 : int32)
Eq_131: (struct "Eq_131" (0 Eq_139 t0000) (1 word32 dw0001) (4 byte b0004))
	T_131 (in r2_38 : (ptr32 Eq_131))
	T_138 (in calloc(1, 5) : (ptr32 void))
	T_157 (in r2_43 : word32)
	T_159 (in r2_52 : word32)
Eq_132: (fn (ptr32 Eq_131) (Eq_124, Eq_124))
	T_132 (in calloc : ptr32)
	T_133 (in signature of calloc : void)
Eq_139: (union "Eq_139" (byte u0) (word32 u1))
	T_139 (in dwLoc14 : word32)
	T_142 (in Mem45[r2_38 + 0x00000000:word32] : word32)
	T_149 (in 0x0C : byte)
	T_152 (in Mem51[r2_38 + 0x00000000:byte] : byte)
	T_158 (in r3_44 : word32)
Eq_164: (fn void (word32))
	T_164 (in _init : ptr32)
	T_165 (in signature of _init : void)
Eq_228: (fn void (word32))
	T_228 (in _fini : ptr32)
	T_229 (in signature of _fini : void)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in ra : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in __gmon_start__ : ptr32)
  Class: Eq_3
  DataType: word32
  OrigDataType: 
T_4: (in signature of __gmon_start__ : void)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: 
T_5: (in 0x00000000 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_6: (in __gmon_start__ == 0x00000000 : bool)
  Class: Eq_6
  DataType: bool
  OrigDataType: bool
T_7: (in r25_16 : ptr32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: ptr32
T_8: (in 00020A4C : ptr32)
  Class: Eq_8
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_9 t0000)))
T_9: (in Mem10[0x00020A4C:word32] : word32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: word32
T_10: (in 2004 : int32)
  Class: Eq_10
  DataType: int32
  OrigDataType: int32
T_11: (in r25_16 + 2004 : word32)
  Class: Eq_11
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_12: (in r25_24 : ptr32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: ptr32
T_13: (in 00020A4C : ptr32)
  Class: Eq_13
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_14 t0000)))
T_14: (in Mem10[0x00020A4C:word32] : word32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: word32
T_15: (in 2416 : int32)
  Class: Eq_15
  DataType: int32
  OrigDataType: int32
T_16: (in r25_24 + 2416 : word32)
  Class: Eq_16
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_17: (in __gmon_start__ : ptr32)
  Class: Eq_17
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_18: (in signature of __gmon_start__ : void)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: 
T_19: (in r2 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in dwArg00 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in r8_19 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in 00020A60 : ptr32)
  Class: Eq_22
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_23 t0000)))
T_23: (in Mem0[0x00020A60:word32] : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_24: (in r25_24 : (ptr32 code))
  Class: Eq_24
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_25: (in 00020A24 : ptr32)
  Class: Eq_25
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_26 t0000)))
T_26: (in Mem23[0x00020A24:word32] : word32)
  Class: Eq_24
  DataType: (ptr32 code)
  OrigDataType: word32
T_27: (in 0x00010AA4 : word32)
  Class: Eq_27
  DataType: (ptr32 Eq_28)
  OrigDataType: (ptr32 (struct (0 T_28 t0000)))
T_28: (in Mem0[0x00010AA4:word32] : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word32
T_29: (in 0x00010A84 : ptr32)
  Class: Eq_28
  DataType: ptr32
  OrigDataType: ptr32
T_30: (in globals->t10AA4 == 0x00010A84 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in r25_12 : (ptr32 code))
  Class: Eq_31
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_32: (in 0x00000000 : word32)
  Class: Eq_31
  DataType: (ptr32 code)
  OrigDataType: word32
T_33: (in r25_12 == null : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in 0x00010AE4 : word32)
  Class: Eq_34
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x00010AE4:word32] : word32)
  Class: Eq_31
  DataType: (ptr32 code)
  OrigDataType: word32
T_36: (in r5_12 : Eq_36)
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: (union (int32 u1) (uint32 u0))
T_37: (in 0x00010AA4 : word32)
  Class: Eq_37
  DataType: (ptr32 Eq_28)
  OrigDataType: (ptr32 (struct (0 T_38 t0000)))
T_38: (in Mem0[0x00010AA4:word32] : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: int32
T_39: (in 0x00010A84 : ptr32)
  Class: Eq_39
  DataType: int32
  OrigDataType: (union (int32 u0) (ptr32 u1))
T_40: (in globals->t10AA4 - 0x00010A84 : word32)
  Class: Eq_40
  DataType: int32
  OrigDataType: int32
T_41: (in 0x02 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in globals->t10AA4 - 0x00010A84 >> 0x02 : word32)
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: int32
T_43: (in 0x1F : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in r5_12 >> 0x1F : word32)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (int32 u1) (uint32 u0))
T_45: (in (r5_12 >>u 0x1F) + r5_12 : word32)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (union (int32 u1) (uint32 u0))
T_46: (in 0x01 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in (r5_12 >>u 0x1F) + r5_12 >> 0x01 : word32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_48: (in 0x00000000 : word32)
  Class: Eq_47
  DataType: int32
  OrigDataType: word32
T_49: (in (r5_12 >>u 0x1F) + r5_12 >> 0x01 == 0x00000000 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in r25_17 : (ptr32 code))
  Class: Eq_50
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_51: (in 0x00010AD4 : word32)
  Class: Eq_51
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_52 t0000)))
T_52: (in Mem0[0x00010AD4:word32] : word32)
  Class: Eq_50
  DataType: (ptr32 code)
  OrigDataType: word32
T_53: (in 0x00000000 : word32)
  Class: Eq_50
  DataType: (ptr32 code)
  OrigDataType: word32
T_54: (in r25_17 == null : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in r16 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in r17 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in r18 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in ra : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in 0x00010AF0 : word32)
  Class: Eq_59
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_60 t0000)))
T_60: (in Mem19[0x00010AF0:byte] : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in (word32) Mem19[0x00010AF0:byte] : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in 0x00000000 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_63: (in (word32) globals->b10AF0 != 0x00000000 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in __cxa_finalize : ptr32)
  Class: Eq_64
  DataType: word32
  OrigDataType: 
T_65: (in signature of __cxa_finalize : void)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: 
T_66: (in 0x00000000 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_67: (in __cxa_finalize == 0x00000000 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in r2_40 : Eq_68)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: up32
T_69: (in 0x00010AF4 : word32)
  Class: Eq_69
  DataType: (ptr32 Eq_68)
  OrigDataType: (ptr32 (struct (0 T_70 t0000)))
T_70: (in Mem19[0x00010AF4:word32] : word32)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: word32
T_71: (in r16_42 : Eq_68)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: (union (int32 u0) (uint32 u1))
T_72: (in 0x00010AB0 : word32)
  Class: Eq_72
  DataType: (ptr32 int32)
  OrigDataType: (ptr32 (struct (0 T_73 t0000)))
T_73: (in Mem19[0x00010AB0:word32] : word32)
  Class: Eq_73
  DataType: int32
  OrigDataType: int32
T_74: (in 0x00010A68 : ptr32)
  Class: Eq_74
  DataType: int32
  OrigDataType: (union (int32 u0) (ptr32 u1))
T_75: (in globals->dw10AB0 - 0x00010A68 : word32)
  Class: Eq_75
  DataType: int32
  OrigDataType: int32
T_76: (in 0x02 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in globals->dw10AB0 - 0x00010A68 >> 0x02 : word32)
  Class: Eq_77
  DataType: int32
  OrigDataType: int32
T_78: (in -1 : int32)
  Class: Eq_78
  DataType: int32
  OrigDataType: int32
T_79: (in (globals->dw10AB0 - 0x00010A68 >> 0x02) + -1 : word32)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: int32
T_80: (in r2_40 < r16_42 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in (word32) (r2_40 <u r16_42) : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in 0x00000000 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_83: (in (word32) (r2_40 < r16_42) == 0x00000000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in r3_30 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in __cxa_finalize : ptr32)
  Class: Eq_85
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_86: (in signature of __cxa_finalize : void)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: 
T_87: (in r2_24 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in 0x00010AAC : word32)
  Class: Eq_88
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_89 t0000)))
T_89: (in Mem19[0x00010AAC:word32] : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_90: (in deregister_tm_clones : ptr32)
  Class: Eq_90
  DataType: (ptr32 Eq_90)
  OrigDataType: (ptr32 (fn T_92 ()))
T_91: (in signature of deregister_tm_clones : void)
  Class: Eq_90
  DataType: (ptr32 Eq_90)
  OrigDataType: 
T_92: (in deregister_tm_clones() : void)
  Class: Eq_92
  DataType: void
  OrigDataType: void
T_93: (in 0x01 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_94: (in 0x00010AF0 : word32)
  Class: Eq_94
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_95 t0000)))
T_95: (in Mem76[0x00010AF0:byte] : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_96: (in r2_47 : Eq_68)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: uint32
T_97: (in 1 : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: (union (int32 u0) (up32 u1))
T_98: (in r2_40 + 1 : word32)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: up32
T_99: (in 0x00010AF4 : word32)
  Class: Eq_99
  DataType: (ptr32 Eq_68)
  OrigDataType: (ptr32 (struct (0 T_100 t0000)))
T_100: (in Mem50[0x00010AF4:word32] : word32)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: word32
T_101: (in r2_52 : (ptr32 (ptr32 code)))
  Class: Eq_101
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_109 t0000)))
T_102: (in 0x02 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in r2_47 << 0x02 : word32)
  Class: Eq_103
  DataType: ui32
  OrigDataType: ui32
T_104: (in 0x00010A68 : ptr32)
  Class: Eq_104
  DataType: ptr32
  OrigDataType: ptr32
T_105: (in (r2_47 << 0x02) + 0x00010A68 : word32)
  Class: Eq_101
  DataType: (ptr32 (ptr32 code))
  OrigDataType: ui32
T_106: (in r25_53 : (ptr32 code))
  Class: Eq_106
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_107: (in 0x00000000 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in r2_52 + 0x00000000 : word32)
  Class: Eq_108
  DataType: ui32
  OrigDataType: ui32
T_109: (in Mem50[r2_52 + 0x00000000:word32] : word32)
  Class: Eq_106
  DataType: (ptr32 code)
  OrigDataType: word32
T_110: (in r4_60 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in 0x00010AF4 : word32)
  Class: Eq_111
  DataType: (ptr32 Eq_68)
  OrigDataType: (ptr32 (struct (0 T_112 t0000)))
T_112: (in Mem50[0x00010AF4:word32] : word32)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: word32
T_113: (in r2_40 < r16_42 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in (word32) (r2_40 <u r16_42) : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in 0x00000000 : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_116: (in (word32) (r2_40 < r16_42) != 0x00000000 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in register_tm_clones : ptr32)
  Class: Eq_117
  DataType: (ptr32 Eq_117)
  OrigDataType: (ptr32 (fn T_119 ()))
T_118: (in signature of register_tm_clones : void)
  Class: Eq_117
  DataType: (ptr32 Eq_117)
  OrigDataType: 
T_119: (in register_tm_clones() : void)
  Class: Eq_119
  DataType: void
  OrigDataType: void
T_120: (in memset : ptr32)
  Class: Eq_120
  DataType: (ptr32 Eq_120)
  OrigDataType: (ptr32 (fn T_130 (T_127, T_128, T_129)))
T_121: (in signature of memset : void)
  Class: Eq_120
  DataType: (ptr32 Eq_120)
  OrigDataType: 
T_122: (in r4 : (ptr32 void))
  Class: Eq_122
  DataType: (ptr32 void)
  OrigDataType: 
T_123: (in value : int32)
  Class: Eq_123
  DataType: int32
  OrigDataType: 
T_124: (in num : size_t)
  Class: Eq_124
  DataType: Eq_124
  OrigDataType: 
T_125: (in fp : ptr32)
  Class: Eq_125
  DataType: ptr32
  OrigDataType: ptr32
T_126: (in -20 : int32)
  Class: Eq_126
  DataType: int32
  OrigDataType: int32
T_127: (in fp + -20 : word32)
  Class: Eq_122
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_128: (in 0x00000000 : word32)
  Class: Eq_123
  DataType: int32
  OrigDataType: int32
T_129: (in 5 : int32)
  Class: Eq_124
  DataType: int32
  OrigDataType: (union (int32 u0) (size_t u1))
T_130: (in memset(fp + -20, 0x00000000, 5) : (ptr32 void))
  Class: Eq_130
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_131: (in r2_38 : (ptr32 Eq_131))
  Class: Eq_131
  DataType: (ptr32 Eq_131)
  OrigDataType: (ptr32 (struct (0 T_139 t0000) (1 T_156 t0001) (4 T_148 t0004)))
T_132: (in calloc : ptr32)
  Class: Eq_132
  DataType: (ptr32 Eq_132)
  OrigDataType: (ptr32 (fn T_138 (T_136, T_137)))
T_133: (in signature of calloc : void)
  Class: Eq_132
  DataType: (ptr32 Eq_132)
  OrigDataType: 
T_134: (in num : size_t)
  Class: Eq_124
  DataType: Eq_124
  OrigDataType: 
T_135: (in size : size_t)
  Class: Eq_124
  DataType: Eq_124
  OrigDataType: 
T_136: (in 1 : int32)
  Class: Eq_124
  DataType: int32
  OrigDataType: (union (int32 u0) (size_t u1))
T_137: (in 5 : int32)
  Class: Eq_124
  DataType: int32
  OrigDataType: (union (int32 u0) (size_t u1))
T_138: (in calloc(1, 5) : (ptr32 void))
  Class: Eq_131
  DataType: (ptr32 Eq_131)
  OrigDataType: (ptr32 void)
T_139: (in dwLoc14 : word32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: word32
T_140: (in 0x00000000 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in r2_38 + 0x00000000 : word32)
  Class: Eq_141
  DataType: ptr32
  OrigDataType: ptr32
T_142: (in Mem45[r2_38 + 0x00000000:word32] : word32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: word32
T_143: (in bLoc10 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in (word32) bLoc10 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in (byte) (word32) bLoc10 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in 0x00000004 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in r2_38 + 0x00000004 : word32)
  Class: Eq_147
  DataType: ptr32
  OrigDataType: ptr32
T_148: (in Mem48[r2_38 + 0x00000004:byte] : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_149: (in 0x0C : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_150: (in 0x00000000 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in r2_38 + 0x00000000 : word32)
  Class: Eq_151
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 word32)
T_152: (in Mem51[r2_38 + 0x00000000:byte] : byte)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: byte
T_153: (in 0x00000000 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in 0x00000001 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in r2_38 + 0x00000001 : word32)
  Class: Eq_155
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 word32)
T_156: (in Mem53[r2_38 + 0x00000001:word32] : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_157: (in r2_43 : word32)
  Class: Eq_131
  DataType: (ptr32 Eq_131)
  OrigDataType: (ptr32 (struct (0 T_139 t0000) (1 T_156 t0001) (4 T_148 t0004)))
T_158: (in r3_44 : word32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: word32
T_159: (in r2_52 : word32)
  Class: Eq_131
  DataType: (ptr32 Eq_131)
  OrigDataType: (ptr32 (struct (0 T_139 t0000) (1 T_156 t0001) (4 T_148 t0004)))
T_160: (in r4 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in r5 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in r6 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in ra : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_164: (in _init : ptr32)
  Class: Eq_164
  DataType: (ptr32 Eq_164)
  OrigDataType: (ptr32 (fn T_166 (T_163)))
T_165: (in signature of _init : void)
  Class: Eq_164
  DataType: (ptr32 Eq_164)
  OrigDataType: 
T_166: (in _init(ra) : void)
  Class: Eq_166
  DataType: void
  OrigDataType: void
T_167: (in r16_35 : (ptr32 word32))
  Class: Eq_167
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct 0004 (0 word32 dw0000)))
T_168: (in 0x00010ABC : word32)
  Class: Eq_168
  DataType: (ptr32 (ptr32 word32))
  OrigDataType: (ptr32 (struct (0 T_169 t0000)))
T_169: (in Mem30[0x00010ABC:word32] : word32)
  Class: Eq_167
  DataType: (ptr32 word32)
  OrigDataType: word32
T_170: (in r18_37 : int32)
  Class: Eq_170
  DataType: int32
  OrigDataType: int32
T_171: (in 0x00010ABC : word32)
  Class: Eq_171
  DataType: (ptr32 (ptr32 word32))
  OrigDataType: (ptr32 (struct (0 T_172 t0000)))
T_172: (in Mem30[0x00010ABC:word32] : word32)
  Class: Eq_167
  DataType: (ptr32 word32)
  OrigDataType: word32
T_173: (in globals->ptr10ABC - r16_35 : word32)
  Class: Eq_170
  DataType: int32
  OrigDataType: word32
T_174: (in 0x02 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in r18_37 >> 0x02 : word32)
  Class: Eq_175
  DataType: int32
  OrigDataType: int32
T_176: (in 0x00000000 : word32)
  Class: Eq_175
  DataType: int32
  OrigDataType: word32
T_177: (in r18_37 >> 0x02 == 0x00000000 : bool)
  Class: Eq_177
  DataType: bool
  OrigDataType: bool
T_178: (in r25_43 : (ptr32 code))
  Class: Eq_178
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_179: (in 0x00000000 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in r16_35 + 0x00000000 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in Mem30[r16_35 + 0x00000000:word32] : word32)
  Class: Eq_178
  DataType: (ptr32 code)
  OrigDataType: word32
T_182: (in r17_40 : int32)
  Class: Eq_182
  DataType: int32
  OrigDataType: word32
T_183: (in 1 : int32)
  Class: Eq_183
  DataType: int32
  OrigDataType: int32
T_184: (in r17_40 + 1 : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: word32
T_185: (in r18_37 >> 0x02 : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: int32
T_186: (in r18_37 >> 0x02 != r17_40 : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in 0x00000000 : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: word32
T_188: (in 4 : int32)
  Class: Eq_188
  DataType: int32
  OrigDataType: int32
T_189: (in r16_35 + 4 : word32)
  Class: Eq_167
  DataType: (ptr32 word32)
  OrigDataType: ptr32
T_190: (in r25_18 : (ptr32 code))
  Class: Eq_190
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_191: (in 0x00010A60 : word32)
  Class: Eq_191
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_192 t0000)))
T_192: (in Mem17[0x00010A60:word32] : word32)
  Class: Eq_190
  DataType: (ptr32 code)
  OrigDataType: word32
T_193: (in -1 : int32)
  Class: Eq_190
  DataType: (ptr32 code)
  OrigDataType: int32
T_194: (in r25_18 == (<anonymous> *) -1 : bool)
  Class: Eq_194
  DataType: bool
  OrigDataType: bool
T_195: (in r16_21 : (ptr32 word32))
  Class: Eq_195
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct 0004 (0 word32 dw0000)))
T_196: (in 0x00010A60 : ptr32)
  Class: Eq_195
  DataType: (ptr32 word32)
  OrigDataType: ptr32
T_197: (in -4 : int32)
  Class: Eq_197
  DataType: int32
  OrigDataType: int32
T_198: (in r16_21 + -4 : word32)
  Class: Eq_195
  DataType: (ptr32 word32)
  OrigDataType: ptr32
T_199: (in 0x00000000 : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in r16_21 + 0x00000000 : word32)
  Class: Eq_200
  DataType: ptr32
  OrigDataType: ptr32
T_201: (in Mem17[r16_21 + 0x00000000:word32] : word32)
  Class: Eq_190
  DataType: (ptr32 code)
  OrigDataType: word32
T_202: (in -1 : int32)
  Class: Eq_190
  DataType: (ptr32 code)
  OrigDataType: int32
T_203: (in r25_18 != (<anonymous> *) -1 : bool)
  Class: Eq_203
  DataType: bool
  OrigDataType: bool
T_204: (in r28 : ptr32)
  Class: Eq_204
  DataType: ptr32
  OrigDataType: ptr32
T_205: (in ra : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in r25_6 : (ptr32 code))
  Class: Eq_206
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_207: (in 0x00007FF0 : word32)
  Class: Eq_207
  DataType: ui32
  OrigDataType: ui32
T_208: (in r28 - 0x00007FF0 : word32)
  Class: Eq_208
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_211 t0000)))
T_209: (in 0x00000000 : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_210: (in r28 - 0x00007FF0 + 0x00000000 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in Mem0[r28 - 0x00007FF0 + 0x00000000:word32] : word32)
  Class: Eq_206
  DataType: (ptr32 code)
  OrigDataType: word32
T_212: (in r28 : ptr32)
  Class: Eq_212
  DataType: ptr32
  OrigDataType: ptr32
T_213: (in ra : word32)
  Class: Eq_213
  DataType: word32
  OrigDataType: word32
T_214: (in r25_6 : (ptr32 code))
  Class: Eq_214
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_215: (in 0x00007FF0 : word32)
  Class: Eq_215
  DataType: ui32
  OrigDataType: ui32
T_216: (in r28 - 0x00007FF0 : word32)
  Class: Eq_216
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_219 t0000)))
T_217: (in 0x00000000 : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_218: (in r28 - 0x00007FF0 + 0x00000000 : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_219: (in Mem0[r28 - 0x00007FF0 + 0x00000000:word32] : word32)
  Class: Eq_214
  DataType: (ptr32 code)
  OrigDataType: word32
T_220: (in r28 : ptr32)
  Class: Eq_220
  DataType: ptr32
  OrigDataType: ptr32
T_221: (in ra : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in r25_6 : (ptr32 code))
  Class: Eq_222
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_223: (in 0x00007FF0 : word32)
  Class: Eq_223
  DataType: ui32
  OrigDataType: ui32
T_224: (in r28 - 0x00007FF0 : word32)
  Class: Eq_224
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_227 t0000)))
T_225: (in 0x00000000 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in r28 - 0x00007FF0 + 0x00000000 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in Mem0[r28 - 0x00007FF0 + 0x00000000:word32] : word32)
  Class: Eq_222
  DataType: (ptr32 code)
  OrigDataType: word32
T_228: (in _fini : ptr32)
  Class: Eq_228
  DataType: (ptr32 Eq_228)
  OrigDataType: (ptr32 (fn T_231 (T_221)))
T_229: (in signature of _fini : void)
  Class: Eq_228
  DataType: (ptr32 Eq_228)
  OrigDataType: 
T_230: (in ra : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_231: (in _fini(ra) : void)
  Class: Eq_231
  DataType: void
  OrigDataType: void
T_232: (in r25_15 : ptr32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: ptr32
T_233: (in 00020A4C : ptr32)
  Class: Eq_233
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_234 t0000)))
T_234: (in Mem10[0x00020A4C:word32] : word32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: word32
T_235: (in 1780 : int32)
  Class: Eq_235
  DataType: int32
  OrigDataType: int32
T_236: (in r25_15 + 1780 : word32)
  Class: Eq_236
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> * ptr10A60;	// 10A60
	Eq_28 t10AA4;	// 10AA4
	word32 dw10AAC;	// 10AAC
	int32 dw10AB0;	// 10AB0
	word32 * ptr10ABC;	// 10ABC
	<anonymous> * ptr10AD4;	// 10AD4
	<anonymous> * ptr10AE4;	// 10AE4
	byte b10AF0;	// 10AF0
	Eq_68 t10AF4;	// 10AF4
	<anonymous> * ptr20A24;	// 20A24
	ptr32 ptr20A4C;	// 20A4C
	word32 dw20A60;	// 20A60
} Eq_1;

typedef union Eq_28 {
	int32 u0;
	ptr32 u1;
} Eq_28;

typedef union Eq_36 {
	int32 u0;
	uint32 u1;
} Eq_36;

typedef union Eq_39 {
	int32 u0;
	ptr32 u1;
} Eq_39;

typedef union Eq_44 {
	int32 u0;
	uint32 u1;
} Eq_44;

typedef union Eq_45 {
	int32 u0;
	uint32 u1;
} Eq_45;

typedef union Eq_68 {
	int32 u0;
	uint32 u1;
} Eq_68;

typedef union Eq_74 {
	int32 u0;
	ptr32 u1;
} Eq_74;

typedef void (Eq_90)();

typedef union Eq_97 {
	int32 u0;
	up32 u1;
} Eq_97;

typedef void (Eq_117)();

typedef void (Eq_120)(void, int32, Eq_124);

typedef union Eq_124 {
	int32 u0;
	size_t u1;
} Eq_124;

typedef struct Eq_131 {
	Eq_139 t0000;	// 0
	word32 dw0001;	// 1
	byte b0004;	// 4
} Eq_131;

typedef Eq_131 * (Eq_132)(Eq_124, Eq_124);

typedef union Eq_139 {
	byte u0;
	word32 u1;
} Eq_139;

typedef void (Eq_164)(word32);

typedef void (Eq_228)(word32);
