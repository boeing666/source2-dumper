#pragma once

class CDOTA_Modifier_Tiny_Grow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_armor; // offset 0x1A58, size 0x4, align 4
    int32 attack_speed_reduction; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A60, size 0x4, align 4
    float32 tree_bonus_damage_pct; // offset 0x1A64, size 0x4, align 4
    float32 move_speed; // offset 0x1A68, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A6C, size 0x4, align 255
};
