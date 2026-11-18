#pragma once

class CDOTA_Modifier_Brewmaster_LiquidCourage : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage_threshold; // offset 0x1AF8, size 0x4, align 4
    float32 trigger_duration; // offset 0x1AFC, size 0x4, align 4
    float32 damage_reset_interval; // offset 0x1B00, size 0x4, align 4
    float32 trigger_cooldown; // offset 0x1B04, size 0x4, align 4
    float32 status_resist; // offset 0x1B08, size 0x4, align 4
    int32 min_speed; // offset 0x1B0C, size 0x4, align 4
    int32 max_speed; // offset 0x1B10, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1B14, size 0x4, align 4
    float32 speed_toggle_time; // offset 0x1B18, size 0x4, align 4
    int32 m_nCurrentSpeed; // offset 0x1B1C, size 0x4, align 4
    int32 m_nDamageTaken; // offset 0x1B20, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1B24, size 0x4, align 255
    bool m_bForceActive; // offset 0x1B28, size 0x1, align 1
    bool m_bShardDrink; // offset 0x1B29, size 0x1, align 1
    bool m_bMinimumSpeed; // offset 0x1B2A, size 0x1, align 1
    char _pad_1B2B[0x1]; // offset 0x1B2B
    GameTime_t m_SpeedToggleTime; // offset 0x1B2C, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1B30, size 0x4, align 255
    char _pad_1B34[0x4]; // offset 0x1B34
};
