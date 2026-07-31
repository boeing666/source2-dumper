#pragma once

class CDOTA_Modifier_Largo_Song_Attack_Burst : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 magic_damage_bonus; // offset 0x1A78, size 0x4, align 4
    float32 magic_damage_bonus_per_stack; // offset 0x1A7C, size 0x4, align 4
    float32 spell_amp_bonus; // offset 0x1A80, size 0x4, align 4
    int32 num_stacks; // offset 0x1A84, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A88, size 0x4, align 255
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
