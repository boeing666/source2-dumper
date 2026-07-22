#pragma once

class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator /*0x0*/  // sizeof 0x660, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ScalarExpressionType_t m_nExpression; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleFloatInput m_flInput1; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInput2; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x630, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x634, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0638[0x28]; // offset 0x638
};
