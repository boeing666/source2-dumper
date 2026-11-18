#pragma once

class CDOTA_Modifier_Legion_Commander_Duel : public CDOTA_Buff /*0x0*/  // sizeof 0x1B70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 reward_damage; // offset 0x1AF8, size 0x4, align 4
    int32 assist_reward_damage; // offset 0x1AFC, size 0x4, align 4
    int32 damage_reduction_pct; // offset 0x1B00, size 0x4, align 4
    int32 debuff_immunity; // offset 0x1B04, size 0x4, align 4
    int32 team_duel; // offset 0x1B08, size 0x4, align 4
    int32 trigger_pta_on_victory; // offset 0x1B0C, size 0x4, align 4
    float32 duel_refresh_on_victory; // offset 0x1B10, size 0x4, align 4
    bool m_bAttacked; // offset 0x1B14, size 0x1, align 1
    bool m_bHadAVictor; // offset 0x1B15, size 0x1, align 1
    char _pad_1B16[0x2]; // offset 0x1B16
    GameTime_t m_flTimeDuelStart; // offset 0x1B18, size 0x4, align 255
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1B1C, size 0x4, align 4
    float32 m_flNextTime; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x1B28, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hAllyAssisters; // offset 0x1B40, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hEnemyAssisters; // offset 0x1B58, size 0x18, align 8
};
