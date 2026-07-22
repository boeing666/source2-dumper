#pragma once

class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    Vector m_vStartValue; // offset 0x1D0, size 0xC, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldInput1; // offset 0x1DC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputScale1; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldInput2; // offset 0x1E4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputScale2; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    ControlPointReference_t m_nControlPointInput1; // offset 0x1EC, size 0x14, align 4 | MPropertyFriendlyName
    float32 m_flControlPointScale1; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    ControlPointReference_t m_nControlPointInput2; // offset 0x204, size 0x14, align 4 | MPropertyFriendlyName
    float32 m_flControlPointScale2; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x21C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vFinalOutputScale; // offset 0x220, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_022C[0x4]; // offset 0x22C
};
