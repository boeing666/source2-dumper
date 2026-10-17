#pragma once

class CDOTA_Modifier_Meepo_Divided_We_Stand : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 max_level; // offset 0x1AA8, size 0x4, align 4
    int32 dps_penalty_pct; // offset 0x1AAC, size 0x4, align 4
    int32 attribute_penalty_pct; // offset 0x1AB0, size 0x4, align 4
    int32 m_nPenaltyAS; // offset 0x1AB4, size 0x4, align 4
    int32 m_nPenaltyDamage; // offset 0x1AB8, size 0x4, align 4
    int32 m_nPenaltyHealth; // offset 0x1ABC, size 0x4, align 4
    int32 m_nPenaltyMana; // offset 0x1AC0, size 0x4, align 4
    float32 m_flPenaltyHPRegen; // offset 0x1AC4, size 0x4, align 4
    float32 m_flPenaltyHPRegenPct; // offset 0x1AC8, size 0x4, align 4
    float32 m_flPenaltyMPRegen; // offset 0x1ACC, size 0x4, align 4
    float32 m_flPenaltyStrength; // offset 0x1AD0, size 0x4, align 4
    float32 m_flPenaltyAgility; // offset 0x1AD4, size 0x4, align 4
    float32 m_flPenaltyIntelligence; // offset 0x1AD8, size 0x4, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
