#pragma once

class CCitadel_Ability_Viper_Ability04VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PetrifyModifier; // offset 0x1480, size 0x10, align 8 | MPropertyStartGroup
};
