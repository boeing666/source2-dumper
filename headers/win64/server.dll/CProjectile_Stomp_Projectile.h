#pragma once

class CProjectile_Stomp_Projectile : public CCitadelProjectile /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    VectorWS m_vLastStompPos; // offset 0x968, size 0xC, align 4
    bool m_bFinished; // offset 0x974, size 0x1, align 1
    char _pad_0975[0x3]; // offset 0x975
    float32 m_flWidth; // offset 0x978, size 0x4, align 4
    GameTime_t m_tDieTime; // offset 0x97C, size 0x4, align 255
    char _pad_0980[0x370]; // offset 0x980
};
