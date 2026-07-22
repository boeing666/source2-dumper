#pragma once

class CDOTA_Ability_EmberSpirit_Activate_FireRemnant : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    int32 m_nProjectileID; // offset 0x590, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x594, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x5A0, size 0xC, align 4
    QAngle m_ProjectileAngles; // offset 0x5AC, size 0xC, align 4
    CHandle< CBaseEntity > m_hRemnantToKill; // offset 0x5B8, size 0x4, align 4
    bool m_bProjectileStarted; // offset 0x5BC, size 0x1, align 1
    char _pad_05BD[0x3]; // offset 0x5BD
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x5C0, size 0x18, align 8
};
