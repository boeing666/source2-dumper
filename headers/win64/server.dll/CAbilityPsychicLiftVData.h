#pragma once

class CAbilityPsychicLiftVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x14D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionalBeamParticle; // offset 0x15B8, size 0xE0, align 8
    CSoundEventName m_TargetCastSound; // offset 0x1698, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HitConfirmSound; // offset 0x16A8, size 0x10, align 8
    float32 m_flTargetingDuration; // offset 0x16B8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_16BC[0x4]; // offset 0x16BC
};
