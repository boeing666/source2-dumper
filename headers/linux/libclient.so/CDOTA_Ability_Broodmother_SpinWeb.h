#pragma once

class CDOTA_Ability_Broodmother_SpinWeb : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hWebs; // offset 0x828, size 0x18, align 8
    CUtlVector< CUtlVector< CHandle< C_BaseEntity > > > m_hWebClusters; // offset 0x840, size 0x18, align 8
};
