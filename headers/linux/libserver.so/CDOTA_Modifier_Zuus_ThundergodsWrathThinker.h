#pragma once

class CDOTA_Modifier_Zuus_ThundergodsWrathThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage; // offset 0x1A78, size 0x4, align 4
    float32 damage_pct; // offset 0x1A7C, size 0x4, align 4
    float32 sight_duration; // offset 0x1A80, size 0x4, align 4
    float32 growing_delay; // offset 0x1A84, size 0x4, align 4
    float32 grow_kill_amp; // offset 0x1A88, size 0x4, align 4
    bool m_bZeusHasArcana; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
    CUtlVector< CHandle< CBaseEntity > > m_hTargetEntities; // offset 0x1A90, size 0x18, align 8
    int32 m_nFarKills; // offset 0x1AA8, size 0x4, align 4
    int32 m_nKills; // offset 0x1AAC, size 0x4, align 4
};
