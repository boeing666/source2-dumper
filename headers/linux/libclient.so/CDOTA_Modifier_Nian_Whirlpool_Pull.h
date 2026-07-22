#pragma once

class CDOTA_Modifier_Nian_Whirlpool_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 pull_radius; // offset 0x1A58, size 0x4, align 4
    int32 pull_speed; // offset 0x1A5C, size 0x4, align 4
    int32 radius; // offset 0x1A60, size 0x4, align 4
    int32 whirlpool_damage; // offset 0x1A64, size 0x4, align 4
    float32 tick_rate; // offset 0x1A68, size 0x4, align 4
    GameTime_t m_flDamageTick; // offset 0x1A6C, size 0x4, align 255
};
