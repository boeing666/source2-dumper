#pragma once

class CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 projectiles_per_stack; // offset 0x1A58, size 0x4, align 4
    int32 projectile_speed; // offset 0x1A5C, size 0x4, align 4
    float32 projectile_distance; // offset 0x1A60, size 0x4, align 4
    float32 projectile_width; // offset 0x1A64, size 0x4, align 4
    int32 splinter_angle; // offset 0x1A68, size 0x4, align 4
    float32 split_delay; // offset 0x1A6C, size 0x4, align 4
    int32 projectile_waves; // offset 0x1A70, size 0x4, align 4
    int32 m_nCurrentWaveCount; // offset 0x1A74, size 0x4, align 4
    int32 tectonic_shift_projectiles; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
