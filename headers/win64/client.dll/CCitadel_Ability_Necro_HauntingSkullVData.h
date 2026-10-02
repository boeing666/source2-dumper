#pragma once

class CCitadel_Ability_Necro_HauntingSkullVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D70, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JarExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullFriendlyFoundParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullTargetFoundParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullTargetDashParticle; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullHitParticle; // offset 0x1768, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullExplodeParticle; // offset 0x1848, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ResourceGainedParticle; // offset 0x1928, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeroResourceGainedParticle; // offset 0x1A08, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SkullModel; // offset 0x1AE8, size 0xE0, align 8
    float32 m_flSkullScale; // offset 0x1BC8, size 0x4, align 4
    char _pad_1BCC[0x4]; // offset 0x1BCC
    CSoundEventName m_ResourceGainedSound; // offset 0x1BD0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HeroResourceGainedSound; // offset 0x1BE0, size 0x10, align 8
    CSoundEventName m_JarExplodeSound; // offset 0x1BF0, size 0x10, align 8
    CSoundEventName m_SkullHitSound; // offset 0x1C00, size 0x10, align 8
    CSoundEventName m_SkullKilledSound; // offset 0x1C10, size 0x10, align 8
    CSoundEventName m_SkullAttackSound; // offset 0x1C20, size 0x10, align 8
    CSoundEventName m_SkullLoopStartSound; // offset 0x1C30, size 0x10, align 8
    CSoundEventName m_SkullLoopEndSound; // offset 0x1C40, size 0x10, align 8
    CSoundEventName m_SkullLoopSound; // offset 0x1C50, size 0x10, align 8
    CSoundEventName m_SkullLastHitSound; // offset 0x1C60, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x1C70, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonModifier; // offset 0x1C80, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SummonBuffModifier; // offset 0x1C90, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StackingDebuffModifier; // offset 0x1CA0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1CB0, size 0x10, align 8
    float32 m_flSkullRadius; // offset 0x1CC0, size 0x4, align 4 | MPropertyStartGroup
    bool m_bAllowStackingDamageFromGun; // offset 0x1CC4, size 0x1, align 1
    char _pad_1CC5[0x3]; // offset 0x1CC5
    float32 m_flInitialVelocityVariance; // offset 0x1CC8, size 0x4, align 4
    float32 m_flDrag; // offset 0x1CCC, size 0x4, align 4
    float32 m_flCurlNoiseStrength; // offset 0x1CD0, size 0x4, align 4
    float32 m_flCurlNoiseStrengthDuringTarget; // offset 0x1CD4, size 0x4, align 4
    float32 m_flCurlNoiseStrengthDuringFriendly; // offset 0x1CD8, size 0x4, align 4
    float32 m_flCurlNoiseMinFrequency; // offset 0x1CDC, size 0x4, align 4
    float32 m_flCurlNoiseMaxFrequency; // offset 0x1CE0, size 0x4, align 4
    float32 m_flBobbingFrequency; // offset 0x1CE4, size 0x4, align 4
    float32 m_flBobbingStrength; // offset 0x1CE8, size 0x4, align 4
    float32 m_flFloorSpringLength; // offset 0x1CEC, size 0x4, align 4
    float32 m_flFloorSpringStrength; // offset 0x1CF0, size 0x4, align 4
    char _pad_1CF4[0x4]; // offset 0x1CF4
    CPiecewiseCurve m_flTargetForwardSpeed; // offset 0x1CF8, size 0x40, align 8
    float32 m_flTargetHitRecoilRatio; // offset 0x1D38, size 0x4, align 4
    float32 m_flTargetHitRecoilRandomness; // offset 0x1D3C, size 0x4, align 4
    float32 m_flTargetHitUpVelocity; // offset 0x1D40, size 0x4, align 4
    float32 m_flFriendlyChaseAcceleration; // offset 0x1D44, size 0x4, align 4
    float32 m_flEnemyChaseAcceleration; // offset 0x1D48, size 0x4, align 4
    float32 m_flFriendlyChaseMaxSpeed; // offset 0x1D4C, size 0x4, align 4
    float32 m_flEnemyChaseMaxSpeed; // offset 0x1D50, size 0x4, align 4
    float32 m_flFriendlyChaseMinDistance; // offset 0x1D54, size 0x4, align 4
    float32 m_flFriendlyChaseMaxDistance; // offset 0x1D58, size 0x4, align 4
    float32 m_flFriendlyChaseRandomPositionDistance; // offset 0x1D5C, size 0x4, align 4
    float32 m_flFriendlyChaseBufferDelay; // offset 0x1D60, size 0x4, align 4
    float32 m_flPriorityTargetLingerDuration; // offset 0x1D64, size 0x4, align 4
    float32 m_flSkullMeleeRange; // offset 0x1D68, size 0x4, align 4
    char _pad_1D6C[0x4]; // offset 0x1D6C
};
