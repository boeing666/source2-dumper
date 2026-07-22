#pragma once

class CCitadel_Bounce_Pad : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC30, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xBF0, size 0x4, align 4
    float32 m_flUpFactor; // offset 0xBF4, size 0x4, align 4 | MNetworkEnable
    float32 m_flBounceVelocity; // offset 0xBF8, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_tDeactivationTime; // offset 0xBFC, size 0x4, align 255 | MNetworkEnable
    bool m_bDeactivated; // offset 0xC00, size 0x1, align 1
    char _pad_0C01[0x3]; // offset 0xC01
    float32 m_flBarrelBounceVelocity; // offset 0xC04, size 0x4, align 4
    float32 m_flBarrelUpFactor; // offset 0xC08, size 0x4, align 4
    bool m_bSpeedOnLand; // offset 0xC0C, size 0x1, align 1
    char _pad_0C0D[0x3]; // offset 0xC0D
    CUtlVector< CHandle< CBaseEntity > > m_vBouncedPlayerBefore; // offset 0xC10, size 0x18, align 8
    char _pad_0C28[0x8]; // offset 0xC28
};
