#pragma once

class CDOTA_Ability_AghsFort_Shadow_Demon_Shadow_Poison : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hPoisonedUnits; // offset 0x580, size 0x18, align 8
    int32 radius; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
    CUtlVector< CHandle< CBaseEntity > > m_hHitUnits; // offset 0x5A0, size 0x18, align 8
    char _pad_05B8[0x18]; // offset 0x5B8
};
