#pragma once

class CCitadel_Ability_VampireBat_BatCloudVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1688, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13F8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatHitParticle; // offset 0x14E8, size 0xE0, align 8
    CSoundEventName m_strFireBatSound; // offset 0x15C8, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceBatCloud; // offset 0x15D8, size 0xA0, align 8 | MPropertyStartGroup
    float32 m_flCameraForwardForce; // offset 0x1678, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flInputForce; // offset 0x167C, size 0x4, align 4
    float32 m_flDampingConstant; // offset 0x1680, size 0x4, align 4
    char _pad_1684[0x4]; // offset 0x1684
};
