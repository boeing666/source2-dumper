#pragma once

class C_DOTA_Ability_Meepo_MegaMeepo : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > hPreviousMeepo; // offset 0x824, size 0x4, align 4
    CHandle< C_BaseEntity > hMegameepoFrame; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
    CUtlVector< CHandle< C_BaseEntity > > hListOfMeepos; // offset 0x830, size 0x18, align 8
    bool m_bHasSwappedAbilities; // offset 0x848, size 0x1, align 1
    char _pad_0849[0x7]; // offset 0x849
};
