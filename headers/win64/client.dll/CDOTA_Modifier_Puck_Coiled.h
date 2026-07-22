#pragma once

class CDOTA_Modifier_Puck_Coiled : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vCastLocation; // offset 0x1A58, size 0xC, align 4
    int32 coil_rapid_fire_z_offset; // offset 0x1A64, size 0x4, align 4
    float32 coil_rapid_fire_rate; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
