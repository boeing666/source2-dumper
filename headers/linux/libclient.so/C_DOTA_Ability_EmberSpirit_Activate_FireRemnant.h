#pragma once

class C_DOTA_Ability_EmberSpirit_Activate_FireRemnant : public C_DOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_nProjectileID; // offset 0x824, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x828, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x834, size 0xC, align 4
    QAngle m_ProjectileAngles; // offset 0x840, size 0xC, align 4
    CHandle< C_BaseEntity > m_hRemnantToKill; // offset 0x84C, size 0x4, align 4
    bool m_bProjectileStarted; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x7]; // offset 0x851
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x858, size 0x18, align 8
};
