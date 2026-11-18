#pragma once

class CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray : public CDOTA_Buff /*0x0*/  // sizeof 0x1B60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 activation_num_quill_sprays; // offset 0x1AF8, size 0x4, align 4
    float32 activation_spray_interval; // offset 0x1AFC, size 0x4, align 4
    int32 activation_angle; // offset 0x1B00, size 0x4, align 4
    int32 cast_range_bonus; // offset 0x1B04, size 0x4, align 4
    int32 activation_movement_speed_pct; // offset 0x1B08, size 0x4, align 4
    int32 activation_turn_rate_pct; // offset 0x1B0C, size 0x4, align 4
    int32 activation_disable_turning; // offset 0x1B10, size 0x4, align 4
    int32 activation_ignore_cast_angle; // offset 0x1B14, size 0x4, align 4
    int32 activation_turn_rate; // offset 0x1B18, size 0x4, align 4
    float32 activation_delay; // offset 0x1B1C, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1B20, size 0x4, align 255
    bool bDelayFinished; // offset 0x1B24, size 0x1, align 1
    char _pad_1B25[0x3]; // offset 0x1B25
    float32 m_flFacingTarget; // offset 0x1B28, size 0x4, align 4
    Vector m_vFacing; // offset 0x1B2C, size 0xC, align 4
    int32 m_nNumSprays; // offset 0x1B38, size 0x4, align 4
    int32 m_nPoseParameterWE; // offset 0x1B3C, size 0x4, align 4
    int32 m_nPoseParameterNS; // offset 0x1B40, size 0x4, align 4
    float32 m_flLastPoseX; // offset 0x1B44, size 0x4, align 4
    float32 m_flLastPoseY; // offset 0x1B48, size 0x4, align 4
    int32 m_nLastMaxDirection; // offset 0x1B4C, size 0x4, align 4
    VectorWS m_vLastOrigin; // offset 0x1B50, size 0xC, align 4
    GameTime_t m_flLastGameTime; // offset 0x1B5C, size 0x4, align 255
};
