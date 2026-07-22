#pragma once

class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1248, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    bool m_bPerParticleCenter; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E1[0x3]; // offset 0x1E1
    int32 m_nControlPointNumber; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecPosition; // offset 0x1E8, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecFwd; // offset 0x8A0, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_fSpeedMin; // offset 0xF58, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x10C8, size 0x170, align 8 | MPropertyFriendlyName
    Vector m_vecLocalCoordinateSystemSpeedScale; // offset 0x1238, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_1244[0x1]; // offset 0x1244
    bool m_bIgnoreDelta; // offset 0x1245, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1246[0x2]; // offset 0x1246
};
