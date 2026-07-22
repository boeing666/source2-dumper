#pragma once

class CDOTA_Modifier_Juggernaut_Bladeform_Linger : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 agi_bonus_pct_per_stack; // offset 0x1A58, size 0x4, align 4
    int32 max_stacks; // offset 0x1A5C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A60, size 0x4, align 255
    float32 movement_speed_pct_per_stack; // offset 0x1A64, size 0x4, align 4
};
