#pragma once

class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1240, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    VectorFloatExpressionType_t m_nExpression; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionVecInput m_vecInput1; // offset 0x1E8, size 0x6B8, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecInput2; // offset 0x8A0, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLerp; // offset 0xF58, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x10C8, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1238, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x123C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
