#pragma once

class CCitadel_Ability_SmokeBombVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1928, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PhaseOutModifier; // offset 0x1838, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
};
