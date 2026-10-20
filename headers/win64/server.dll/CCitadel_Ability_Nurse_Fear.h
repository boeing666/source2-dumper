#pragma once

class CCitadel_Ability_Nurse_Fear : public CCitadelBaseAbility /*0x0*/  // sizeof 0x26E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2688]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecBuildupTargets; // offset 0x2688, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecFearedTargets; // offset 0x26A0, size 0x18, align 8
    GameTime_t m_flNextFakeBulletTime; // offset 0x26B8, size 0x4, align 255
    GameTime_t m_flNextTickTime; // offset 0x26BC, size 0x4, align 255
    GameTime_t m_flNextBuildupTickTime; // offset 0x26C0, size 0x4, align 255
    ParticleIndex_t m_nCastDelayParticleIdx; // offset 0x26C4, size 0x4, align 255
    ParticleIndex_t m_nChannelParticleIdx; // offset 0x26C8, size 0x4, align 255
    QAngle m_playerAngles; // offset 0x26CC, size 0xC, align 4
    int32 m_nLeechStacksAtCast; // offset 0x26D8, size 0x4, align 4
    Vector m_vecRecoilDirection; // offset 0x26DC, size 0xC, align 4
};
