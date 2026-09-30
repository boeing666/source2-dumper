#pragma once

class CModifierVandalSurgeVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x840]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // offset 0x840, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartSound; // offset 0x920, size 0x10, align 8 | MPropertyStartGroup
};
