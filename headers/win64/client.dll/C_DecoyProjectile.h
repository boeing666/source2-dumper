#pragma once

class C_DecoyProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1378, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    int32 m_nDecoyShotTick; // offset 0x1348, size 0x4, align 4
    int32 m_nClientLastKnownDecoyShotTick; // offset 0x134C, size 0x4, align 4
    char _pad_1350[0x20]; // offset 0x1350
    GameTime_t m_flTimeParticleEffectSpawn; // offset 0x1370, size 0x4, align 255
    char _pad_1374[0x4]; // offset 0x1374
};
