#pragma once

class C_Projectile_GraveStone_Projectile : public C_CitadelProjectile /*0x0*/  // sizeof 0xF00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCE8]; // offset 0x0
    float32 m_flWidth; // offset 0xCE8, size 0x4, align 4
    GameTime_t m_tDieTime; // offset 0xCEC, size 0x4, align 255
    char _pad_0CF0[0x210]; // offset 0xCF0
};
