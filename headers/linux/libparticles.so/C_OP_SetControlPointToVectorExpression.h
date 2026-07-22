#pragma once

class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1070, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    VectorExpressionType_t m_nExpression; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionVecInput m_vInput1; // offset 0x1E0, size 0x690, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vInput2; // offset 0x870, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLerp; // offset 0xF00, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bNormalizedOutput; // offset 0x1068, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1069[0x7]; // offset 0x1069
};
