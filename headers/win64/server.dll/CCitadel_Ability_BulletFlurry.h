#pragma once

class CCitadel_Ability_BulletFlurry : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CCitadelAutoScaledTime m_flFlurryEndTime; // offset 0x14A8, size 0x18, align 255
    GameTime_t m_flNextAttackTime; // offset 0x14C0, size 0x4, align 255
    char _pad_14C4[0x4D4]; // offset 0x14C4
    CUtlVector< CHandle< CBaseEntity > > m_vecShootTargets; // offset 0x1998, size 0x18, align 8
    int32 m_nNumPlayersKilled; // offset 0x19B0, size 0x4, align 4
    int32 m_nShootIndex; // offset 0x19B4, size 0x4, align 4
    int32 m_nShootIndexNPC; // offset 0x19B8, size 0x4, align 4
    int32 m_nBurstShots; // offset 0x19BC, size 0x4, align 4
    bool m_bHasCameraOverride; // offset 0x19C0, size 0x1, align 1
    char _pad_19C1[0x3]; // offset 0x19C1
    ParticleIndex_t m_nConeVFX; // offset 0x19C4, size 0x4, align 255
};
