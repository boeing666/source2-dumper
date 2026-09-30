#pragma once

class CSoundOpvarSetPointBase : public CBaseEntity /*0x0*/  // sizeof 0x560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bDisabled; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    CEntityHandle m_hSource; // offset 0x4B4, size 0x4, align 4
    char _pad_04B8[0x18]; // offset 0x4B8
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4D0, size 0x8, align 8
    char _pad_04D8[0x58]; // offset 0x4D8
    VectorWS m_vLastPosition; // offset 0x530, size 0xC, align 4 | MNotSaved
    float32 m_flRefreshTime; // offset 0x53C, size 0x4, align 4
    CUtlSymbolLarge m_iszStackName; // offset 0x540, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x548, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x550, size 0x8, align 8
    int32 m_iOpvarIndex; // offset 0x558, size 0x4, align 4
    bool m_bUseAutoCompare; // offset 0x55C, size 0x1, align 1
    bool m_bFastRefresh; // offset 0x55D, size 0x1, align 1
    char _pad_055E[0x2]; // offset 0x55E
};
