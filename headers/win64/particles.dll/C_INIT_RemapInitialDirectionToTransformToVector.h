#pragma once

class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x268, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E0, size 0x68, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x248, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flScale; // offset 0x24C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOffsetRot; // offset 0x250, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffsetAxis; // offset 0x254, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bNormalize; // offset 0x260, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0261[0x7]; // offset 0x261
};
