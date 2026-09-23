#pragma once

class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1CD8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_fRadiusMin; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fRadiusMax; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecDistanceBias; // offset 0x4D8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecDistanceBiasAbs; // offset 0xBB0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_0BBC[0x4]; // offset 0xBBC
    CParticleTransformInput m_TransformInput; // offset 0xBC0, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0xC28, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0xDA0, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_fSpeedRandExp; // offset 0xF18, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0xF1C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F1D[0x3]; // offset 0xF1D
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0xF20, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0x15F8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1CD0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldVelocity; // offset 0x1CD4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
