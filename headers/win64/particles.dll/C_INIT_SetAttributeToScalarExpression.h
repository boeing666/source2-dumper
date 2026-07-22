#pragma once

class C_INIT_SetAttributeToScalarExpression : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x660, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ScalarExpressionType_t m_nExpression; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleFloatInput m_flInput1; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInput2; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x4C8, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x638, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x63C, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0640[0x20]; // offset 0x640
};
