#pragma once

struct FunctionInfo_t  // sizeof 0x20, align 0x8 (mathlib_extended) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_name; // offset 0x8, size 0x8, align 8
    CUtlStringToken m_nameToken; // offset 0x10, size 0x4, align 4
    int32 m_nParamCount; // offset 0x14, size 0x4, align 4
    FuseFunctionIndex_t m_nIndex; // offset 0x18, size 0x2, align 255
    bool m_bIsPure; // offset 0x1A, size 0x1, align 1
    char _pad_001B[0x5]; // offset 0x1B
};
