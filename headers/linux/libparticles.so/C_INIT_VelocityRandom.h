#pragma once

class C_INIT_VelocityRandom : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x11D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0x4A8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0xB38, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bIgnoreDT; // offset 0x11C8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_11C9[0x3]; // offset 0x11C9
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x11CC, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_11D4[0x4]; // offset 0x11D4
};
