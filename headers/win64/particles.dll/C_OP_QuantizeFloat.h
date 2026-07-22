#pragma once

class C_OP_QuantizeFloat : public CParticleFunctionOperator /*0x0*/  // sizeof 0x370, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_InputValue; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x348, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_034C[0x24]; // offset 0x34C
};
