#pragma once

class CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 projectiles_per_stack; // offset 0x1AF8, size 0x4, align 4
    int32 projectile_speed; // offset 0x1AFC, size 0x4, align 4
    float32 projectile_distance; // offset 0x1B00, size 0x4, align 4
    float32 projectile_width; // offset 0x1B04, size 0x4, align 4
    int32 splinter_angle; // offset 0x1B08, size 0x4, align 4
    float32 split_delay; // offset 0x1B0C, size 0x4, align 4
    int32 projectile_waves; // offset 0x1B10, size 0x4, align 4
    int32 m_nCurrentWaveCount; // offset 0x1B14, size 0x4, align 4
    int32 tectonic_shift_projectiles; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
    CUtlVector< CHandle< CBaseEntity > > m_vecEnemiesHit; // offset 0x1B20, size 0x18, align 8
    CUtlVector< int32 > m_vecProjectileHandles; // offset 0x1B38, size 0x18, align 8
};
