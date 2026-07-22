#pragma once

class CDOTA_Ability_Brewmaster_HurlBoulder : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_iBounces; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x4]; // offset 0x584
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x588, size 0x18, align 8
};
