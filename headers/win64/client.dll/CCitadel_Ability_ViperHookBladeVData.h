#pragma once

class CCitadel_Ability_ViperHookBladeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowDebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerStuckParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerImpactParticle; // offset 0x14D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerExplodeParticle; // offset 0x15B8, size 0xE0, align 8
    CSoundEventName m_strDaggerHitSound; // offset 0x1698, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerExplodeSound; // offset 0x16A8, size 0x10, align 8
};
