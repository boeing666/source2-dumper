#pragma once

class CCitadel_Modifier_SettingSunThinker_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LingerParticle; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LayerParticle; // offset 0xA00, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0xAE0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTargetingCompletedSound; // offset 0xAF0, size 0x10, align 8
};
