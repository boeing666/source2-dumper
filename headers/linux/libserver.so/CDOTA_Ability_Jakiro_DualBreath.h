#pragma once

class CDOTA_Ability_Jakiro_DualBreath : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitHeroes; // offset 0x860, size 0x18, align 8
    bool m_bGrantedGem; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x17]; // offset 0x879
};
