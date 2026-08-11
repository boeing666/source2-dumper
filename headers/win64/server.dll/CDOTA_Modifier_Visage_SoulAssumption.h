#pragma once

class CDOTA_Modifier_Visage_SoulAssumption : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    int32 stack_limit; // offset 0x1A7C, size 0x4, align 4
    int32 damage_limit; // offset 0x1A80, size 0x4, align 4
    float32 stack_duration; // offset 0x1A84, size 0x4, align 4
    float32 damage_min; // offset 0x1A88, size 0x4, align 4
    float32 damage_max; // offset 0x1A8C, size 0x4, align 4
    ParticleIndex_t m_nFxIndexA; // offset 0x1A90, size 0x4, align 255
    ParticleIndex_t m_nFxIndexB; // offset 0x1A94, size 0x4, align 255
    int32 iCur_stack; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x1C]; // offset 0x1A9C
    float32 m_fTotalDamage; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
