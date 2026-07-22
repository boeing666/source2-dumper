#pragma once

class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    SetStatisticExpressionType_t m_nExpression; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flDecimalPlaces; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nOutControlPointNumber; // offset 0x340, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x344, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nField; // offset 0x348, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_034C[0x4]; // offset 0x34C
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x350, size 0x168, align 8 | MPropertyFriendlyName
};
