#pragma once

class CDOTA_Modifier_Brewmaster_LiquidCourage : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 min_health_threshold; // offset 0x1AA8, size 0x4, align 4
    int32 max_health_threshold; // offset 0x1AAC, size 0x4, align 4
    float32 status_resist; // offset 0x1AB0, size 0x4, align 4
    int32 min_speed; // offset 0x1AB4, size 0x4, align 4
    int32 max_speed; // offset 0x1AB8, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1ABC, size 0x4, align 4
    float32 speed_toggle_time; // offset 0x1AC0, size 0x4, align 4
    int32 m_nCurrentSpeed; // offset 0x1AC4, size 0x4, align 4
    int32 m_nMaxHPRegen; // offset 0x1AC8, size 0x4, align 4
    bool m_bForceActive; // offset 0x1ACC, size 0x1, align 1
    bool m_bMinimumSpeed; // offset 0x1ACD, size 0x1, align 1
    char _pad_1ACE[0x2]; // offset 0x1ACE
    GameTime_t m_SpeedToggleTime; // offset 0x1AD0, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1AD4, size 0x4, align 255
};
