#pragma once

class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x240, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleTransformInput m_transformInput; // offset 0x1D8, size 0x60, align 8 | MPropertyFriendlyName
    ParticleControlPointAxis_t m_nControlPointAxis; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_023C[0x4]; // offset 0x23C
};
