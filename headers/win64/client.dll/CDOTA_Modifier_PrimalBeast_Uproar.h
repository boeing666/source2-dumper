#pragma once

class CDOTA_Modifier_PrimalBeast_Uproar : public CDOTA_Modifier_Stacking_Base /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 stack_limit; // offset 0x1A58, size 0x4, align 4
    int32 damage_limit; // offset 0x1A5C, size 0x4, align 4
    int32 stack_count_increase_on_disable; // offset 0x1A60, size 0x4, align 4
    float32 stack_duration; // offset 0x1A64, size 0x4, align 4
    float32 damage_min; // offset 0x1A68, size 0x4, align 4
    float32 damage_max; // offset 0x1A6C, size 0x4, align 4
    int32 bonus_damage_per_stack; // offset 0x1A70, size 0x4, align 4
    ParticleIndex_t m_nFxIndexA; // offset 0x1A74, size 0x4, align 255
    int32 iCur_stack; // offset 0x1A78, size 0x4, align 4
    float32 slow_duration; // offset 0x1A7C, size 0x4, align 4
    char _pad_1A80[0x18]; // offset 0x1A80
    float32 m_fTotalDamage; // offset 0x1A98, size 0x4, align 4
    GameTime_t m_flLastStackTime; // offset 0x1A9C, size 0x4, align 255
};
