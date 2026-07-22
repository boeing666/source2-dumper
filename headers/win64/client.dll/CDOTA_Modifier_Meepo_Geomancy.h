#pragma once

class CDOTA_Modifier_Meepo_Geomancy : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 tree_regen; // offset 0x1A58, size 0x4, align 4
    float32 tree_radius; // offset 0x1A5C, size 0x4, align 4
    float32 dirt_move_speed; // offset 0x1A60, size 0x4, align 4
    float32 water_move_slow; // offset 0x1A64, size 0x4, align 4
    float32 water_slow_duration; // offset 0x1A68, size 0x4, align 4
    float32 m_flTreeRegen; // offset 0x1A6C, size 0x4, align 4
    float32 m_flDirtMoveSpeed; // offset 0x1A70, size 0x4, align 4
    float32 m_flWaterMoveSlow; // offset 0x1A74, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPrimeDivided; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
