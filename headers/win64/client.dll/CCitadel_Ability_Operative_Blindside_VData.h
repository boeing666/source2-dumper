#pragma once

class CCitadel_Ability_Operative_Blindside_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplosionSound; // offset 0x1490, size 0x10, align 8 | MPropertyStartGroup
};
