#pragma once

class CDOTA_Modifier_Meepo_Geomancy : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 tree_regen; // offset 0x1A78, size 0x4, align 4
    float32 tree_radius; // offset 0x1A7C, size 0x4, align 4
    float32 dirt_move_speed; // offset 0x1A80, size 0x4, align 4
    float32 water_move_slow; // offset 0x1A84, size 0x4, align 4
    float32 water_slow_duration; // offset 0x1A88, size 0x4, align 4
    float32 m_flTreeRegen; // offset 0x1A8C, size 0x4, align 4
    float32 m_flDirtMoveSpeed; // offset 0x1A90, size 0x4, align 4
    float32 m_flWaterMoveSlow; // offset 0x1A94, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPrimeDivided; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
