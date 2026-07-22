#pragma once

class CDOTA_Modifier_Jakiro_Macropyre_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    Vector m_vPathDir; // offset 0x1A58, size 0xC, align 4
    float32 burn_interval; // offset 0x1A64, size 0x4, align 4
    float32 path_radius; // offset 0x1A68, size 0x4, align 4
    float32 cast_range; // offset 0x1A6C, size 0x4, align 4
    float32 linger_duration; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
