#pragma once

class CDOTA_Modifier_Juggernaut_Bladeform : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 max_stacks; // offset 0x1A78, size 0x4, align 4
    float32 stack_gain_time; // offset 0x1A7C, size 0x4, align 4
    float32 agi_bonus_pct_per_stack; // offset 0x1A80, size 0x4, align 4
    float32 movement_speed_pct_per_stack; // offset 0x1A84, size 0x4, align 4
    float32 linger_duration; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
};
