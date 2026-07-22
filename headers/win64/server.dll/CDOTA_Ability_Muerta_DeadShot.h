#pragma once

class CDOTA_Ability_Muerta_DeadShot : public CDOTABaseAbility /*0x0*/  // sizeof 0x5E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 radius; // offset 0x580, size 0x4, align 4
    float32 speed; // offset 0x584, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x588, size 0xC, align 4
    VectorWS m_vEndpoint; // offset 0x594, size 0xC, align 4
    CHandle< CBaseEntity > m_hTreeTarget; // offset 0x5A0, size 0x4, align 4
    Vector m_vRicochetDir; // offset 0x5A4, size 0xC, align 4
    char _pad_05B0[0x18]; // offset 0x5B0
    CUtlVector< CHandle< CBaseEntity > > m_vEnemyHeroVisibilityOnCast; // offset 0x5C8, size 0x18, align 8
};
