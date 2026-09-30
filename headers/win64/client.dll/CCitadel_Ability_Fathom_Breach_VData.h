#pragma once

class CCitadel_Ability_Fathom_Breach_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // offset 0x1480, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_InFlightModifier; // offset 0x1570, size 0x10, align 8 | MPropertyStartGroup
};
