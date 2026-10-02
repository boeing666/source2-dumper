#pragma once

class CCitadel_Bounce_Pad : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC40, size 0x4, align 4
    float32 m_flUpFactor; // offset 0xC44, size 0x4, align 4
    float32 m_flBounceVelocity; // offset 0xC48, size 0x4, align 4
    GameTime_t m_tDeactivationTime; // offset 0xC4C, size 0x4, align 255
    bool m_bDeactivated; // offset 0xC50, size 0x1, align 1
    char _pad_0C51[0x3]; // offset 0xC51
    float32 m_flBarrelBounceVelocity; // offset 0xC54, size 0x4, align 4
    float32 m_flBarrelUpFactor; // offset 0xC58, size 0x4, align 4
    bool m_bSpeedOnLand; // offset 0xC5C, size 0x1, align 1
    char _pad_0C5D[0x3]; // offset 0xC5D
    CUtlVector< CHandle< CBaseEntity > > m_vBouncedPlayerBefore; // offset 0xC60, size 0x18, align 8
    char _pad_0C78[0x8]; // offset 0xC78
};
