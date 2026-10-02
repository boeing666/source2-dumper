#pragma once

class CCitadel_Ability_Tier3Boss_AoEWaveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberInitialExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberShrineChargeParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphInitialExplodeParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphShrineChargeParticle; // offset 0x1688, size 0xE0, align 8
    CSoundEventName m_AOEAmberImpactSound; // offset 0x1768, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AOESapphImpactSound; // offset 0x1778, size 0x10, align 8
    CSoundEventName m_AOEAmberAnnounceSound; // offset 0x1788, size 0x10, align 8
    CSoundEventName m_AOESapphAnnounceSound; // offset 0x1798, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AoEModifier; // offset 0x17A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PreviewModifier; // offset 0x17B8, size 0x10, align 8
    float32 m_flCastCompleteToAttackTime; // offset 0x17C8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShakeRadius; // offset 0x17CC, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShakeAmplitue; // offset 0x17D0, size 0x4, align 4
    float32 m_flShakeFreqency; // offset 0x17D4, size 0x4, align 4
    float32 m_flShakeDuration; // offset 0x17D8, size 0x4, align 4
    char _pad_17DC[0x4]; // offset 0x17DC
};
