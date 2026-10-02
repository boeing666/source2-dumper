#pragma once

class C_Citadel_Bounce_Pad : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xE40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    float32 m_flUpFactor; // offset 0xE00, size 0x4, align 4
    float32 m_flBounceVelocity; // offset 0xE04, size 0x4, align 4
    GameTime_t m_tDeactivationTime; // offset 0xE08, size 0x4, align 255
    bool m_bDeactivated; // offset 0xE0C, size 0x1, align 1
    char _pad_0E0D[0x3]; // offset 0xE0D
    float32 m_flBarrelBounceVelocity; // offset 0xE10, size 0x4, align 4
    float32 m_flBarrelUpFactor; // offset 0xE14, size 0x4, align 4
    bool m_bSpeedOnLand; // offset 0xE18, size 0x1, align 1
    char _pad_0E19[0x7]; // offset 0xE19
    CUtlVector< CHandle< C_BaseEntity > > m_vBouncedPlayerBefore; // offset 0xE20, size 0x18, align 8
    char _pad_0E38[0x8]; // offset 0xE38
};
