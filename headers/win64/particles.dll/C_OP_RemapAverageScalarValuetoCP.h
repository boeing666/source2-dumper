#pragma once

class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    SetStatisticExpressionType_t m_nExpression; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleCollectionFloatInput m_flDecimalPlaces; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nOutControlPointNumber; // offset 0x368, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x36C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nField; // offset 0x370, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0374[0x4]; // offset 0x374
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x378, size 0x178, align 8 | MPropertyFriendlyName
};
