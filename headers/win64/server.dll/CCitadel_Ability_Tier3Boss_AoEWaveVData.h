#pragma once

class CCitadel_Ability_Tier3Boss_AoEWaveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1478, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberInitialExplodeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberShrineChargeParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphInitialExplodeParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphShrineChargeParticle; // offset 0x1320, size 0xE0, align 8
    CSoundEventName m_AOEAmberImpactSound; // offset 0x1400, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AOESapphImpactSound; // offset 0x1410, size 0x10, align 8
    CSoundEventName m_AOEAmberAnnounceSound; // offset 0x1420, size 0x10, align 8
    CSoundEventName m_AOESapphAnnounceSound; // offset 0x1430, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AoEModifier; // offset 0x1440, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PreviewModifier; // offset 0x1450, size 0x10, align 8
    float32 m_flCastCompleteToAttackTime; // offset 0x1460, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShakeRadius; // offset 0x1464, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShakeAmplitue; // offset 0x1468, size 0x4, align 4
    float32 m_flShakeFreqency; // offset 0x146C, size 0x4, align 4
    float32 m_flShakeDuration; // offset 0x1470, size 0x4, align 4
    char _pad_1474[0x4]; // offset 0x1474
};
