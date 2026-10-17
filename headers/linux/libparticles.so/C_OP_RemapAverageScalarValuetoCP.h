#pragma once

class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    SetStatisticExpressionType_t m_nExpression; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flDecimalPlaces; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nOutControlPointNumber; // offset 0x350, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x354, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nField; // offset 0x358, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_035C[0x4]; // offset 0x35C
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x360, size 0x170, align 8 | MPropertyFriendlyName
};
