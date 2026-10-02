#pragma once

class CCitadel_Neutral_Attack_ExplodeOnDeathVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x11F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10E8]; // offset 0x0
    float32 m_flExplodeDamage; // offset 0x10E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flExplodeRadius; // offset 0x10EC, size 0x4, align 4
    CSoundEventName m_ExplodeSound; // offset 0x10F0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1100, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeDebuffModifier; // offset 0x11E0, size 0x10, align 8 | MPropertyStartGroup
};
