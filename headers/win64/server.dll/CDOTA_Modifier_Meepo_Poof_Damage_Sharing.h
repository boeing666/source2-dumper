#pragma once

class CDOTA_Modifier_Meepo_Poof_Damage_Sharing : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage_share_percentage; // offset 0x1A78, size 0x4, align 4
    int32 damage_share_radius; // offset 0x1A7C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_BondedEntities; // offset 0x1A80, size 0x18, align 8
};
