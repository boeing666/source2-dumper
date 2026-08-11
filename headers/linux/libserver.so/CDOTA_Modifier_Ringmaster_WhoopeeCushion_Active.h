#pragma once

class CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_flTotalTime; // offset 0x1A78, size 0x4, align 4
    float32 m_flInitialVelocity; // offset 0x1A7C, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A80, size 0xC, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1A8C, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1A98, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1A9C, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x3]; // offset 0x1AA1
    int32 leap_distance; // offset 0x1AA4, size 0x4, align 4
    float32 leap_speed; // offset 0x1AA8, size 0x4, align 4
    float32 leap_acceleration; // offset 0x1AAC, size 0x4, align 4
    int32 leap_radius; // offset 0x1AB0, size 0x4, align 4
    float32 leap_bonus_duration; // offset 0x1AB4, size 0x4, align 4
    bool m_bLaunched; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
