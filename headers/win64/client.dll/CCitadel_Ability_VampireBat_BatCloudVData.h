#pragma once

class CCitadel_Ability_VampireBat_BatCloudVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1310, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1080, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatHitParticle; // offset 0x1170, size 0xE0, align 8
    CSoundEventName m_strFireBatSound; // offset 0x1250, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceBatCloud; // offset 0x1260, size 0xA0, align 8 | MPropertyStartGroup
    float32 m_flCameraForwardForce; // offset 0x1300, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flInputForce; // offset 0x1304, size 0x4, align 4
    float32 m_flDampingConstant; // offset 0x1308, size 0x4, align 4
    char _pad_130C[0x4]; // offset 0x130C
};
