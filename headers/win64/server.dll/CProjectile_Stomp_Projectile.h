#pragma once

class CProjectile_Stomp_Projectile : public CCitadelProjectile /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x860]; // offset 0x0
    Vector m_vLastStompPos; // offset 0x860, size 0xC, align 4
    bool m_bFinished; // offset 0x86C, size 0x1, align 1
    char _pad_086D[0x3]; // offset 0x86D
    float32 m_flWidth; // offset 0x870, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_tDieTime; // offset 0x874, size 0x4, align 255 | MNetworkEnable
    char _pad_0878[0x280]; // offset 0x878
};
