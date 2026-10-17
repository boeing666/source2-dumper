#pragma once

class C_INIT_CreateWithinCapsuleTransform : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_fRadiusMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fRadiusMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fHeight; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0x630, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0x690, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x800, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_fSpeedRandExp; // offset 0x970, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0974[0x4]; // offset 0x974
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0x978, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0x1028, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x16D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldVelocity; // offset 0x16DC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
