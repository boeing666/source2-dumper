#pragma once

class CCitadel_Ability_Familiar_Ability02VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1170, size 0xE0, align 8
    CSoundEventName m_strPillowHitSound; // offset 0x1250, size 0x10, align 8 | MPropertyStartGroup
};
