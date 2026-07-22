#pragma once

class C_DOTA_Ability_Kunkka_Tidal_Wave : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x828, size 0x18, align 8
    VectorWS m_vStart; // offset 0x840, size 0xC, align 4
    char _pad_084C[0x14]; // offset 0x84C
};
