#pragma once

class CDOTA_Modifier_DragonKnight_DragonForm : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1B00, size 0x4, align 4
    int32 magic_resistance; // offset 0x1B04, size 0x4, align 4
    int32 model_scale; // offset 0x1B08, size 0x4, align 4
    int32 iLevel; // offset 0x1B0C, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x1B10, size 0x4, align 4
    int32 attack_projectile_speed_bonus; // offset 0x1B14, size 0x4, align 4
    int32 flying_movement; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1B20, size 0x8, align 8
    int32 bonus_slow_resistance; // offset 0x1B28, size 0x4, align 4
    int32 bonus_ability_cast_range; // offset 0x1B2C, size 0x4, align 4
    int32 m_nAssetIndex; // offset 0x1B30, size 0x4, align 4
    float32 ranged_splash_radius; // offset 0x1B34, size 0x4, align 4
    float32 ranged_splash_damage_pct; // offset 0x1B38, size 0x4, align 4
    float32 corrosive_duration; // offset 0x1B3C, size 0x4, align 4
    float32 frost_duration; // offset 0x1B40, size 0x4, align 4
    ParticleIndex_t m_nAmbientParticleFX; // offset 0x1B44, size 0x4, align 255
};
