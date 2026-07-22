#pragma once

class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1140, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    VectorExpressionType_t m_nExpression; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleVecInput m_vInput1; // offset 0x1E8, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vInput2; // offset 0x8A0, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLerp; // offset 0xF58, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nOutputField; // offset 0x10C8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x10CC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bNormalizedOutput; // offset 0x10D0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_10D1[0x6F]; // offset 0x10D1
};
