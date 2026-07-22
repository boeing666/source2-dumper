#pragma once

class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    ScalarExpressionType_t m_nExpression; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInput1; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInput2; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x610, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x614, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x618, size 0x168, align 8 | MPropertyFriendlyName
};
