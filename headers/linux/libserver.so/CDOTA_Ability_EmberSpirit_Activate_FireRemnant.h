#pragma once

class CDOTA_Ability_EmberSpirit_Activate_FireRemnant : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x8B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    int32 m_nProjectileID; // offset 0x86C, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x870, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x87C, size 0xC, align 4
    QAngle m_ProjectileAngles; // offset 0x888, size 0xC, align 4
    CHandle< CBaseEntity > m_hRemnantToKill; // offset 0x894, size 0x4, align 4
    bool m_bProjectileStarted; // offset 0x898, size 0x1, align 1
    char _pad_0899[0x7]; // offset 0x899
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x8A0, size 0x18, align 8
};
