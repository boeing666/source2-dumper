#pragma once

class C_DecoyProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1218, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11E4]; // offset 0x0
    int32 m_nDecoyShotTick; // offset 0x11E4, size 0x4, align 4
    int32 m_nClientLastKnownDecoyShotTick; // offset 0x11E8, size 0x4, align 4
    char _pad_11EC[0x24]; // offset 0x11EC
    GameTime_t m_flTimeParticleEffectSpawn; // offset 0x1210, size 0x4, align 255
    char _pad_1214[0x4]; // offset 0x1214
};
