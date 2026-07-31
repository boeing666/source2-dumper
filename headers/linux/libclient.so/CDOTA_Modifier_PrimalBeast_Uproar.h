#pragma once

class CDOTA_Modifier_PrimalBeast_Uproar : public CDOTA_Modifier_Stacking_Base /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 stack_limit; // offset 0x1A78, size 0x4, align 4
    int32 damage_limit; // offset 0x1A7C, size 0x4, align 4
    int32 stack_count_increase_on_disable; // offset 0x1A80, size 0x4, align 4
    float32 stack_duration; // offset 0x1A84, size 0x4, align 4
    float32 damage_min; // offset 0x1A88, size 0x4, align 4
    float32 damage_max; // offset 0x1A8C, size 0x4, align 4
    int32 bonus_damage_per_stack; // offset 0x1A90, size 0x4, align 4
    ParticleIndex_t m_nFxIndexA; // offset 0x1A94, size 0x4, align 255
    int32 iCur_stack; // offset 0x1A98, size 0x4, align 4
    float32 slow_duration; // offset 0x1A9C, size 0x4, align 4
    char _pad_1AA0[0x18]; // offset 0x1AA0
    float32 m_fTotalDamage; // offset 0x1AB8, size 0x4, align 4
    GameTime_t m_flLastStackTime; // offset 0x1ABC, size 0x4, align 255
};
