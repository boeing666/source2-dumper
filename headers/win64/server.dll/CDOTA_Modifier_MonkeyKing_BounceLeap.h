#pragma once

class CDOTA_Modifier_MonkeyKing_BounceLeap : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 give_up_distance; // offset 0x1A78, size 0x4, align 4
    float32 ground_jump_distance; // offset 0x1A7C, size 0x4, align 4
    float32 m_flZDelta; // offset 0x1A80, size 0x4, align 4
    float32 perched_day_vision; // offset 0x1A84, size 0x4, align 4
    float32 perched_night_vision; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1A8C, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A98, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1A9C, size 0xC, align 4
    float32 m_flSpeed; // offset 0x1AA8, size 0x4, align 4
    bool m_bTargetingEntity; // offset 0x1AAC, size 0x1, align 1
    bool m_bGroundToTree; // offset 0x1AAD, size 0x1, align 1
    bool m_bTreeToGround; // offset 0x1AAE, size 0x1, align 1
    bool m_bTreeToTree; // offset 0x1AAF, size 0x1, align 1
    bool m_bIsSpringJump; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 m_fSpringChanneledPercent; // offset 0x1AB4, size 0x4, align 4
    int32 m_nLeapSpeed; // offset 0x1AB8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ABC, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x1AC0, size 0x4, align 255
    float32 m_flFlightDuration; // offset 0x1AC4, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
