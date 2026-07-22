#pragma once

class C_INIT_VelocityRandom : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1248, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleFloatInput m_fSpeedMin; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0x4C8, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0xB80, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bIgnoreDT; // offset 0x1238, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1239[0x3]; // offset 0x1239
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x123C, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_1244[0x4]; // offset 0x1244
};
