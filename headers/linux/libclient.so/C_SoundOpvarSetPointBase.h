#pragma once

class C_SoundOpvarSetPointBase : public C_BaseEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x770, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x780, size 0x8, align 8
    int32 m_iOpvarIndex; // offset 0x788, size 0x4, align 4
    bool m_bUseAutoCompare; // offset 0x78C, size 0x1, align 1
    bool m_bFastRefresh; // offset 0x78D, size 0x1, align 1
    char _pad_078E[0x2]; // offset 0x78E
};
