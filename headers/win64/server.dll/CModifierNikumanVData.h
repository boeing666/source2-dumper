#pragma once

class CModifierNikumanVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SelfParticle; // offset 0x7E8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAmbientLoopingLocalPlayerSound; // offset 0x8C8, size 0x10, align 8 | MPropertyStartGroup
};
