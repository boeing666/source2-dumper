#pragma once

class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nInputMin; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputMax; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleControlPoint; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleControlPointField; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flOutputMin; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bInvert; // offset 0x1F5, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bWrap; // offset 0x1F6, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F7[0x1]; // offset 0x1F7
    float32 m_flRemapBias; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01FC[0x4]; // offset 0x1FC
};
