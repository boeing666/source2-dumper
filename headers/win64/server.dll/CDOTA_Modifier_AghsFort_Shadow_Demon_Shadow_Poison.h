#pragma once

class CDOTA_Modifier_AghsFort_Shadow_Demon_Shadow_Poison : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 stack_damage; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_stack_damage; // offset 0x1AFC, size 0x4, align 4
    int32 max_multiply_stacks; // offset 0x1B00, size 0x4, align 4
    int32 release_at_max_stacks; // offset 0x1B04, size 0x4, align 4
    ParticleIndex_t m_nFXStackIndex; // offset 0x1B08, size 0x4, align 255
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
