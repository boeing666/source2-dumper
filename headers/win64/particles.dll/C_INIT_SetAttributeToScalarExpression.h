#pragma once

class C_INIT_SetAttributeToScalarExpression : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x680, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    ScalarExpressionType_t m_nExpression; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CPerParticleFloatInput m_flInput1; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInput2; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x4E0, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x658, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x65C, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0660[0x20]; // offset 0x660
};
