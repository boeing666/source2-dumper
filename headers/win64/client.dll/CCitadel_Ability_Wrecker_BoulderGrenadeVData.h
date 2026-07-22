#pragma once

class CCitadel_Ability_Wrecker_BoulderGrenadeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // offset 0x19D8, size 0xE0, align 8
    CUtlString m_SummonParticleAttachment; // offset 0x1AB8, size 0x8, align 8
    CSoundEventName m_ExplodeSound; // offset 0x1AC0, size 0x10, align 8 | MPropertyStartGroup
};
