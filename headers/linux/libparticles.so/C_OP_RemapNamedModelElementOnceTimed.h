#pragma once

class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator /*0x0*/  // sizeof 0x230, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x1D0, size 0x8, align 8
    CUtlVector< CUtlString > m_inNames; // offset 0x1D8, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< CUtlString > m_outNames; // offset 0x1F0, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< CUtlString > m_fallbackNames; // offset 0x208, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bModelFromRenderer; // offset 0x220, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportional; // offset 0x221, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0222[0x2]; // offset 0x222
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x224, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x228, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flRemapTime; // offset 0x22C, size 0x4, align 4 | MPropertyFriendlyName
};
