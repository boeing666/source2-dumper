#pragma once

class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    ParticleIndex_t m_nFxIndex; // offset 0x1AA8, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AAC, size 0x4, align 4
    CountdownTimer m_Timer; // offset 0x1AB0, size 0x18, align 8
    CHandle< CBaseEntity > m_hPreviousTarget; // offset 0x1AC8, size 0x4, align 4
    int32 m_nSucceessiveHits; // offset 0x1ACC, size 0x4, align 4
    bool m_bGrantedGem; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    float32 attack_rate; // offset 0x1AD4, size 0x4, align 4
    float32 attack_damage; // offset 0x1AD8, size 0x4, align 4
    int32 agility_pct; // offset 0x1ADC, size 0x4, align 4
    float32 cooldown_reduction_per_creep_kill; // offset 0x1AE0, size 0x4, align 4
    float32 speed_per_attack; // offset 0x1AE4, size 0x4, align 4
    float32 radius; // offset 0x1AE8, size 0x4, align 4
    int32 interval_targets; // offset 0x1AEC, size 0x4, align 4
    bool pocket_riki_enabled; // offset 0x1AF0, size 0x1, align 1
    char _pad_1AF1[0x3]; // offset 0x1AF1
    float32 base_attack_damage_pct; // offset 0x1AF4, size 0x4, align 4
};
