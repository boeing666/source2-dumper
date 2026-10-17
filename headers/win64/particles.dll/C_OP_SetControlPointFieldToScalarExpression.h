#pragma once

class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    ScalarExpressionType_t m_nExpression; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleCollectionFloatInput m_flInput1; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInput2; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x4E0, size 0x178, align 8 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x658, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x65C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x660, size 0x178, align 8 | MPropertyFriendlyName
};
