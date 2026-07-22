#pragma once

class CDOTA_Ability_Muerta_DeadShot : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 radius; // offset 0x85C, size 0x4, align 4
    float32 speed; // offset 0x860, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x864, size 0xC, align 4
    VectorWS m_vEndpoint; // offset 0x870, size 0xC, align 4
    CHandle< CBaseEntity > m_hTreeTarget; // offset 0x87C, size 0x4, align 4
    Vector m_vRicochetDir; // offset 0x880, size 0xC, align 4
    char _pad_088C[0x14]; // offset 0x88C
    CUtlVector< CHandle< CBaseEntity > > m_vEnemyHeroVisibilityOnCast; // offset 0x8A0, size 0x18, align 8
};
