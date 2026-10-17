#pragma once

class CDOTA_Modifier_Rubick_Telekinesis : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x1AA8, size 0x4, align 255
    GameTime_t m_fEndTime; // offset 0x1AAC, size 0x4, align 255
    float32 m_fTargetHeight; // offset 0x1AB0, size 0x4, align 4
    float32 m_fCurHeight; // offset 0x1AB4, size 0x4, align 4
    VectorWS m_vStartLoc; // offset 0x1AB8, size 0xC, align 4
    VectorWS m_vCurLoc; // offset 0x1AC4, size 0xC, align 4
    int32 max_land_distance; // offset 0x1AD0, size 0x4, align 4
    float32 fall_duration; // offset 0x1AD4, size 0x4, align 4
    bool m_bOverrideDuration; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    float32 m_flOverrideDuration; // offset 0x1ADC, size 0x4, align 4
};
