#pragma once

class CCitadel_Modifier_MutedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA30, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MutedParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MutedPlayerParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MutedStatusParticle; // offset 0x950, size 0xE0, align 8
};
