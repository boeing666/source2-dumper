#pragma once

class CAbilityPsychicLiftVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1348, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionalBeamParticle; // offset 0x1240, size 0xE0, align 8
    CSoundEventName m_TargetCastSound; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HitConfirmSound; // offset 0x1330, size 0x10, align 8
    float32 m_flTargetingDuration; // offset 0x1340, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1344[0x4]; // offset 0x1344
};
