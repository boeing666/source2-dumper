#pragma once

class CDOTA_Modifier_Kunkka_Tidebringer : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bTidebringerAttack; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    float32 cleave_starting_width; // offset 0x1A5C, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1A60, size 0x4, align 4
    float32 cleave_distance; // offset 0x1A64, size 0x4, align 4
    float32 damage_bonus; // offset 0x1A68, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A6C, size 0x4, align 255
    float32 cleave_damage; // offset 0x1A70, size 0x4, align 4
    float32 cooldown_reduction_per_hero_hit; // offset 0x1A74, size 0x4, align 4
    char _pad_1A78[0x18]; // offset 0x1A78
};
