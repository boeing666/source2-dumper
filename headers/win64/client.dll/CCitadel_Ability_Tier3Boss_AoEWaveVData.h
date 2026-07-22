#pragma once

class CCitadel_Ability_Tier3Boss_AoEWaveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberInitialExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberShrineChargeParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphInitialExplodeParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphShrineChargeParticle; // offset 0x1AB8, size 0xE0, align 8
    CSoundEventName m_AOEAmberImpactSound; // offset 0x1B98, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AOESapphImpactSound; // offset 0x1BA8, size 0x10, align 8
    CSoundEventName m_AOEAmberAnnounceSound; // offset 0x1BB8, size 0x10, align 8
    CSoundEventName m_AOESapphAnnounceSound; // offset 0x1BC8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AoEModifier; // offset 0x1BD8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PreviewModifier; // offset 0x1BE8, size 0x10, align 8
    float32 m_flCastCompleteToAttackTime; // offset 0x1BF8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShakeRadius; // offset 0x1BFC, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShakeAmplitue; // offset 0x1C00, size 0x4, align 4
    float32 m_flShakeFreqency; // offset 0x1C04, size 0x4, align 4
    float32 m_flShakeDuration; // offset 0x1C08, size 0x4, align 4
    char _pad_1C0C[0x4]; // offset 0x1C0C
};
