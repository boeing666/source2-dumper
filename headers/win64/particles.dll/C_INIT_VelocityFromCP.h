#pragma once

class C_INIT_VelocityFromCP : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionVecInput m_velocityInput; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x898, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    float32 m_flVelocityScale; // offset 0x900, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDirectionOnly; // offset 0x904, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0905[0x3]; // offset 0x905
};
