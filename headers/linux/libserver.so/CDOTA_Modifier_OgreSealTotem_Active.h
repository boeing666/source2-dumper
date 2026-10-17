#pragma once

class CDOTA_Modifier_OgreSealTotem_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flTotalTime; // offset 0x1AA8, size 0x4, align 4
    float32 m_flInitialVelocity; // offset 0x1AAC, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AB0, size 0xC, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1ABC, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1AC8, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1ACC, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    VectorWS m_vLastOrderPos; // offset 0x1AD4, size 0xC, align 4
    bool m_bIssuedOrder; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x3]; // offset 0x1AE1
    int32 m_nCurrentBounce; // offset 0x1AE4, size 0x4, align 4
    int32 leap_distance; // offset 0x1AE8, size 0x4, align 4
    float32 leap_speed; // offset 0x1AEC, size 0x4, align 4
    float32 leap_acceleration; // offset 0x1AF0, size 0x4, align 4
    int32 leap_radius; // offset 0x1AF4, size 0x4, align 4
    float32 leap_bonus_duration; // offset 0x1AF8, size 0x4, align 4
    bool m_bLaunched; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    float32 m_flFacingTarget; // offset 0x1B00, size 0x4, align 4
    float32 movement_turn_rate; // offset 0x1B04, size 0x4, align 4
};
