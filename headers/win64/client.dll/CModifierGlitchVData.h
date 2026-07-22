#pragma once

class CModifierGlitchVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x750, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x830, size 0xE0, align 8
    CSoundEventName m_PurgeSound; // offset 0x910, size 0x10, align 8
};
