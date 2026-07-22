#pragma once

class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x220, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x1D8, size 0x8, align 8
    CUtlVector< CUtlString > m_names; // offset 0x1E0, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< float32 > m_values; // offset 0x1F8, size 0x18, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x210, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x214, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bModelFromRenderer; // offset 0x21C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_021D[0x3]; // offset 0x21D
};
