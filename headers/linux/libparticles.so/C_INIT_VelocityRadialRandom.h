#pragma once

class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x11E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    bool m_bPerParticleCenter; // offset 0x1D4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D5[0x3]; // offset 0x1D5
    int32 m_nControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleVecInput m_vecPosition; // offset 0x1E0, size 0x690, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecFwd; // offset 0x870, size 0x690, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_fSpeedMin; // offset 0xF00, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x1068, size 0x168, align 8 | MPropertyFriendlyName
    Vector m_vecLocalCoordinateSystemSpeedScale; // offset 0x11D0, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_11DC[0x1]; // offset 0x11DC
    bool m_bIgnoreDelta; // offset 0x11DD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_11DE[0x2]; // offset 0x11DE
};
