#pragma once

class CCitadel_Modifier_SettingSunThinker_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB30, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LingerParticle; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LayerParticle; // offset 0xA30, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0xB10, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTargetingCompletedSound; // offset 0xB20, size 0x10, align 8
};
