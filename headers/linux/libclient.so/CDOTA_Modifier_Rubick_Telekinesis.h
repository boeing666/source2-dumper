#pragma once

class CDOTA_Modifier_Rubick_Telekinesis : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x1A58, size 0x4, align 255
    GameTime_t m_fEndTime; // offset 0x1A5C, size 0x4, align 255
    float32 m_fTargetHeight; // offset 0x1A60, size 0x4, align 4
    float32 m_fCurHeight; // offset 0x1A64, size 0x4, align 4
    VectorWS m_vStartLoc; // offset 0x1A68, size 0xC, align 4
    VectorWS m_vCurLoc; // offset 0x1A74, size 0xC, align 4
    int32 max_land_distance; // offset 0x1A80, size 0x4, align 4
    float32 fall_duration; // offset 0x1A84, size 0x4, align 4
    bool m_bOverrideDuration; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    float32 m_flOverrideDuration; // offset 0x1A8C, size 0x4, align 4
};
