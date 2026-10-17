#pragma once

class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    int32 m_nAlliesTaunted; // offset 0x1AAC, size 0x4, align 4
    bool m_bRelicTriggered; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 radius; // offset 0x1AB4, size 0x4, align 4
    int32 damage_reduction; // offset 0x1AB8, size 0x4, align 4
    GameTime_t m_flLastSeen; // offset 0x1ABC, size 0x4, align 255
    bool transfer_on_death; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
    CUtlVector< CHandle< CBaseEntity > > m_vhAffectedEnemyHeroes; // offset 0x1AC8, size 0x18, align 8
};
