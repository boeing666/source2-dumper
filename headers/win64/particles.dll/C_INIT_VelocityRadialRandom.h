#pragma once

class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x12A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    bool m_bPerParticleCenter; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0x3]; // offset 0x1E9
    int32 m_nControlPointNumber; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecPosition; // offset 0x1F0, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecFwd; // offset 0x8C8, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_fSpeedMin; // offset 0xFA0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x1118, size 0x178, align 8 | MPropertyFriendlyName
    Vector m_vecLocalCoordinateSystemSpeedScale; // offset 0x1290, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_129C[0x1]; // offset 0x129C
    bool m_bIgnoreDelta; // offset 0x129D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_129E[0x2]; // offset 0x129E
};
