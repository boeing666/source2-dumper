#pragma once

class CDOTA_Ability_Tinker_Laser : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x85C, size 0xC, align 4
    bool bBlocked; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x7]; // offset 0x869
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x870, size 0x18, align 8
};
