#pragma once

class CCitadel_Ability_Familiar_CloneVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ClonedParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
};
