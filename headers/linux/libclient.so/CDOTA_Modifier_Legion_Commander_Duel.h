#pragma once

class CDOTA_Modifier_Legion_Commander_Duel : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 reward_damage; // offset 0x1AA8, size 0x4, align 4
    int32 assist_reward_damage; // offset 0x1AAC, size 0x4, align 4
    int32 damage_reduction_pct; // offset 0x1AB0, size 0x4, align 4
    int32 debuff_immunity; // offset 0x1AB4, size 0x4, align 4
    int32 team_duel; // offset 0x1AB8, size 0x4, align 4
    int32 trigger_pta_on_victory; // offset 0x1ABC, size 0x4, align 4
    float32 duel_refresh_on_victory; // offset 0x1AC0, size 0x4, align 4
    bool m_bAttacked; // offset 0x1AC4, size 0x1, align 1
    bool m_bHadAVictor; // offset 0x1AC5, size 0x1, align 1
    char _pad_1AC6[0x2]; // offset 0x1AC6
    GameTime_t m_flTimeDuelStart; // offset 0x1AC8, size 0x4, align 255
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1ACC, size 0x4, align 4
    float32 m_flNextTime; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x1AD8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hAllyAssisters; // offset 0x1AF0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hEnemyAssisters; // offset 0x1B08, size 0x18, align 8
};
