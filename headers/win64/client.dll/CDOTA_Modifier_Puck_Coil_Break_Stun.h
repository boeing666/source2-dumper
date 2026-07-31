#pragma once

class CDOTA_Modifier_Puck_Coil_Break_Stun : public CDOTA_Modifier_Stunned /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vCastLocation; // offset 0x1A78, size 0xC, align 4
    int32 coil_rapid_fire_z_offset; // offset 0x1A84, size 0x4, align 4
    float32 coil_rapid_fire_rate; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
