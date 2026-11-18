#pragma once

class CDOTA_Modifier_Meepo_Divided_We_Stand : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 max_level; // offset 0x1AF8, size 0x4, align 4
    int32 dps_penalty_pct; // offset 0x1AFC, size 0x4, align 4
    int32 attribute_penalty_pct; // offset 0x1B00, size 0x4, align 4
    float32 xp_penalty_time; // offset 0x1B04, size 0x4, align 4
    int32 m_nPenaltyAS; // offset 0x1B08, size 0x4, align 4
    int32 m_nPenaltyDamage; // offset 0x1B0C, size 0x4, align 4
    int32 m_nPenaltyHealth; // offset 0x1B10, size 0x4, align 4
    int32 m_nPenaltyMana; // offset 0x1B14, size 0x4, align 4
    float32 m_flPenaltyHPRegen; // offset 0x1B18, size 0x4, align 4
    float32 m_flPenaltyHPRegenPct; // offset 0x1B1C, size 0x4, align 4
    float32 m_flPenaltyMPRegen; // offset 0x1B20, size 0x4, align 4
    float32 m_flPenaltyStrength; // offset 0x1B24, size 0x4, align 4
    float32 m_flPenaltyAgility; // offset 0x1B28, size 0x4, align 4
    float32 m_flPenaltyIntelligence; // offset 0x1B2C, size 0x4, align 4
    GameTime_t m_LastExpTime; // offset 0x1B30, size 0x4, align 255
    char _pad_1B34[0x4]; // offset 0x1B34
};
