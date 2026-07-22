#pragma once

class CModifierNikumanVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SelfParticle; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAmbientLoopingLocalPlayerSound; // offset 0x888, size 0x10, align 8 | MPropertyStartGroup
};
