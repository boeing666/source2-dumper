#pragma once

class CCitadel_Ability_Baba_BubblingBrew_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1918, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StringParticle; // offset 0x14F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BoltParticle; // offset 0x15D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CasterBuffParticle; // offset 0x16B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nStringParticle; // offset 0x1798, size 0xE0, align 8
    float32 m_flPulseFrequency; // offset 0x1878, size 0x4, align 4
    float32 m_flPulseWidth; // offset 0x187C, size 0x4, align 4
    CSoundEventName m_strExplodeSound; // offset 0x1880, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFirstExplosionSound; // offset 0x1890, size 0x10, align 8
    CSoundEventName m_strPullSound; // offset 0x18A0, size 0x10, align 8
    CSoundEventName m_strVictimPulledSound; // offset 0x18B0, size 0x10, align 8
    CSoundEventName m_strBeamPointClosestLoopSound; // offset 0x18C0, size 0x10, align 8
    CPiecewiseCurve m_ProjectileTurnAngleSpeedCurve; // offset 0x18D0, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flAllowedSlideAngleCos; // offset 0x1910, size 0x4, align 4
    float32 m_flStackExpiryWarningDuration; // offset 0x1914, size 0x4, align 4 | MPropertyStartGroup
};
