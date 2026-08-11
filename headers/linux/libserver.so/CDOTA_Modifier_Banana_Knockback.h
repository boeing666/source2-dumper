#pragma once

class CDOTA_Modifier_Banana_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vCenter; // offset 0x1A78, size 0xC, align 4
    int32 knockback_distance; // offset 0x1A84, size 0x4, align 4
    int32 knockback_height; // offset 0x1A88, size 0x4, align 4
    float32 knockback_duration; // offset 0x1A8C, size 0x4, align 4
    Vector m_vHorizOffset; // offset 0x1A90, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x1A9C, size 0xC, align 4
    Vector m_vDir; // offset 0x1AA8, size 0xC, align 4
    float32 m_fCurrentTimeHoriz; // offset 0x1AB4, size 0x4, align 4
    float32 m_fCurrentTimeVert; // offset 0x1AB8, size 0x4, align 4
    bool m_bShouldStun; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    float32 flTimeSinceChange; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
