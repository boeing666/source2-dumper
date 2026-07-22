#pragma once

class CDOTA_Ability_Kunkka_Tidal_Wave : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x860, size 0x18, align 8
    VectorWS m_vStart; // offset 0x878, size 0xC, align 4
    char _pad_0884[0x14]; // offset 0x884
};
