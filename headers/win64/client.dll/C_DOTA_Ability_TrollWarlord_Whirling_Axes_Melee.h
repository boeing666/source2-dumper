#pragma once

class C_DOTA_Ability_TrollWarlord_Whirling_Axes_Melee : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hAxes; // offset 0x6A8, size 0x18, align 8
    int32 m_nAxeIdx; // offset 0x6C0, size 0x4, align 4
    char _pad_06C4[0x4]; // offset 0x6C4
};
