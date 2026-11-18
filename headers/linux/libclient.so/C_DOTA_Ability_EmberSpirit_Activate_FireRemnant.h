#pragma once

class C_DOTA_Ability_EmberSpirit_Activate_FireRemnant : public C_DOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    int32 m_nProjectileID; // offset 0x828, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x82C, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x838, size 0xC, align 4
    QAngle m_ProjectileAngles; // offset 0x844, size 0xC, align 4
    CHandle< C_BaseEntity > m_hRemnantToKill; // offset 0x850, size 0x4, align 4
    bool m_bProjectileStarted; // offset 0x854, size 0x1, align 1
    char _pad_0855[0x3]; // offset 0x855
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x858, size 0x18, align 8
};
