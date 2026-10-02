#pragma once

class CCitadel_Modifier_TechCleaveVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CleavePlayerParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CleaveTrooperParticle; // offset 0x870, size 0xE0, align 8
    CSoundEventName m_sVictimSound; // offset 0x950, size 0x10, align 8 | MPropertyStartGroup
};
