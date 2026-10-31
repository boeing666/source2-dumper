#pragma once

class CCitadel_Ability_Priest_WeaponSwapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1318, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1090, size 0x10, align 8
    CSubclassName< 4 > m_NewWeaponAbility; // offset 0x10A0, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMinTimeBeforeSwappingBack; // offset 0x10B0, size 0x4, align 4
    char _pad_10B4[0x4]; // offset 0x10B4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowEntImpactParticle; // offset 0x10B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowImpactParticle; // offset 0x1198, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceSwapWeapons; // offset 0x1278, size 0xA0, align 8 | MPropertyStartGroup
};
