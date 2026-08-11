#pragma once

class CProjectile_Priest_SlideTrap_Projectile : public CCitadelProjectile /*0x0*/  // sizeof 0xE38, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x874]; // offset 0x0
    float32 m_flRangeAtCast; // offset 0x874, size 0x4, align 4 | MNetworkEnable
    char _pad_0878[0x3C]; // offset 0x878
    bool m_bArmed; // offset 0x8B4, size 0x1, align 1 | MNetworkEnable
    bool m_bMoving; // offset 0x8B5, size 0x1, align 1 | MNetworkEnable
    bool m_bFinished; // offset 0x8B6, size 0x1, align 1
    char _pad_08B7[0x581]; // offset 0x8B7
};
