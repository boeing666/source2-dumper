#pragma once

class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1118, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    VectorFloatExpressionType_t m_nExpression; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleVecInput m_vInput1; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vInput2; // offset 0x8C0, size 0x6D8, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0xF98, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x1110, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1114, size 0x4, align 4 | MPropertyFriendlyName
};
