#pragma once

class CDOTA_Modifier_Nian_Leap : public CDOTA_Buff /*0x0*/  // sizeof 0x1B58, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flTotalTimeInAir; // offset 0x1AF8, size 0x4, align 4
    float32 m_flInitialVelocity; // offset 0x1AFC, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B00, size 0xC, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1B0C, size 0xC, align 4
    VectorWS m_vTargetPosition; // offset 0x1B18, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1B24, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B28, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1B2C, size 0x1, align 1
    char _pad_1B2D[0x3]; // offset 0x1B2D
    float32 m_flHorizDelayTime; // offset 0x1B30, size 0x4, align 4
    float32 m_flVertDelayTime; // offset 0x1B34, size 0x4, align 4
    float32 m_flLeapSequenceDuration; // offset 0x1B38, size 0x4, align 4
    float32 m_flPlaybackRate; // offset 0x1B3C, size 0x4, align 4
    int32 pounce_distance; // offset 0x1B40, size 0x4, align 4
    float32 pounce_speed; // offset 0x1B44, size 0x4, align 4
    float32 pounce_acceleration; // offset 0x1B48, size 0x4, align 4
    float32 initial_delay; // offset 0x1B4C, size 0x4, align 4
    float32 landing_delay; // offset 0x1B50, size 0x4, align 4
    char _pad_1B54[0x4]; // offset 0x1B54
};
