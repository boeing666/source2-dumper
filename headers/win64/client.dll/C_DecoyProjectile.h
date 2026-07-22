#pragma once

class C_DecoyProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1260]; // offset 0x0
    int32 m_nDecoyShotTick; // offset 0x1260, size 0x4, align 4
    int32 m_nClientLastKnownDecoyShotTick; // offset 0x1264, size 0x4, align 4
    char _pad_1268[0x20]; // offset 0x1268
    GameTime_t m_flTimeParticleEffectSpawn; // offset 0x1288, size 0x4, align 255
    char _pad_128C[0x4]; // offset 0x128C
};
