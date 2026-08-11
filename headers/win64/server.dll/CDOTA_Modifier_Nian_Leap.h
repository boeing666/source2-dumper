#pragma once

class CDOTA_Modifier_Nian_Leap : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_flTotalTimeInAir; // offset 0x1A78, size 0x4, align 4
    float32 m_flInitialVelocity; // offset 0x1A7C, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A80, size 0xC, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1A8C, size 0xC, align 4
    VectorWS m_vTargetPosition; // offset 0x1A98, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1AA4, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1AA8, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    float32 m_flHorizDelayTime; // offset 0x1AB0, size 0x4, align 4
    float32 m_flVertDelayTime; // offset 0x1AB4, size 0x4, align 4
    float32 m_flLeapSequenceDuration; // offset 0x1AB8, size 0x4, align 4
    float32 m_flPlaybackRate; // offset 0x1ABC, size 0x4, align 4
    int32 pounce_distance; // offset 0x1AC0, size 0x4, align 4
    float32 pounce_speed; // offset 0x1AC4, size 0x4, align 4
    float32 pounce_acceleration; // offset 0x1AC8, size 0x4, align 4
    float32 initial_delay; // offset 0x1ACC, size 0x4, align 4
    float32 landing_delay; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
