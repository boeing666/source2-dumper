#pragma once

class CDOTA_Modifier_Disruptor_KineticField : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 wall_thickness; // offset 0x1A5C, size 0x4, align 4
    float32 tick_rate; // offset 0x1A60, size 0x4, align 4
    int32 strike_on_touch; // offset 0x1A64, size 0x4, align 4
    VectorWS m_vOriginLoc; // offset 0x1A68, size 0xC, align 4
    bool m_bTruesight; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    VectorWS m_vOrigin; // offset 0x1A78, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1A84, size 0xC, align 4
};
