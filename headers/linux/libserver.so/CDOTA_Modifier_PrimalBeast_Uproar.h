#pragma once

class CDOTA_Modifier_PrimalBeast_Uproar : public CDOTA_Modifier_Stacking_Base /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AC8]; // offset 0x0
    int32 stack_limit; // offset 0x1AC8, size 0x4, align 4
    int32 damage_limit; // offset 0x1ACC, size 0x4, align 4
    int32 stack_count_increase_on_disable; // offset 0x1AD0, size 0x4, align 4
    float32 stack_duration; // offset 0x1AD4, size 0x4, align 4
    float32 damage_min; // offset 0x1AD8, size 0x4, align 4
    float32 damage_max; // offset 0x1ADC, size 0x4, align 4
    int32 bonus_damage_per_stack; // offset 0x1AE0, size 0x4, align 4
    ParticleIndex_t m_nFxIndexA; // offset 0x1AE4, size 0x4, align 255
    int32 iCur_stack; // offset 0x1AE8, size 0x4, align 4
    float32 slow_duration; // offset 0x1AEC, size 0x4, align 4
    char _pad_1AF0[0x18]; // offset 0x1AF0
    float32 m_fTotalDamage; // offset 0x1B08, size 0x4, align 4
    GameTime_t m_flLastStackTime; // offset 0x1B0C, size 0x4, align 255
};
