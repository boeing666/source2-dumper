#pragma once

class CDOTA_Modifier_Legion_Commander_Duel : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 reward_damage; // offset 0x1A58, size 0x4, align 4
    int32 assist_reward_damage; // offset 0x1A5C, size 0x4, align 4
    int32 damage_reduction_pct; // offset 0x1A60, size 0x4, align 4
    int32 debuff_immunity; // offset 0x1A64, size 0x4, align 4
    int32 team_duel; // offset 0x1A68, size 0x4, align 4
    int32 trigger_pta_on_victory; // offset 0x1A6C, size 0x4, align 4
    int32 duel_refresh_on_victory; // offset 0x1A70, size 0x4, align 4
    bool m_bAttacked; // offset 0x1A74, size 0x1, align 1
    bool m_bHadAVictor; // offset 0x1A75, size 0x1, align 1
    char _pad_1A76[0x2]; // offset 0x1A76
    GameTime_t m_flTimeDuelStart; // offset 0x1A78, size 0x4, align 255
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1A7C, size 0x4, align 4
    float32 m_flNextTime; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x1A88, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hAllyAssisters; // offset 0x1AA0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hEnemyAssisters; // offset 0x1AB8, size 0x18, align 8
};
