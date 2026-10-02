#pragma once

class CCitadel_Modifier_DazzlingOrbWatcherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_NextTargetModifier; // offset 0x7A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_OrbFriendlyBounceWatcherModifier; // offset 0x7B0, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x7C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFinalExplodeSound; // offset 0x7D0, size 0x10, align 8
    CSoundEventName m_strWorldHitSound; // offset 0x7E0, size 0x10, align 8
    CSoundEventName m_strGraceLoopSound; // offset 0x7F0, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x800, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x810, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x8F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GraceParticle; // offset 0x9D0, size 0xE0, align 8
    CPiecewiseCurve m_BouncePositionCurve; // offset 0xAB0, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flMinProjectileTravelTime; // offset 0xAF0, size 0x4, align 4
    char _pad_0AF4[0x4]; // offset 0xAF4
    CCitadelProjectileTrackingParams m_TrackingParams; // offset 0xAF8, size 0x90, align 8
};
