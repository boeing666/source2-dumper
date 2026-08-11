#pragma once

class CDOTA_Ability_Broodmother_SpinWeb : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hWebs; // offset 0x580, size 0x18, align 8
    CUtlVector< CUtlVector< CHandle< CBaseEntity > > > m_hWebClusters; // offset 0x598, size 0x18, align 8
};
