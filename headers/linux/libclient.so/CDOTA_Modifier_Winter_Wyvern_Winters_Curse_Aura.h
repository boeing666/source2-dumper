#pragma once

class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    int32 m_nAlliesTaunted; // offset 0x1A5C, size 0x4, align 4
    bool m_bRelicTriggered; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    float32 radius; // offset 0x1A64, size 0x4, align 4
    int32 damage_reduction; // offset 0x1A68, size 0x4, align 4
    GameTime_t m_flLastSeen; // offset 0x1A6C, size 0x4, align 255
    bool transfer_on_death; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
    CUtlVector< CHandle< C_BaseEntity > > m_vhAffectedEnemyHeroes; // offset 0x1A78, size 0x18, align 8
};
