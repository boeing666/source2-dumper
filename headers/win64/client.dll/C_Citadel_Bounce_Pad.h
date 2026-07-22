#pragma once

class C_Citadel_Bounce_Pad : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    float32 m_flUpFactor; // offset 0xCB0, size 0x4, align 4 | MNetworkEnable
    float32 m_flBounceVelocity; // offset 0xCB4, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_tDeactivationTime; // offset 0xCB8, size 0x4, align 255 | MNetworkEnable
    bool m_bDeactivated; // offset 0xCBC, size 0x1, align 1
    char _pad_0CBD[0x3]; // offset 0xCBD
    float32 m_flBarrelBounceVelocity; // offset 0xCC0, size 0x4, align 4
    float32 m_flBarrelUpFactor; // offset 0xCC4, size 0x4, align 4
    bool m_bSpeedOnLand; // offset 0xCC8, size 0x1, align 1
    char _pad_0CC9[0x7]; // offset 0xCC9
    CUtlVector< CHandle< C_BaseEntity > > m_vBouncedPlayerBefore; // offset 0xCD0, size 0x18, align 8
    char _pad_0CE8[0x8]; // offset 0xCE8
};
