#pragma once

class CCitadel_Modifier_SettingSunThinker_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LingerParticle; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LayerParticle; // offset 0xA38, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0xB18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTargetingCompletedSound; // offset 0xB28, size 0x10, align 8
};
