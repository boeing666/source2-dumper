#pragma once

class CDOTA_Modifier_Largo_Song_Attack_Burst : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 magic_damage_bonus; // offset 0x1AF8, size 0x4, align 4
    float32 magic_damage_bonus_per_stack; // offset 0x1AFC, size 0x4, align 4
    float32 spell_amp_bonus; // offset 0x1B00, size 0x4, align 4
    int32 num_stacks; // offset 0x1B04, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B08, size 0x4, align 255
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
