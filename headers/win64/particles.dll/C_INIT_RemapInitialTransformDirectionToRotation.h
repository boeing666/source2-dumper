#pragma once

class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x260, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E8, size 0x68, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x250, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flOffsetRot; // offset 0x254, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nComponent; // offset 0x258, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MVectorIsSometimesCoordinate
    char _pad_025C[0x4]; // offset 0x25C
};
