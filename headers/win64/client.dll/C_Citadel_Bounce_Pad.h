#pragma once

class C_Citadel_Bounce_Pad : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xDE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    float32 m_flUpFactor; // offset 0xDA8, size 0x4, align 4
    float32 m_flBounceVelocity; // offset 0xDAC, size 0x4, align 4
    GameTime_t m_tDeactivationTime; // offset 0xDB0, size 0x4, align 255
    bool m_bDeactivated; // offset 0xDB4, size 0x1, align 1
    char _pad_0DB5[0x3]; // offset 0xDB5
    float32 m_flBarrelBounceVelocity; // offset 0xDB8, size 0x4, align 4
    float32 m_flBarrelUpFactor; // offset 0xDBC, size 0x4, align 4
    bool m_bSpeedOnLand; // offset 0xDC0, size 0x1, align 1
    char _pad_0DC1[0x7]; // offset 0xDC1
    CUtlVector< CHandle< C_BaseEntity > > m_vBouncedPlayerBefore; // offset 0xDC8, size 0x18, align 8
    char _pad_0DE0[0x8]; // offset 0xDE0
};
