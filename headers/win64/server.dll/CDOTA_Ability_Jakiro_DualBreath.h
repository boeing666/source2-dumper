#pragma once

class CDOTA_Ability_Jakiro_DualBreath : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitHeroes; // offset 0x580, size 0x18, align 8
    bool m_bGrantedGem; // offset 0x598, size 0x1, align 1
    char _pad_0599[0x17]; // offset 0x599
};
