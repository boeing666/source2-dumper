#pragma once

class CDOTA_Modifier_Disruptor_KineticField : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    float32 wall_thickness; // offset 0x1AAC, size 0x4, align 4
    float32 tick_rate; // offset 0x1AB0, size 0x4, align 4
    int32 strike_on_touch; // offset 0x1AB4, size 0x4, align 4
    VectorWS m_vOriginLoc; // offset 0x1AB8, size 0xC, align 4
    bool m_bTruesight; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    VectorWS m_vOrigin; // offset 0x1AC8, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1AD4, size 0xC, align 4
    char _pad_1AE0[0x4]; // offset 0x1AE0
    bool is_wall; // offset 0x1AE4, size 0x1, align 1
    char _pad_1AE5[0x3]; // offset 0x1AE5
};
