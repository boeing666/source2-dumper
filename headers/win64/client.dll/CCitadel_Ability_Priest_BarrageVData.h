#pragma once

class CCitadel_Ability_Priest_BarrageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1828, size 0x10, align 8
    CSoundEventName m_ShootSound; // offset 0x1838, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x1848, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1858, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x1938, size 0xE0, align 8
};
