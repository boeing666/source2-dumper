#pragma once

class CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 projectiles_per_stack; // offset 0x1A78, size 0x4, align 4
    int32 projectile_speed; // offset 0x1A7C, size 0x4, align 4
    float32 projectile_distance; // offset 0x1A80, size 0x4, align 4
    float32 projectile_width; // offset 0x1A84, size 0x4, align 4
    int32 splinter_angle; // offset 0x1A88, size 0x4, align 4
    float32 split_delay; // offset 0x1A8C, size 0x4, align 4
    int32 projectile_waves; // offset 0x1A90, size 0x4, align 4
    int32 m_nCurrentWaveCount; // offset 0x1A94, size 0x4, align 4
    int32 tectonic_shift_projectiles; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
    CUtlVector< CHandle< CBaseEntity > > m_vecEnemiesHit; // offset 0x1AA0, size 0x18, align 8
    CUtlVector< int32 > m_vecProjectileHandles; // offset 0x1AB8, size 0x18, align 8
};
