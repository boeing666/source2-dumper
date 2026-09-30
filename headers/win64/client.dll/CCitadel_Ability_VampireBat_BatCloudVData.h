#pragma once

class CCitadel_Ability_VampireBat_BatCloudVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1628, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatHitParticle; // offset 0x14A0, size 0xE0, align 8
    CSoundEventName m_strFireBatSound; // offset 0x1580, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceBatCloud; // offset 0x1590, size 0x88, align 8 | MPropertyStartGroup
    float32 m_flCameraForwardForce; // offset 0x1618, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flInputForce; // offset 0x161C, size 0x4, align 4
    float32 m_flDampingConstant; // offset 0x1620, size 0x4, align 4
    char _pad_1624[0x4]; // offset 0x1624
};
