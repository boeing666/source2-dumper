#pragma once

class CDOTA_Modifier_Legion_Commander_Duel : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 reward_damage; // offset 0x1A78, size 0x4, align 4
    int32 assist_reward_damage; // offset 0x1A7C, size 0x4, align 4
    int32 damage_reduction_pct; // offset 0x1A80, size 0x4, align 4
    int32 debuff_immunity; // offset 0x1A84, size 0x4, align 4
    int32 team_duel; // offset 0x1A88, size 0x4, align 4
    int32 trigger_pta_on_victory; // offset 0x1A8C, size 0x4, align 4
    float32 duel_refresh_on_victory; // offset 0x1A90, size 0x4, align 4
    bool m_bAttacked; // offset 0x1A94, size 0x1, align 1
    bool m_bHadAVictor; // offset 0x1A95, size 0x1, align 1
    char _pad_1A96[0x2]; // offset 0x1A96
    GameTime_t m_flTimeDuelStart; // offset 0x1A98, size 0x4, align 255
    CHandle< CBaseEntity > m_hPartner; // offset 0x1A9C, size 0x4, align 4
    float32 m_flNextTime; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x1AA8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hAllyAssisters; // offset 0x1AC0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hEnemyAssisters; // offset 0x1AD8, size 0x18, align 8
};
