#pragma once

class C_INIT_InitFloat : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_InputValue; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x340, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x344, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_InputStrength; // offset 0x348, size 0x168, align 8 | MPropertyFriendlyName
    char _pad_04B0[0x8]; // offset 0x4B0
};
