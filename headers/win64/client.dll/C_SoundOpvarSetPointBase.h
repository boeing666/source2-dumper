#pragma once

class C_SoundOpvarSetPointBase : public C_BaseEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x5F0, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszOperatorName; // offset 0x5F8, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszOpvarName; // offset 0x600, size 0x8, align 8 | MNetworkEnable
    int32 m_iOpvarIndex; // offset 0x608, size 0x4, align 4 | MNetworkEnable
    bool m_bUseAutoCompare; // offset 0x60C, size 0x1, align 1 | MNetworkEnable
    bool m_bFastRefresh; // offset 0x60D, size 0x1, align 1 | MNetworkEnable
    char _pad_060E[0x2]; // offset 0x60E
};
