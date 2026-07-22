#pragma once

class CProjectile_Priest_SlideTrap_Projectile : public C_CitadelProjectile /*0x0*/  // sizeof 0x10B0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xAEC]; // offset 0x0
    float32 m_flRangeAtCast; // offset 0xAEC, size 0x4, align 4 | MNetworkEnable
    char _pad_0AF0[0x3C]; // offset 0xAF0
    bool m_bArmed; // offset 0xB2C, size 0x1, align 1 | MNetworkEnable
    bool m_bMoving; // offset 0xB2D, size 0x1, align 1 | MNetworkEnable
    bool m_bFinished; // offset 0xB2E, size 0x1, align 1
    char _pad_0B2F[0x581]; // offset 0xB2F
};
