#pragma once

class CDOTA_Modifier_PrimalBeast_Uproar : public CDOTA_Modifier_Stacking_Base /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 stack_limit; // offset 0x1AF8, size 0x4, align 4
    int32 damage_limit; // offset 0x1AFC, size 0x4, align 4
    float32 stack_duration; // offset 0x1B00, size 0x4, align 4
    float32 damage_min; // offset 0x1B04, size 0x4, align 4
    float32 damage_max; // offset 0x1B08, size 0x4, align 4
    int32 bonus_damage_per_stack; // offset 0x1B0C, size 0x4, align 4
    ParticleIndex_t m_nFxIndexA; // offset 0x1B10, size 0x4, align 255
    int32 iCur_stack; // offset 0x1B14, size 0x4, align 4
    float32 slow_duration; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x1C]; // offset 0x1B1C
    float32 m_fTotalDamage; // offset 0x1B38, size 0x4, align 4
    GameTime_t m_flLastStackTime; // offset 0x1B3C, size 0x4, align 255
};
