#pragma once

class C_OP_ScreenSpaceDistanceToEdge : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4F0, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleFloatInput m_flMaxDistFromEdge; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x4C0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04C4[0x2C]; // offset 0x4C4
};
