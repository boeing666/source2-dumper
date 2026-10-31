#pragma once

class CCitadel_Ability_Nurse_Fear : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x29D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2970]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecBuildupTargets; // offset 0x2970, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecFearedTargets; // offset 0x2988, size 0x18, align 8
    GameTime_t m_flNextFakeBulletTime; // offset 0x29A0, size 0x4, align 255
    GameTime_t m_flNextTickTime; // offset 0x29A4, size 0x4, align 255
    GameTime_t m_flNextBuildupTickTime; // offset 0x29A8, size 0x4, align 255
    ParticleIndex_t m_nCastDelayParticleIdx; // offset 0x29AC, size 0x4, align 255
    ParticleIndex_t m_nChannelParticleIdx; // offset 0x29B0, size 0x4, align 255
    QAngle m_playerAngles; // offset 0x29B4, size 0xC, align 4
    int32 m_nLeechStacksAtCast; // offset 0x29C0, size 0x4, align 4
    Vector m_vecRecoilDirection; // offset 0x29C4, size 0xC, align 4
};
