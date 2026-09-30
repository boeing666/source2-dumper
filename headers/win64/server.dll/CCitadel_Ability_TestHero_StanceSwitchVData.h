#pragma once

class CCitadel_Ability_TestHero_StanceSwitchVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StanceSwapStartParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StanceSwapEndParticle; // offset 0x1480, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StanceActiveModifier; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CastModifier; // offset 0x1570, size 0x10, align 8
};
