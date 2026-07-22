#pragma once

class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ScalarExpressionType_t m_nExpression; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionFloatInput m_flInput1; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInput2; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x4C8, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x638, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x63C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x640, size 0x170, align 8 | MPropertyFriendlyName
};
