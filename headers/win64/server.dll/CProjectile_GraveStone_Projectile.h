#pragma once

class CProjectile_GraveStone_Projectile : public CCitadelProjectile /*0x0*/  // sizeof 0xB98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x970]; // offset 0x0
    Vector m_vLastStompPos; // offset 0x970, size 0xC, align 4
    bool m_bFinished; // offset 0x97C, size 0x1, align 1
    char _pad_097D[0x3]; // offset 0x97D
    float32 m_flWidth; // offset 0x980, size 0x4, align 4
    GameTime_t m_tDieTime; // offset 0x984, size 0x4, align 255
    char _pad_0988[0x210]; // offset 0x988
};
