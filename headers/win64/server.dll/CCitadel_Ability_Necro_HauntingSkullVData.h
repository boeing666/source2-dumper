#pragma once

class CCitadel_Ability_Necro_HauntingSkullVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JarExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullFriendlyFoundParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullTargetFoundParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullTargetDashParticle; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullHitParticle; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SkullExplodeParticle; // offset 0x1800, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ResourceGainedParticle; // offset 0x18E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeroResourceGainedParticle; // offset 0x19C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SkullModel; // offset 0x1AA0, size 0xE0, align 8
    float32 m_flSkullScale; // offset 0x1B80, size 0x4, align 4
    char _pad_1B84[0x4]; // offset 0x1B84
    CSoundEventName m_ResourceGainedSound; // offset 0x1B88, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HeroResourceGainedSound; // offset 0x1B98, size 0x10, align 8
    CSoundEventName m_JarExplodeSound; // offset 0x1BA8, size 0x10, align 8
    CSoundEventName m_SkullHitSound; // offset 0x1BB8, size 0x10, align 8
    CSoundEventName m_SkullKilledSound; // offset 0x1BC8, size 0x10, align 8
    CSoundEventName m_SkullAttackSound; // offset 0x1BD8, size 0x10, align 8
    CSoundEventName m_SkullLoopStartSound; // offset 0x1BE8, size 0x10, align 8
    CSoundEventName m_SkullLoopEndSound; // offset 0x1BF8, size 0x10, align 8
    CSoundEventName m_SkullLoopSound; // offset 0x1C08, size 0x10, align 8
    CSoundEventName m_SkullLastHitSound; // offset 0x1C18, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x1C28, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonModifier; // offset 0x1C38, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SummonBuffModifier; // offset 0x1C48, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StackingDebuffModifier; // offset 0x1C58, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1C68, size 0x10, align 8
    float32 m_flSkullRadius; // offset 0x1C78, size 0x4, align 4 | MPropertyStartGroup
    bool m_bAllowStackingDamageFromGun; // offset 0x1C7C, size 0x1, align 1
    char _pad_1C7D[0x3]; // offset 0x1C7D
    float32 m_flInitialVelocityVariance; // offset 0x1C80, size 0x4, align 4
    float32 m_flDrag; // offset 0x1C84, size 0x4, align 4
    float32 m_flCurlNoiseStrength; // offset 0x1C88, size 0x4, align 4
    float32 m_flCurlNoiseStrengthDuringTarget; // offset 0x1C8C, size 0x4, align 4
    float32 m_flCurlNoiseStrengthDuringFriendly; // offset 0x1C90, size 0x4, align 4
    float32 m_flCurlNoiseMinFrequency; // offset 0x1C94, size 0x4, align 4
    float32 m_flCurlNoiseMaxFrequency; // offset 0x1C98, size 0x4, align 4
    float32 m_flBobbingFrequency; // offset 0x1C9C, size 0x4, align 4
    float32 m_flBobbingStrength; // offset 0x1CA0, size 0x4, align 4
    float32 m_flFloorSpringLength; // offset 0x1CA4, size 0x4, align 4
    float32 m_flFloorSpringStrength; // offset 0x1CA8, size 0x4, align 4
    char _pad_1CAC[0x4]; // offset 0x1CAC
    CPiecewiseCurve m_flTargetForwardSpeed; // offset 0x1CB0, size 0x40, align 8
    float32 m_flTargetHitRecoilRatio; // offset 0x1CF0, size 0x4, align 4
    float32 m_flTargetHitRecoilRandomness; // offset 0x1CF4, size 0x4, align 4
    float32 m_flTargetHitUpVelocity; // offset 0x1CF8, size 0x4, align 4
    float32 m_flFriendlyChaseAcceleration; // offset 0x1CFC, size 0x4, align 4
    float32 m_flEnemyChaseAcceleration; // offset 0x1D00, size 0x4, align 4
    float32 m_flFriendlyChaseMaxSpeed; // offset 0x1D04, size 0x4, align 4
    float32 m_flEnemyChaseMaxSpeed; // offset 0x1D08, size 0x4, align 4
    float32 m_flFriendlyChaseMinDistance; // offset 0x1D0C, size 0x4, align 4
    float32 m_flFriendlyChaseMaxDistance; // offset 0x1D10, size 0x4, align 4
    float32 m_flFriendlyChaseRandomPositionDistance; // offset 0x1D14, size 0x4, align 4
    float32 m_flFriendlyChaseBufferDelay; // offset 0x1D18, size 0x4, align 4
    float32 m_flPriorityTargetLingerDuration; // offset 0x1D1C, size 0x4, align 4
    float32 m_flSkullMeleeRange; // offset 0x1D20, size 0x4, align 4
    char _pad_1D24[0x4]; // offset 0x1D24
};
