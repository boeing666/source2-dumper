#pragma once

class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_fRadiusMin; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fRadiusMax; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecDistanceBias; // offset 0x4A8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecDistanceBiasAbs; // offset 0xB38, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_0B44[0x4]; // offset 0xB44
    CParticleTransformInput m_TransformInput; // offset 0xB48, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0xBA8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0xD10, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_fSpeedRandExp; // offset 0xE78, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0xE7C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0E7D[0x3]; // offset 0xE7D
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0xE80, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0x1510, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1BA0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldVelocity; // offset 0x1BA4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
