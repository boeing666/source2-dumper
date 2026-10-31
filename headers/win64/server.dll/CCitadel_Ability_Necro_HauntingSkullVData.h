#pragma once

class CCitadel_Ability_Necro_HauntingSkullVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A08, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JarExplodeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullFriendlyFoundParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullTargetFoundParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullTargetDashParticle; // offset 0x1320, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullHitParticle; // offset 0x1400, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullExplodeParticle; // offset 0x14E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ResourceGainedParticle; // offset 0x15C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeroResourceGainedParticle; // offset 0x16A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SkullModel; // offset 0x1780, size 0xE0, align 8
    float32 m_flSkullScale; // offset 0x1860, size 0x4, align 4
    char _pad_1864[0x4]; // offset 0x1864
    CSoundEventName m_ResourceGainedSound; // offset 0x1868, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HeroResourceGainedSound; // offset 0x1878, size 0x10, align 8
    CSoundEventName m_JarExplodeSound; // offset 0x1888, size 0x10, align 8
    CSoundEventName m_SkullHitSound; // offset 0x1898, size 0x10, align 8
    CSoundEventName m_SkullKilledSound; // offset 0x18A8, size 0x10, align 8
    CSoundEventName m_SkullAttackSound; // offset 0x18B8, size 0x10, align 8
    CSoundEventName m_SkullLoopStartSound; // offset 0x18C8, size 0x10, align 8
    CSoundEventName m_SkullLoopEndSound; // offset 0x18D8, size 0x10, align 8
    CSoundEventName m_SkullLoopSound; // offset 0x18E8, size 0x10, align 8
    CSoundEventName m_SkullLastHitSound; // offset 0x18F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x1908, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonModifier; // offset 0x1918, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SummonBuffModifier; // offset 0x1928, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StackingDebuffModifier; // offset 0x1938, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1948, size 0x10, align 8
    float32 m_flSkullRadius; // offset 0x1958, size 0x4, align 4 | MPropertyStartGroup
    bool m_bAllowStackingDamageFromGun; // offset 0x195C, size 0x1, align 1
    char _pad_195D[0x3]; // offset 0x195D
    float32 m_flInitialVelocityVariance; // offset 0x1960, size 0x4, align 4
    float32 m_flDrag; // offset 0x1964, size 0x4, align 4
    float32 m_flCurlNoiseStrength; // offset 0x1968, size 0x4, align 4
    float32 m_flCurlNoiseStrengthDuringTarget; // offset 0x196C, size 0x4, align 4
    float32 m_flCurlNoiseStrengthDuringFriendly; // offset 0x1970, size 0x4, align 4
    float32 m_flCurlNoiseMinFrequency; // offset 0x1974, size 0x4, align 4
    float32 m_flCurlNoiseMaxFrequency; // offset 0x1978, size 0x4, align 4
    float32 m_flBobbingFrequency; // offset 0x197C, size 0x4, align 4
    float32 m_flBobbingStrength; // offset 0x1980, size 0x4, align 4
    float32 m_flFloorSpringLength; // offset 0x1984, size 0x4, align 4
    float32 m_flFloorSpringStrength; // offset 0x1988, size 0x4, align 4
    char _pad_198C[0x4]; // offset 0x198C
    CPiecewiseCurve m_flTargetForwardSpeed; // offset 0x1990, size 0x40, align 8
    float32 m_flTargetHitRecoilRatio; // offset 0x19D0, size 0x4, align 4
    float32 m_flTargetHitRecoilRandomness; // offset 0x19D4, size 0x4, align 4
    float32 m_flTargetHitUpVelocity; // offset 0x19D8, size 0x4, align 4
    float32 m_flFriendlyChaseAcceleration; // offset 0x19DC, size 0x4, align 4
    float32 m_flEnemyChaseAcceleration; // offset 0x19E0, size 0x4, align 4
    float32 m_flFriendlyChaseMaxSpeed; // offset 0x19E4, size 0x4, align 4
    float32 m_flEnemyChaseMaxSpeed; // offset 0x19E8, size 0x4, align 4
    float32 m_flFriendlyChaseMinDistance; // offset 0x19EC, size 0x4, align 4
    float32 m_flFriendlyChaseMaxDistance; // offset 0x19F0, size 0x4, align 4
    float32 m_flFriendlyChaseRandomPositionDistance; // offset 0x19F4, size 0x4, align 4
    float32 m_flFriendlyChaseBufferDelay; // offset 0x19F8, size 0x4, align 4
    float32 m_flPriorityTargetLingerDuration; // offset 0x19FC, size 0x4, align 4
    float32 m_flSkullMeleeRange; // offset 0x1A00, size 0x4, align 4
    char _pad_1A04[0x4]; // offset 0x1A04
};
