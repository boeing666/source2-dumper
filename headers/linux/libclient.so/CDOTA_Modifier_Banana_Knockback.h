#pragma once

class CDOTA_Modifier_Banana_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vCenter; // offset 0x1A58, size 0xC, align 4
    int32 knockback_distance; // offset 0x1A64, size 0x4, align 4
    int32 knockback_height; // offset 0x1A68, size 0x4, align 4
    float32 knockback_duration; // offset 0x1A6C, size 0x4, align 4
    Vector m_vHorizOffset; // offset 0x1A70, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x1A7C, size 0xC, align 4
    Vector m_vDir; // offset 0x1A88, size 0xC, align 4
    float32 m_fCurrentTimeHoriz; // offset 0x1A94, size 0x4, align 4
    float32 m_fCurrentTimeVert; // offset 0x1A98, size 0x4, align 4
    bool m_bShouldStun; // offset 0x1A9C, size 0x1, align 1
    char _pad_1A9D[0x3]; // offset 0x1A9D
    float32 flTimeSinceChange; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
