#pragma once

class CSoundOpvarSetPointBase : public CBaseEntity /*0x0*/  // sizeof 0x540, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bDisabled; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x3]; // offset 0x499
    CEntityHandle m_hSource; // offset 0x49C, size 0x4, align 4
    char _pad_04A0[0x18]; // offset 0x4A0
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4B8, size 0x8, align 8
    char _pad_04C0[0x50]; // offset 0x4C0
    VectorWS m_vLastPosition; // offset 0x510, size 0xC, align 4 | MNotSaved
    float32 m_flRefreshTime; // offset 0x51C, size 0x4, align 4
    CUtlSymbolLarge m_iszStackName; // offset 0x520, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x528, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x530, size 0x8, align 8
    int32 m_iOpvarIndex; // offset 0x538, size 0x4, align 4
    bool m_bUseAutoCompare; // offset 0x53C, size 0x1, align 1
    bool m_bFastRefresh; // offset 0x53D, size 0x1, align 1
    char _pad_053E[0x2]; // offset 0x53E
};
