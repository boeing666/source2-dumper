#pragma once

class CDOTA_Modifier_Meepo_Geomancy : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 tree_regen; // offset 0x1AF8, size 0x4, align 4
    float32 tree_radius; // offset 0x1AFC, size 0x4, align 4
    float32 dirt_move_speed; // offset 0x1B00, size 0x4, align 4
    float32 water_move_slow; // offset 0x1B04, size 0x4, align 4
    float32 water_slow_duration; // offset 0x1B08, size 0x4, align 4
    float32 m_flTreeRegen; // offset 0x1B0C, size 0x4, align 4
    float32 m_flDirtMoveSpeed; // offset 0x1B10, size 0x4, align 4
    float32 m_flWaterMoveSlow; // offset 0x1B14, size 0x4, align 4
    CHandle< CBaseEntity > m_hPrimeDivided; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
