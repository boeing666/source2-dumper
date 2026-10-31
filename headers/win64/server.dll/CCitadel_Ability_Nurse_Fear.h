#pragma once

class CCitadel_Ability_Nurse_Fear : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2738]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecBuildupTargets; // offset 0x2738, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecFearedTargets; // offset 0x2750, size 0x18, align 8
    GameTime_t m_flNextFakeBulletTime; // offset 0x2768, size 0x4, align 255
    GameTime_t m_flNextTickTime; // offset 0x276C, size 0x4, align 255
    GameTime_t m_flNextBuildupTickTime; // offset 0x2770, size 0x4, align 255
    ParticleIndex_t m_nCastDelayParticleIdx; // offset 0x2774, size 0x4, align 255
    ParticleIndex_t m_nChannelParticleIdx; // offset 0x2778, size 0x4, align 255
    QAngle m_playerAngles; // offset 0x277C, size 0xC, align 4
    int32 m_nLeechStacksAtCast; // offset 0x2788, size 0x4, align 4
    Vector m_vecRecoilDirection; // offset 0x278C, size 0xC, align 4
};
