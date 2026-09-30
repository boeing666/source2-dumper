#pragma once

class C_INIT_InitFloat : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_InputValue; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x360, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x364, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_InputStrength; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    char _pad_04E0[0x8]; // offset 0x4E0
};
