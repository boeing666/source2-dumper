#pragma once

class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1120, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    VectorExpressionType_t m_nExpression; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vInput1; // offset 0x1F0, size 0x6D8, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vInput2; // offset 0x8C8, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLerp; // offset 0xFA0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bNormalizedOutput; // offset 0x1118, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1119[0x7]; // offset 0x1119
};
