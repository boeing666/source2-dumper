#pragma once

class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x10C0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    VectorExpressionType_t m_nExpression; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionVecInput m_vInput1; // offset 0x1E8, size 0x6B0, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vInput2; // offset 0x898, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLerp; // offset 0xF48, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bNormalizedOutput; // offset 0x10B8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_10B9[0x7]; // offset 0x10B9
};
