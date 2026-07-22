#pragma once

class CDOTA_Modifier_Disruptor_KineticWall_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    Vector m_vWallDirection; // offset 0x1A58, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1A64, size 0xC, align 4
    float32 wall_width; // offset 0x1A70, size 0x4, align 4
    float32 formation_time; // offset 0x1A74, size 0x4, align 4
    float32 wall_thickness; // offset 0x1A78, size 0x4, align 4
    float32 tick_rate; // offset 0x1A7C, size 0x4, align 4
    int32 strike_on_touch; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x14]; // offset 0x1A84
};
