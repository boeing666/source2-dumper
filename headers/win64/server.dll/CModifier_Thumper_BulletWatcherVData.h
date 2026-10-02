#pragma once

class CModifier_Thumper_BulletWatcherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
};
