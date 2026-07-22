#pragma once

class C_INIT_VelocityFromCP : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionVecInput m_velocityInput; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x868, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    float32 m_flVelocityScale; // offset 0x8C8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDirectionOnly; // offset 0x8CC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08CD[0x3]; // offset 0x8CD
};
