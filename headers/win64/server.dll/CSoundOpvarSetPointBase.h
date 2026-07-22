#pragma once

class CSoundOpvarSetPointBase : public CBaseEntity /*0x0*/  // sizeof 0x550, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bDisabled; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x3]; // offset 0x4A9
    CEntityHandle m_hSource; // offset 0x4AC, size 0x4, align 4
    char _pad_04B0[0x18]; // offset 0x4B0
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4C8, size 0x8, align 8
    char _pad_04D0[0x50]; // offset 0x4D0
    VectorWS m_vLastPosition; // offset 0x520, size 0xC, align 4 | MNotSaved
    float32 m_flRefreshTime; // offset 0x52C, size 0x4, align 4
    CUtlSymbolLarge m_iszStackName; // offset 0x530, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x538, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x540, size 0x8, align 8
    int32 m_iOpvarIndex; // offset 0x548, size 0x4, align 4
    bool m_bUseAutoCompare; // offset 0x54C, size 0x1, align 1
    bool m_bFastRefresh; // offset 0x54D, size 0x1, align 1
    char _pad_054E[0x2]; // offset 0x54E
};
