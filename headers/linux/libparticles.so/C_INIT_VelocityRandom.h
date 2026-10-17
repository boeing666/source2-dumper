#pragma once

class C_INIT_VelocityRandom : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1230, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // offset 0x4C0, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // offset 0xB70, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bIgnoreDT; // offset 0x1220, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1221[0x3]; // offset 0x1221
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x1224, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_122C[0x4]; // offset 0x122C
};
