#pragma once

class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x258, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1D8, size 0x60, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x238, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flScale; // offset 0x23C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOffsetRot; // offset 0x240, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffsetAxis; // offset 0x244, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bNormalize; // offset 0x250, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0251[0x7]; // offset 0x251
};
