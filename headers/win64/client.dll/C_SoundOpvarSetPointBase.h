#pragma once

class C_SoundOpvarSetPointBase : public C_BaseEntity /*0x0*/  // sizeof 0x620, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x600, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x608, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x610, size 0x8, align 8
    int32 m_iOpvarIndex; // offset 0x618, size 0x4, align 4
    bool m_bUseAutoCompare; // offset 0x61C, size 0x1, align 1
    bool m_bFastRefresh; // offset 0x61D, size 0x1, align 1
    char _pad_061E[0x2]; // offset 0x61E
};
