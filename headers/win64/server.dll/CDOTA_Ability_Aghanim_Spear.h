#pragma once

class CDOTA_Ability_Aghanim_Spear : public CDOTABaseAbility /*0x0*/  // sizeof 0x5E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x580, size 0x18, align 8
    CUtlVector< int32 > m_vecProjectileHandles; // offset 0x598, size 0x18, align 8
    char _pad_05B0[0x14]; // offset 0x5B0
    VectorWS m_vTarget; // offset 0x5C4, size 0xC, align 4
    VectorWS m_vSourcePosition; // offset 0x5D0, size 0xC, align 4
    int32 damage; // offset 0x5DC, size 0x4, align 4
};
