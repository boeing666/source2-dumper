#pragma once

class CAbilityPsychicLiftVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1678, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionalBeamParticle; // offset 0x1570, size 0xE0, align 8
    CSoundEventName m_TargetCastSound; // offset 0x1650, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HitConfirmSound; // offset 0x1660, size 0x10, align 8
    float32 m_flTargetingDuration; // offset 0x1670, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1674[0x4]; // offset 0x1674
};
