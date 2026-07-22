#pragma once

class CDOTA_Ability_AghsFort_Shadow_Demon_Shadow_Poison : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hPoisonedUnits; // offset 0x860, size 0x18, align 8
    int32 radius; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
    CUtlVector< CHandle< CBaseEntity > > m_hHitUnits; // offset 0x880, size 0x18, align 8
    char _pad_0898[0x18]; // offset 0x898
};
