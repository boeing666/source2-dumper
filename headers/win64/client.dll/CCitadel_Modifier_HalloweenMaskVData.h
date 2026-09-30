#pragma once

class CCitadel_Modifier_HalloweenMaskVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    int32 m_nNumMasks; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HalloweenMask; // offset 0x768, size 0xE0, align 8 | MPropertyStartGroup
};
