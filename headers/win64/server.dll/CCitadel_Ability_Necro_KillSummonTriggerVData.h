#pragma once

class CCitadel_Ability_Necro_KillSummonTriggerVData : public CBaseTriggerAbilityVData /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1408]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x14E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x14F8, size 0x10, align 8 | MPropertyStartGroup
};
