#pragma once

class CDOTA_Modifier_Centaur_Mount_Toss : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 air_duration; // offset 0x1AF8, size 0x4, align 4
    int32 air_height; // offset 0x1AFC, size 0x4, align 4
    int32 travel_distance; // offset 0x1B00, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B04, size 0x4, align 4
    float32 m_flPredictedTotalTime; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B0C, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1B18, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B1C, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1B20, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1B21, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1B22, size 0x1, align 1
    char _pad_1B23[0x1]; // offset 0x1B23
    Vector m_vHorizontalVelocity; // offset 0x1B24, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1B30, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1B3C, size 0x4, align 4
    bool m_bDone; // offset 0x1B40, size 0x1, align 1
    char _pad_1B41[0x7]; // offset 0x1B41
};
