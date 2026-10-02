#pragma once

class CCitadel_Ability_TestHero_SummonCannonVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CannonParticle; // offset 0x14C8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x15C8, size 0x10, align 8
};
