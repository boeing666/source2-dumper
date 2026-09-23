#pragma once

class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x308, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vInputMin; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vInputMax; // offset 0x1F8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vOutputMin; // offset 0x204, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vOutputMax; // offset 0x210, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    char _pad_021C[0x4]; // offset 0x21C
    CParticleTransformInput m_TransformInput; // offset 0x220, size 0x68, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_LocalSpaceTransform; // offset 0x288, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    float32 m_flStartTime; // offset 0x2F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x2F4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x2F8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x2FC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAccelerate; // offset 0x2FD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02FE[0x2]; // offset 0x2FE
    float32 m_flRemapBias; // offset 0x300, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0304[0x4]; // offset 0x304
};
