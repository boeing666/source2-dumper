#pragma once

struct InfoDataFilter_t  // sizeof 0x18, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    AssetEditInfoFilterFunc_t m_FilterFunc; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_Value; // offset 0x10, size 0x8, align 8
};
