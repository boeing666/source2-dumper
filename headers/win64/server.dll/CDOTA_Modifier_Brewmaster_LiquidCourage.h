#pragma once

class CDOTA_Modifier_Brewmaster_LiquidCourage : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 min_health_threshold; // offset 0x1A78, size 0x4, align 4
    int32 max_health_threshold; // offset 0x1A7C, size 0x4, align 4
    float32 status_resist; // offset 0x1A80, size 0x4, align 4
    int32 min_speed; // offset 0x1A84, size 0x4, align 4
    int32 max_speed; // offset 0x1A88, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1A8C, size 0x4, align 4
    float32 speed_toggle_time; // offset 0x1A90, size 0x4, align 4
    int32 m_nCurrentSpeed; // offset 0x1A94, size 0x4, align 4
    int32 m_nMaxHPRegen; // offset 0x1A98, size 0x4, align 4
    bool m_bForceActive; // offset 0x1A9C, size 0x1, align 1
    bool m_bMinimumSpeed; // offset 0x1A9D, size 0x1, align 1
    char _pad_1A9E[0x2]; // offset 0x1A9E
    GameTime_t m_SpeedToggleTime; // offset 0x1AA0, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1AA4, size 0x4, align 255
};
