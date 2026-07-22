#pragma once

class C_INIT_CheckParticleForWater : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flRadius; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x340, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0344[0x4]; // offset 0x344
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x348, size 0x168, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x4B0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04B4[0x4]; // offset 0x4B4
};
