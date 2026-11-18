#pragma once

class CDOTA_Modifier_Grimstroke_SpiritWalk_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x1AF8, size 0x4, align 255
    int32 m_nHeroTickDamageApplied; // offset 0x1AFC, size 0x4, align 4
    GameTime_t m_fLastEffectsTime; // offset 0x1B00, size 0x4, align 255
    float32 radius; // offset 0x1B04, size 0x4, align 4
    float32 buff_duration; // offset 0x1B08, size 0x4, align 4
    float32 debuff_duration; // offset 0x1B0C, size 0x4, align 4
    int32 max_damage; // offset 0x1B10, size 0x4, align 4
    float32 max_stun; // offset 0x1B14, size 0x4, align 4
    int32 movespeed_bonus_pct; // offset 0x1B18, size 0x4, align 4
    int32 damage_per_tick; // offset 0x1B1C, size 0x4, align 4
    float32 tick_rate; // offset 0x1B20, size 0x4, align 4
    float32 max_threshold_duration; // offset 0x1B24, size 0x4, align 4
    int32 can_end_early; // offset 0x1B28, size 0x4, align 4
    int32 shard_bonus_damage_pct; // offset 0x1B2C, size 0x4, align 4
    int32 shard_heal_pct; // offset 0x1B30, size 0x4, align 4
    float32 shard_creep_penalty; // offset 0x1B34, size 0x4, align 4
    bool m_bIsReflection; // offset 0x1B38, size 0x1, align 1
    char _pad_1B39[0x7]; // offset 0x1B39
};
