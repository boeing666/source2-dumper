#pragma once

class CSoundOpvarSetPointBase : public CBaseEntity /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bDisabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    CEntityHandle m_hSource; // offset 0x78C, size 0x4, align 4
    char _pad_0790[0x18]; // offset 0x790
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x7A8, size 0x8, align 8
    char _pad_07B0[0x50]; // offset 0x7B0
    VectorWS m_vLastPosition; // offset 0x800, size 0xC, align 4 | MNotSaved
    float32 m_flRefreshTime; // offset 0x80C, size 0x4, align 4
    CUtlSymbolLarge m_iszStackName; // offset 0x810, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x818, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x820, size 0x8, align 8
    int32 m_iOpvarIndex; // offset 0x828, size 0x4, align 4
    bool m_bUseAutoCompare; // offset 0x82C, size 0x1, align 1
    bool m_bFastRefresh; // offset 0x82D, size 0x1, align 1
    char _pad_082E[0x2]; // offset 0x82E
};
