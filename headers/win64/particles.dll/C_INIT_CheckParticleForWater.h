#pragma once

class C_INIT_CheckParticleForWater : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flRadius; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x350, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0354[0x4]; // offset 0x354
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x4C8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04CC[0x4]; // offset 0x4CC
};
