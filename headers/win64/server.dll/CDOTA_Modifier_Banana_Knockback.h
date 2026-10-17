#pragma once

class CDOTA_Modifier_Banana_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vCenter; // offset 0x1AA8, size 0xC, align 4
    int32 knockback_distance; // offset 0x1AB4, size 0x4, align 4
    int32 knockback_height; // offset 0x1AB8, size 0x4, align 4
    float32 knockback_duration; // offset 0x1ABC, size 0x4, align 4
    Vector m_vHorizOffset; // offset 0x1AC0, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x1ACC, size 0xC, align 4
    Vector m_vDir; // offset 0x1AD8, size 0xC, align 4
    float32 m_fCurrentTimeHoriz; // offset 0x1AE4, size 0x4, align 4
    float32 m_fCurrentTimeVert; // offset 0x1AE8, size 0x4, align 4
    bool m_bShouldStun; // offset 0x1AEC, size 0x1, align 1
    char _pad_1AED[0x3]; // offset 0x1AED
    float32 flTimeSinceChange; // offset 0x1AF0, size 0x4, align 4
    char _pad_1AF4[0x4]; // offset 0x1AF4
};
