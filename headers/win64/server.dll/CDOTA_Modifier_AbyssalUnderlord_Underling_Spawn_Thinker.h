#pragma once

class CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 underling_search_radius; // offset 0x1AA8, size 0x4, align 4
    int32 warrior_health; // offset 0x1AAC, size 0x4, align 4
    int32 warrior_damage; // offset 0x1AB0, size 0x4, align 4
    int32 archer_health; // offset 0x1AB4, size 0x4, align 4
    int32 archer_damage; // offset 0x1AB8, size 0x4, align 4
    int32 hull_radius; // offset 0x1ABC, size 0x4, align 4
    int32 gold_bounty; // offset 0x1AC0, size 0x4, align 4
    int32 xp_bounty; // offset 0x1AC4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecAttackedEnemies; // offset 0x1AC8, size 0x18, align 8
    bool m_bSpawnsStarted; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x3]; // offset 0x1AE1
    int32 nSpawnsCompleted; // offset 0x1AE4, size 0x4, align 4
};
