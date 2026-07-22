#pragma once

class CCitadel_Ability_Necro_HauntingSkullVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x20B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JarExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullFriendlyFoundParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullTargetDashParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullHitParticle; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullExplodeParticle; // offset 0x1B98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ResourceGainedParticle; // offset 0x1C78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeroResourceGainedParticle; // offset 0x1D58, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SkullModel; // offset 0x1E38, size 0xE0, align 8
    float32 m_flSkullScale; // offset 0x1F18, size 0x4, align 4
    char _pad_1F1C[0x4]; // offset 0x1F1C
    CSoundEventName m_ResourceGainedSound; // offset 0x1F20, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HeroResourceGainedSound; // offset 0x1F30, size 0x10, align 8
    CSoundEventName m_JarExplodeSound; // offset 0x1F40, size 0x10, align 8
    CSoundEventName m_SkullHitSound; // offset 0x1F50, size 0x10, align 8
    CSoundEventName m_SkullKilledSound; // offset 0x1F60, size 0x10, align 8
    CSoundEventName m_SkullAttackSound; // offset 0x1F70, size 0x10, align 8
    CSoundEventName m_SkullLoopStartSound; // offset 0x1F80, size 0x10, align 8
    CSoundEventName m_SkullLoopEndSound; // offset 0x1F90, size 0x10, align 8
    CSoundEventName m_SkullLoopSound; // offset 0x1FA0, size 0x10, align 8
    CSoundEventName m_SkullLastHitSound; // offset 0x1FB0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x1FC0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonModifier; // offset 0x1FD0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SummonBuffModifier; // offset 0x1FE0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StackingDebuffModifier; // offset 0x1FF0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x2000, size 0x10, align 8
    float32 m_flSkullRadius; // offset 0x2010, size 0x4, align 4 | MPropertyStartGroup
    bool m_bAllowStackingDamageFromGun; // offset 0x2014, size 0x1, align 1
    char _pad_2015[0x3]; // offset 0x2015
    float32 m_flInitialVelocityVariance; // offset 0x2018, size 0x4, align 4
    float32 m_flDrag; // offset 0x201C, size 0x4, align 4
    float32 m_flCurlNoiseStrength; // offset 0x2020, size 0x4, align 4
    float32 m_flCurlNoiseStrengthDuringTarget; // offset 0x2024, size 0x4, align 4
    float32 m_flCurlNoiseStrengthDuringFriendly; // offset 0x2028, size 0x4, align 4
    float32 m_flCurlNoiseMinFrequency; // offset 0x202C, size 0x4, align 4
    float32 m_flCurlNoiseMaxFrequency; // offset 0x2030, size 0x4, align 4
    float32 m_flBobbingFrequency; // offset 0x2034, size 0x4, align 4
    float32 m_flBobbingStrength; // offset 0x2038, size 0x4, align 4
    float32 m_flFloorSpringLength; // offset 0x203C, size 0x4, align 4
    float32 m_flFloorSpringStrength; // offset 0x2040, size 0x4, align 4
    char _pad_2044[0x4]; // offset 0x2044
    CPiecewiseCurve m_flTargetForwardSpeed; // offset 0x2048, size 0x40, align 8
    float32 m_flTargetHitRecoilRatio; // offset 0x2088, size 0x4, align 4
    float32 m_flTargetHitRecoilRandomness; // offset 0x208C, size 0x4, align 4
    float32 m_flTargetHitUpVelocity; // offset 0x2090, size 0x4, align 4
    float32 m_flFriendlyChaseAcceleration; // offset 0x2094, size 0x4, align 4
    float32 m_flFriendlyChaseMaxSpeed; // offset 0x2098, size 0x4, align 4
    float32 m_flFriendlyChaseMinDistance; // offset 0x209C, size 0x4, align 4
    float32 m_flFriendlyChaseMaxDistance; // offset 0x20A0, size 0x4, align 4
    float32 m_flFriendlyChaseRandomPositionDistance; // offset 0x20A4, size 0x4, align 4
    float32 m_flFriendlyChaseBufferDelay; // offset 0x20A8, size 0x4, align 4
    float32 m_flPriorityTargetLingerDuration; // offset 0x20AC, size 0x4, align 4
    float32 m_flSkullMeleeRange; // offset 0x20B0, size 0x4, align 4
    char _pad_20B4[0x4]; // offset 0x20B4
};
