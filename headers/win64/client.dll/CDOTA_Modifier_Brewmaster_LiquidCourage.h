#pragma once

class CDOTA_Modifier_Brewmaster_LiquidCourage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 min_health_threshold; // offset 0x1A58, size 0x4, align 4
    int32 max_health_threshold; // offset 0x1A5C, size 0x4, align 4
    float32 status_resist; // offset 0x1A60, size 0x4, align 4
    int32 min_speed; // offset 0x1A64, size 0x4, align 4
    int32 max_speed; // offset 0x1A68, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1A6C, size 0x4, align 4
    float32 speed_toggle_time; // offset 0x1A70, size 0x4, align 4
    int32 m_nCurrentSpeed; // offset 0x1A74, size 0x4, align 4
    int32 m_nMaxHPRegen; // offset 0x1A78, size 0x4, align 4
    bool m_bForceActive; // offset 0x1A7C, size 0x1, align 1
    bool m_bMinimumSpeed; // offset 0x1A7D, size 0x1, align 1
    char _pad_1A7E[0x2]; // offset 0x1A7E
    GameTime_t m_SpeedToggleTime; // offset 0x1A80, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1A84, size 0x4, align 255
};
