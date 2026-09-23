#pragma once

class C_DecoyProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1300, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x12CC]; // offset 0x0
    int32 m_nDecoyShotTick; // offset 0x12CC, size 0x4, align 4
    int32 m_nClientLastKnownDecoyShotTick; // offset 0x12D0, size 0x4, align 4
    char _pad_12D4[0x24]; // offset 0x12D4
    GameTime_t m_flTimeParticleEffectSpawn; // offset 0x12F8, size 0x4, align 255
    char _pad_12FC[0x4]; // offset 0x12FC
};
