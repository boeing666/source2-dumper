#pragma once

class CDOTA_Modifier_Banana_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vCenter; // offset 0x1AF8, size 0xC, align 4
    int32 knockback_distance; // offset 0x1B04, size 0x4, align 4
    int32 knockback_height; // offset 0x1B08, size 0x4, align 4
    float32 knockback_duration; // offset 0x1B0C, size 0x4, align 4
    Vector m_vHorizOffset; // offset 0x1B10, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x1B1C, size 0xC, align 4
    Vector m_vDir; // offset 0x1B28, size 0xC, align 4
    float32 m_fCurrentTimeHoriz; // offset 0x1B34, size 0x4, align 4
    float32 m_fCurrentTimeVert; // offset 0x1B38, size 0x4, align 4
    bool m_bShouldStun; // offset 0x1B3C, size 0x1, align 1
    char _pad_1B3D[0x3]; // offset 0x1B3D
    float32 flTimeSinceChange; // offset 0x1B40, size 0x4, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
};
