#pragma once

class CDOTA_Modifier_Jakiro_Macropyre_Ice_EdgeThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    Vector m_vPathDir; // offset 0x1A58, size 0xC, align 4
    int32 ice_edge_path_radius; // offset 0x1A64, size 0x4, align 4
    int32 cast_range; // offset 0x1A68, size 0x4, align 4
    float32 ice_edge_linger_duration; // offset 0x1A6C, size 0x4, align 4
};
