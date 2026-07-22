#pragma once

class C_CitadelItemPickup : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCC8]; // offset 0x0
    int32 m_eLootType; // offset 0xCC8, size 0x4, align 4 | MNetworkEnable
    int32 m_nCurrencyValue; // offset 0xCCC, size 0x4, align 4 | MNetworkEnable
    CUtlSymbolLarge m_iszModelName; // offset 0xCD0, size 0x8, align 8 | MNetworkEnable
    float32 m_flModelScale; // offset 0xCD8, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hTargetPlayer; // offset 0xCDC, size 0x4, align 4 | MNetworkEnable
    float32 m_flFallRate; // offset 0xCE0, size 0x4, align 4 | MNetworkEnable
    char _pad_0CE4[0xC]; // offset 0xCE4
};
