#pragma once

class CSoundOpvarSetPointBase : public CBaseEntity /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bDisabled; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    CEntityHandle m_hSource; // offset 0x77C, size 0x4, align 4
    char _pad_0780[0x18]; // offset 0x780
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x798, size 0x8, align 8
    char _pad_07A0[0x50]; // offset 0x7A0
    VectorWS m_vLastPosition; // offset 0x7F0, size 0xC, align 4 | MNotSaved
    float32 m_flRefreshTime; // offset 0x7FC, size 0x4, align 4
    CUtlSymbolLarge m_iszStackName; // offset 0x800, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x808, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x810, size 0x8, align 8
    int32 m_iOpvarIndex; // offset 0x818, size 0x4, align 4
    bool m_bUseAutoCompare; // offset 0x81C, size 0x1, align 1
    bool m_bFastRefresh; // offset 0x81D, size 0x1, align 1
    char _pad_081E[0x2]; // offset 0x81E
};
