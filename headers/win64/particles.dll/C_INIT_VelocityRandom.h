#pragma once

class C_INIT_VelocityRandom : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x12A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CPerParticleFloatInput m_fSpeedMin; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0x4E0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0xBB8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bIgnoreDT; // offset 0x1290, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1291[0x3]; // offset 0x1291
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x1294, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_129C[0x4]; // offset 0x129C
};
