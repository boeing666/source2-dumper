#pragma once

class CCitadel_Ability_Baba_BubblingBrew_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // offset 0x10A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x10B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StringParticle; // offset 0x1190, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BoltParticle; // offset 0x1270, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CasterBuffParticle; // offset 0x1350, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nStringParticle; // offset 0x1430, size 0xE0, align 8
    float32 m_flPulseFrequency; // offset 0x1510, size 0x4, align 4
    float32 m_flPulseWidth; // offset 0x1514, size 0x4, align 4
    CSoundEventName m_strExplodeSound; // offset 0x1518, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFirstExplosionSound; // offset 0x1528, size 0x10, align 8
    CSoundEventName m_strPullSound; // offset 0x1538, size 0x10, align 8
    CSoundEventName m_strVictimPulledSound; // offset 0x1548, size 0x10, align 8
    CSoundEventName m_strBeamPointClosestLoopSound; // offset 0x1558, size 0x10, align 8
    CPiecewiseCurve m_ProjectileTurnAngleSpeedCurve; // offset 0x1568, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flAllowedSlideAngleCos; // offset 0x15A8, size 0x4, align 4
    float32 m_flStackExpiryWarningDuration; // offset 0x15AC, size 0x4, align 4 | MPropertyStartGroup
};
