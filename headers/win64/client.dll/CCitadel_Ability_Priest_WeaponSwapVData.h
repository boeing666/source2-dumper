#pragma once

class CCitadel_Ability_Priest_WeaponSwapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1680, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13F8, size 0x10, align 8
    CSubclassName< 4 > m_NewWeaponAbility; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMinTimeBeforeSwappingBack; // offset 0x1418, size 0x4, align 4
    char _pad_141C[0x4]; // offset 0x141C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowEntImpactParticle; // offset 0x1420, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowImpactParticle; // offset 0x1500, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceSwapWeapons; // offset 0x15E0, size 0xA0, align 8 | MPropertyStartGroup
};
