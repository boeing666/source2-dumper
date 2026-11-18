#pragma once

class CDOTA_Modifier_Disruptor_KineticField : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 wall_thickness; // offset 0x1AFC, size 0x4, align 4
    float32 tick_rate; // offset 0x1B00, size 0x4, align 4
    int32 strike_on_touch; // offset 0x1B04, size 0x4, align 4
    VectorWS m_vOriginLoc; // offset 0x1B08, size 0xC, align 4
    bool m_bTruesight; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    VectorWS m_vOrigin; // offset 0x1B18, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1B24, size 0xC, align 4
    char _pad_1B30[0x4]; // offset 0x1B30
    bool is_wall; // offset 0x1B34, size 0x1, align 1
    char _pad_1B35[0x3]; // offset 0x1B35
};
