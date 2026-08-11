#pragma once

class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nFxIndex; // offset 0x1A78, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A7C, size 0x4, align 4
    CountdownTimer m_Timer; // offset 0x1A80, size 0x18, align 8
    CHandle< CBaseEntity > m_hPreviousTarget; // offset 0x1A98, size 0x4, align 4
    int32 m_nSucceessiveHits; // offset 0x1A9C, size 0x4, align 4
    bool m_bGrantedGem; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x3]; // offset 0x1AA1
    float32 attack_rate; // offset 0x1AA4, size 0x4, align 4
    float32 attack_damage; // offset 0x1AA8, size 0x4, align 4
    int32 agility_pct; // offset 0x1AAC, size 0x4, align 4
    float32 cooldown_reduction_per_creep_kill; // offset 0x1AB0, size 0x4, align 4
    float32 speed_per_attack; // offset 0x1AB4, size 0x4, align 4
    float32 radius; // offset 0x1AB8, size 0x4, align 4
    int32 interval_targets; // offset 0x1ABC, size 0x4, align 4
    bool pocket_riki_enabled; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x3]; // offset 0x1AC1
    float32 base_attack_damage_pct; // offset 0x1AC4, size 0x4, align 4
};
