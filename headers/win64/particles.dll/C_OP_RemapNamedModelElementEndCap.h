#pragma once

class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator /*0x0*/  // sizeof 0x238, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x1D8, size 0x8, align 8
    CUtlVector< CUtlString > m_inNames; // offset 0x1E0, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< CUtlString > m_outNames; // offset 0x1F8, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< CUtlString > m_fallbackNames; // offset 0x210, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bModelFromRenderer; // offset 0x228, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0229[0x3]; // offset 0x229
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x22C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x230, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0234[0x4]; // offset 0x234
};
