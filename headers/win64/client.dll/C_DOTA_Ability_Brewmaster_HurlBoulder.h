#pragma once

class C_DOTA_Ability_Brewmaster_HurlBoulder : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_iBounces; // offset 0x6A8, size 0x4, align 4
    char _pad_06AC[0x4]; // offset 0x6AC
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x6B0, size 0x18, align 8
};
