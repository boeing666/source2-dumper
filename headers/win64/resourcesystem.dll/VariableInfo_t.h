#pragma once

struct VariableInfo_t  // sizeof 0x18, align 0x8 (mathlib_extended) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlStringToken m_nameToken; // offset 0x8, size 0x4, align 4
    FuseVariableIndex_t m_nIndex; // offset 0xC, size 0x2, align 255
    uint8 m_nNumComponents; // offset 0xE, size 0x1, align 1
    FuseVariableType_t m_eVarType; // offset 0xF, size 0x1, align 1
    FuseVariableAccess_t m_eAccess; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
