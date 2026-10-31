#pragma once

class CCitadel_Ability_Werewolf_OnTheHuntVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1180, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetBuffSound; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RapidFireModifier; // offset 0x1170, size 0x10, align 8 | MPropertyStartGroup
};
