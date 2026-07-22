#pragma once

class C_DOTA_Ability_Meepo_MegaMeepo : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > hPreviousMeepo; // offset 0x6A8, size 0x4, align 4
    CHandle< C_BaseEntity > hMegameepoFrame; // offset 0x6AC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > hListOfMeepos; // offset 0x6B0, size 0x18, align 8
    bool m_bHasSwappedAbilities; // offset 0x6C8, size 0x1, align 1
    char _pad_06C9[0x7]; // offset 0x6C9
};
