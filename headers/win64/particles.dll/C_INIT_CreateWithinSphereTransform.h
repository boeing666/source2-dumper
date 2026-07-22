#pragma once

class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1C50, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_fRadiusMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fRadiusMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecDistanceBias; // offset 0x4C0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecDistanceBiasAbs; // offset 0xB78, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_0B84[0x4]; // offset 0xB84
    CParticleTransformInput m_TransformInput; // offset 0xB88, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0xBF0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0xD60, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_fSpeedRandExp; // offset 0xED0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0xED4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0ED5[0x3]; // offset 0xED5
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0xED8, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0x1590, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1C48, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldVelocity; // offset 0x1C4C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
