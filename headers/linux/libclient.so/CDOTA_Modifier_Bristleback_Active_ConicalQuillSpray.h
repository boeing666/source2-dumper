#pragma once

class CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 activation_num_quill_sprays; // offset 0x1A78, size 0x4, align 4
    float32 activation_spray_interval; // offset 0x1A7C, size 0x4, align 4
    int32 activation_angle; // offset 0x1A80, size 0x4, align 4
    int32 cast_range_bonus; // offset 0x1A84, size 0x4, align 4
    int32 activation_movement_speed_pct; // offset 0x1A88, size 0x4, align 4
    int32 activation_turn_rate_pct; // offset 0x1A8C, size 0x4, align 4
    int32 activation_disable_turning; // offset 0x1A90, size 0x4, align 4
    int32 activation_ignore_cast_angle; // offset 0x1A94, size 0x4, align 4
    int32 activation_turn_rate; // offset 0x1A98, size 0x4, align 4
    float32 activation_delay; // offset 0x1A9C, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1AA0, size 0x4, align 255
    bool bDelayFinished; // offset 0x1AA4, size 0x1, align 1
    char _pad_1AA5[0x3]; // offset 0x1AA5
    float32 m_flFacingTarget; // offset 0x1AA8, size 0x4, align 4
    Vector m_vFacing; // offset 0x1AAC, size 0xC, align 4
    int32 m_nNumSprays; // offset 0x1AB8, size 0x4, align 4
    int32 m_nPoseParameterWE; // offset 0x1ABC, size 0x4, align 4
    int32 m_nPoseParameterNS; // offset 0x1AC0, size 0x4, align 4
    float32 m_flLastPoseX; // offset 0x1AC4, size 0x4, align 4
    float32 m_flLastPoseY; // offset 0x1AC8, size 0x4, align 4
    int32 m_nLastMaxDirection; // offset 0x1ACC, size 0x4, align 4
    VectorWS m_vLastOrigin; // offset 0x1AD0, size 0xC, align 4
    GameTime_t m_flLastGameTime; // offset 0x1ADC, size 0x4, align 255
};
