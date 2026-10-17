#pragma once

class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1C30, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_fRadiusMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fRadiusMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecDistanceBias; // offset 0x4C0, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecDistanceBiasAbs; // offset 0xB70, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_0B7C[0x4]; // offset 0xB7C
    CParticleTransformInput m_TransformInput; // offset 0xB80, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0xBE0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0xD50, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_fSpeedRandExp; // offset 0xEC0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0xEC4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EC5[0x3]; // offset 0xEC5
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0xEC8, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0x1578, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1C28, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldVelocity; // offset 0x1C2C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
