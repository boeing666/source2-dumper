#pragma once

class C_INIT_CreateWithinCapsuleTransform : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1768, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_fRadiusMin; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fRadiusMax; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fHeight; // offset 0x4D8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0x650, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0x6B8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x830, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_fSpeedRandExp; // offset 0x9A8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_09AC[0x4]; // offset 0x9AC
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0x9B0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0x1088, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1760, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldVelocity; // offset 0x1764, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
