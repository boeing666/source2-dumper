#pragma once

class CDOTA_Modifier_Meepo_Divided_We_Stand : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 max_level; // offset 0x1A58, size 0x4, align 4
    int32 dps_penalty_pct; // offset 0x1A5C, size 0x4, align 4
    int32 attribute_penalty_pct; // offset 0x1A60, size 0x4, align 4
    int32 m_nPenaltyAS; // offset 0x1A64, size 0x4, align 4
    int32 m_nPenaltyDamage; // offset 0x1A68, size 0x4, align 4
    int32 m_nPenaltyHealth; // offset 0x1A6C, size 0x4, align 4
    int32 m_nPenaltyMana; // offset 0x1A70, size 0x4, align 4
    float32 m_flPenaltyHPRegen; // offset 0x1A74, size 0x4, align 4
    float32 m_flPenaltyHPRegenPct; // offset 0x1A78, size 0x4, align 4
    float32 m_flPenaltyMPRegen; // offset 0x1A7C, size 0x4, align 4
    float32 m_flPenaltyStrength; // offset 0x1A80, size 0x4, align 4
    float32 m_flPenaltyAgility; // offset 0x1A84, size 0x4, align 4
    float32 m_flPenaltyIntelligence; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
