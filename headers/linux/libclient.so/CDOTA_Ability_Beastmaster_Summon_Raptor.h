#pragma once

class CDOTA_Ability_Beastmaster_Summon_Raptor : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_HawkList; // offset 0x828, size 0x18, align 8
    float32 m_flRotation; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
