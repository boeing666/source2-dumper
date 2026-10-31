#pragma once

class CCitadel_Modifier_HalloweenMaskVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    int32 m_nNumMasks; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HalloweenMask; // offset 0x7A0, size 0xE0, align 8 | MPropertyStartGroup
    CUtlOrderedMap< CUtlString, Vector > m_HeroOffsets; // offset 0x880, size 0x28, align 8 | MPropertyStartGroup
};
