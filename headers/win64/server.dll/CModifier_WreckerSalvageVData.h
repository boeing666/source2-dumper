#pragma once

class CModifier_WreckerSalvageVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SalvageBeam; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ConnectBeam; // offset 0x870, size 0xE0, align 8
};
