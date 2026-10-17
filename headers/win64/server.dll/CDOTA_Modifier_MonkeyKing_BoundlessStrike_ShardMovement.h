#pragma once

class CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AAC, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1AB8, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1ABC, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x3]; // offset 0x1AC1
    Vector m_vHorizontalVelocity; // offset 0x1AC4, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AD0, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1ADC, size 0x4, align 4
    int32 acceleration_z; // offset 0x1AE0, size 0x4, align 4
    int32 min_height_above_lowest; // offset 0x1AE4, size 0x4, align 4
    int32 min_height_above_highest; // offset 0x1AE8, size 0x4, align 4
    int32 max_horizontal_acceleration; // offset 0x1AEC, size 0x4, align 4
    int32 spring_channel_pct; // offset 0x1AF0, size 0x4, align 4
    char _pad_1AF4[0x4]; // offset 0x1AF4
};
