#pragma once

class CCitadel_Ability_Priest_WeaponSwapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A98, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1828, size 0x10, align 8
    CSubclassName< 4 > m_NewWeaponAbility; // offset 0x1838, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMinTimeBeforeSwappingBack; // offset 0x1848, size 0x4, align 4
    char _pad_184C[0x4]; // offset 0x184C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowEntImpactParticle; // offset 0x1850, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowImpactParticle; // offset 0x1930, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceSwapWeapons; // offset 0x1A10, size 0x88, align 8 | MPropertyStartGroup
};
