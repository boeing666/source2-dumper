#pragma once

class CCitadel_Ability_Necro_CoffinVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A90, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1828, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // offset 0x1838, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1918, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x19F8, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceInSatchel; // offset 0x1A08, size 0x88, align 8 | MPropertyStartGroup
};
