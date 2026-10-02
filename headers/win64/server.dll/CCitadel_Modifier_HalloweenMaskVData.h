#pragma once

class CCitadel_Modifier_HalloweenMaskVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    int32 m_nNumMasks; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HalloweenMask; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
};
