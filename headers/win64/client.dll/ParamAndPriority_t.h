#pragma once

struct ParamAndPriority_t  // sizeof 0x10, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_strParamName; // offset 0x0, size 0x8, align 8 | MPropertyFlattenIntoParentRow
    int32 m_nPriority; // offset 0x8, size 0x4, align 4 | MPropertyFlattenIntoParentRow
    char _pad_000C[0x4]; // offset 0xC
};
