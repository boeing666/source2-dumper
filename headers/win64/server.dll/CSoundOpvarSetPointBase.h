#pragma once

class CSoundOpvarSetPointBase : public CBaseEntity /*0x0*/  // sizeof 0x548, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bDisabled; // offset 0x4A0, size 0x1, align 1
    char _pad_04A1[0x3]; // offset 0x4A1
    CEntityHandle m_hSource; // offset 0x4A4, size 0x4, align 4
    char _pad_04A8[0x18]; // offset 0x4A8
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4C0, size 0x8, align 8
    char _pad_04C8[0x50]; // offset 0x4C8
    Vector m_vLastPosition; // offset 0x518, size 0xC, align 4 | MNotSaved
    float32 m_flRefreshTime; // offset 0x524, size 0x4, align 4
    CUtlSymbolLarge m_iszStackName; // offset 0x528, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszOperatorName; // offset 0x530, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszOpvarName; // offset 0x538, size 0x8, align 8 | MNetworkEnable
    int32 m_iOpvarIndex; // offset 0x540, size 0x4, align 4 | MNetworkEnable
    bool m_bUseAutoCompare; // offset 0x544, size 0x1, align 1 | MNetworkEnable
    bool m_bFastRefresh; // offset 0x545, size 0x1, align 1 | MNetworkEnable
    char _pad_0546[0x2]; // offset 0x546
};
