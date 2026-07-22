#pragma once

class C_OP_ScreenSpaceDistanceToEdge : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4D0, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01D4[0x4]; // offset 0x1D4
    CPerParticleFloatInput m_flMaxDistFromEdge; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x4A8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04AC[0x24]; // offset 0x4AC
};
