#pragma once

class CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A7C, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1A88, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1A8C, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x3]; // offset 0x1A91
    Vector m_vHorizontalVelocity; // offset 0x1A94, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AA0, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1AAC, size 0x4, align 4
    int32 acceleration_z; // offset 0x1AB0, size 0x4, align 4
    int32 min_height_above_lowest; // offset 0x1AB4, size 0x4, align 4
    int32 min_height_above_highest; // offset 0x1AB8, size 0x4, align 4
    int32 max_horizontal_acceleration; // offset 0x1ABC, size 0x4, align 4
    int32 spring_channel_pct; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
