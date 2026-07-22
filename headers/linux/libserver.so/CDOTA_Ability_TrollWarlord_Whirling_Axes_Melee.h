#pragma once

class CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hAxes; // offset 0x860, size 0x18, align 8
    int32 m_nAxeIdx; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
