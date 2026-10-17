#pragma once

class CDOTA_Modifier_Grimstroke_SpiritWalk_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x1AA8, size 0x4, align 255
    int32 m_nHeroTickDamageApplied; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_fLastEffectsTime; // offset 0x1AB0, size 0x4, align 255
    float32 radius; // offset 0x1AB4, size 0x4, align 4
    float32 buff_duration; // offset 0x1AB8, size 0x4, align 4
    float32 debuff_duration; // offset 0x1ABC, size 0x4, align 4
    int32 max_damage; // offset 0x1AC0, size 0x4, align 4
    float32 max_stun; // offset 0x1AC4, size 0x4, align 4
    int32 movespeed_bonus_pct; // offset 0x1AC8, size 0x4, align 4
    int32 damage_per_tick; // offset 0x1ACC, size 0x4, align 4
    float32 tick_rate; // offset 0x1AD0, size 0x4, align 4
    float32 max_threshold_duration; // offset 0x1AD4, size 0x4, align 4
    int32 can_end_early; // offset 0x1AD8, size 0x4, align 4
    int32 shard_bonus_damage_pct; // offset 0x1ADC, size 0x4, align 4
    int32 shard_heal_pct; // offset 0x1AE0, size 0x4, align 4
    float32 shard_creep_penalty; // offset 0x1AE4, size 0x4, align 4
    bool m_bIsReflection; // offset 0x1AE8, size 0x1, align 1
    char _pad_1AE9[0x7]; // offset 0x1AE9
};
