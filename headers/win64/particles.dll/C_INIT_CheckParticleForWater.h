#pragma once

class C_INIT_CheckParticleForWater : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_flRadius; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x360, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0364[0x4]; // offset 0x364
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x4E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04E4[0x4]; // offset 0x4E4
};
