#pragma once

class C_INIT_VelocityFromCP : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleCollectionVecInput m_velocityInput; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x8C0, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    float32 m_flVelocityScale; // offset 0x928, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDirectionOnly; // offset 0x92C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_092D[0x3]; // offset 0x92D
};
