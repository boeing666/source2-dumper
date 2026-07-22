#pragma once

class CCitadel_Ability_Familiar_CloneSingleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1930, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ClonedParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CUtlOrderedMap< CUtlString, EAbilitySlots_t > m_mapClonedAbilities; // offset 0x1908, size 0x28, align 8 | MPropertyStartGroup
};
