#pragma once

class CCitadel_Ability_Fathom_Breach_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // offset 0x14C8, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_InFlightModifier; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
};
