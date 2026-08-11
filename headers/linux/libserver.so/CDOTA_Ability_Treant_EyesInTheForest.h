#pragma once

class CDOTA_Ability_Treant_EyesInTheForest : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > vTrees; // offset 0x860, size 0x18, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_vecEyes; // offset 0x878, size 0x18, align 8
};
