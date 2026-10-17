#pragma once

class CDOTA_Modifier_Zuus_ThundergodsWrathThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage; // offset 0x1AA8, size 0x4, align 4
    float32 damage_pct; // offset 0x1AAC, size 0x4, align 4
    float32 sight_duration; // offset 0x1AB0, size 0x4, align 4
    float32 growing_delay; // offset 0x1AB4, size 0x4, align 4
    float32 grow_kill_amp; // offset 0x1AB8, size 0x4, align 4
    bool m_bZeusHasArcana; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    CUtlVector< CHandle< CBaseEntity > > m_hTargetEntities; // offset 0x1AC0, size 0x18, align 8
    int32 m_nFarKills; // offset 0x1AD8, size 0x4, align 4
    int32 m_nKills; // offset 0x1ADC, size 0x4, align 4
};
