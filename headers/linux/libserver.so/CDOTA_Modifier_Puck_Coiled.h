#pragma once

class CDOTA_Modifier_Puck_Coiled : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vCastLocation; // offset 0x1AA8, size 0xC, align 4
    int32 coil_rapid_fire_z_offset; // offset 0x1AB4, size 0x4, align 4
    float32 coil_rapid_fire_rate; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
