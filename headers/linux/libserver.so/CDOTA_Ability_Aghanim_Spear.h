#pragma once

class CDOTA_Ability_Aghanim_Spear : public CDOTABaseAbility /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x860, size 0x18, align 8
    CUtlVector< int32 > m_vecProjectileHandles; // offset 0x878, size 0x18, align 8
    char _pad_0890[0x14]; // offset 0x890
    VectorWS m_vTarget; // offset 0x8A4, size 0xC, align 4
    VectorWS m_vSourcePosition; // offset 0x8B0, size 0xC, align 4
    int32 damage; // offset 0x8BC, size 0x4, align 4
};
