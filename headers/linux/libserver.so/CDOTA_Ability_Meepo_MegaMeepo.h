#pragma once

class CDOTA_Ability_Meepo_MegaMeepo : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > hPreviousMeepo; // offset 0x85C, size 0x4, align 4
    CHandle< CBaseEntity > hMegameepoFrame; // offset 0x860, size 0x4, align 4
    char _pad_0864[0x4]; // offset 0x864
    CUtlVector< CHandle< CBaseEntity > > hListOfMeepos; // offset 0x868, size 0x18, align 8
    bool m_bHasSwappedAbilities; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x7]; // offset 0x881
};
