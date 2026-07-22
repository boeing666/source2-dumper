#pragma once

class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x300, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vInputMin; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vInputMax; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vOutputMin; // offset 0x1FC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vOutputMax; // offset 0x208, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    char _pad_0214[0x4]; // offset 0x214
    CParticleTransformInput m_TransformInput; // offset 0x218, size 0x68, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_LocalSpaceTransform; // offset 0x280, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    float32 m_flStartTime; // offset 0x2E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x2EC, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x2F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x2F4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAccelerate; // offset 0x2F5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02F6[0x2]; // offset 0x2F6
    float32 m_flRemapBias; // offset 0x2F8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_02FC[0x4]; // offset 0x2FC
};
