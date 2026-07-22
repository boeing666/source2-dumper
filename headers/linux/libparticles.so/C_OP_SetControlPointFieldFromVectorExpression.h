#pragma once

class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x11D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    VectorFloatExpressionType_t m_nExpression; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecInput1; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecInput2; // offset 0x868, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLerp; // offset 0xEF8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x1060, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x11C8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x11CC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
