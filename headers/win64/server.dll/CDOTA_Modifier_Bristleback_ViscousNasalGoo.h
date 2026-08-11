#pragma once

class CDOTA_Modifier_Bristleback_ViscousNasalGoo : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 base_armor; // offset 0x1A78, size 0x4, align 4
    float32 armor_per_stack; // offset 0x1A7C, size 0x4, align 4
    int32 base_move_slow; // offset 0x1A80, size 0x4, align 4
    int32 move_slow_per_stack; // offset 0x1A84, size 0x4, align 4
    int32 stack_limit; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nFXStackIndex; // offset 0x1A8C, size 0x4, align 255
};
