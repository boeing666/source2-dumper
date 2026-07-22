#pragma once

class CDOTA_Modifier_DragonKnight_DragonForm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x1A58, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1A60, size 0x4, align 4
    int32 magic_resistance; // offset 0x1A64, size 0x4, align 4
    int32 model_scale; // offset 0x1A68, size 0x4, align 4
    int32 iLevel; // offset 0x1A6C, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x1A70, size 0x4, align 4
    int32 attack_projectile_speed_bonus; // offset 0x1A74, size 0x4, align 4
    int32 flying_movement; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1A80, size 0x8, align 8
    int32 bonus_slow_resistance; // offset 0x1A88, size 0x4, align 4
    int32 bonus_ability_cast_range; // offset 0x1A8C, size 0x4, align 4
    int32 m_nAssetIndex; // offset 0x1A90, size 0x4, align 4
    float32 ranged_splash_radius; // offset 0x1A94, size 0x4, align 4
    float32 ranged_splash_damage_pct; // offset 0x1A98, size 0x4, align 4
    float32 corrosive_duration; // offset 0x1A9C, size 0x4, align 4
    float32 frost_duration; // offset 0x1AA0, size 0x4, align 4
    ParticleIndex_t m_nAmbientParticleFX; // offset 0x1AA4, size 0x4, align 255
};
