#pragma once

class CCitadel_Ability_BloodBombVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1910, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SpilledBloodModifier; // offset 0x18F8, size 0x10, align 8 | MPropertyStartGroup
    CUtlString m_strBloodSpillStatName; // offset 0x1908, size 0x8, align 8 | MPropertyStartGroup
};
