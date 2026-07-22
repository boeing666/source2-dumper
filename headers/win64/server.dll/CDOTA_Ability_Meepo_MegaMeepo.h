#pragma once

class CDOTA_Ability_Meepo_MegaMeepo : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > hPreviousMeepo; // offset 0x580, size 0x4, align 4
    CHandle< CBaseEntity > hMegameepoFrame; // offset 0x584, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > hListOfMeepos; // offset 0x588, size 0x18, align 8
    bool m_bHasSwappedAbilities; // offset 0x5A0, size 0x1, align 1
    char _pad_05A1[0x7]; // offset 0x5A1
};
