#pragma once

class C_INIT_CreateWithinCapsuleTransform : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1670, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_fRadiusMin; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fRadiusMax; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fHeight; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0x610, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0x670, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x7D8, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_fSpeedRandExp; // offset 0x940, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0944[0x4]; // offset 0x944
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0x948, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0xFD8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1668, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldVelocity; // offset 0x166C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
