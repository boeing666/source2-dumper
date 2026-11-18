#pragma once

class CDOTA_Modifier_MonkeyKing_BounceLeap : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 give_up_distance; // offset 0x1AF8, size 0x4, align 4
    float32 ground_jump_distance; // offset 0x1AFC, size 0x4, align 4
    float32 m_flZDelta; // offset 0x1B00, size 0x4, align 4
    float32 perched_day_vision; // offset 0x1B04, size 0x4, align 4
    float32 perched_night_vision; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1B0C, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B18, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1B1C, size 0xC, align 4
    float32 m_flSpeed; // offset 0x1B28, size 0x4, align 4
    bool m_bTargetingEntity; // offset 0x1B2C, size 0x1, align 1
    bool m_bGroundToTree; // offset 0x1B2D, size 0x1, align 1
    bool m_bTreeToGround; // offset 0x1B2E, size 0x1, align 1
    bool m_bTreeToTree; // offset 0x1B2F, size 0x1, align 1
    bool m_bIsSpringJump; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x3]; // offset 0x1B31
    float32 m_fSpringChanneledPercent; // offset 0x1B34, size 0x4, align 4
    int32 m_nLeapSpeed; // offset 0x1B38, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B3C, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x1B40, size 0x4, align 255
    float32 m_flFlightDuration; // offset 0x1B44, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B48, size 0x4, align 4
    char _pad_1B4C[0x4]; // offset 0x1B4C
};
