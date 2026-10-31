#pragma once

class CCitadel_Ability_Wrecker_BoulderGrenadeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1338, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // offset 0x1240, size 0xE0, align 8
    CUtlString m_SummonParticleAttachment; // offset 0x1320, size 0x8, align 8
    CSoundEventName m_ExplodeSound; // offset 0x1328, size 0x10, align 8 | MPropertyStartGroup
};
