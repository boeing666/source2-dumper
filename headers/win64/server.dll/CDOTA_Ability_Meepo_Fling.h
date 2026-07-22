#pragma once

class CDOTA_Ability_Meepo_Fling : public CDOTABaseAbility /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hHeldEntity; // offset 0x580, size 0x4, align 4
    CHandle< CBaseEntity > m_hTargetThinker; // offset 0x584, size 0x4, align 4
};
