#pragma once

class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1238, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    bool m_bPerParticleCenter; // offset 0x1DC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01DD[0x3]; // offset 0x1DD
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleVecInput m_vecPosition; // offset 0x1E8, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecFwd; // offset 0x898, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_fSpeedMin; // offset 0xF48, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fSpeedMax; // offset 0x10B8, size 0x170, align 8 | MPropertyFriendlyName
    Vector m_vecLocalCoordinateSystemSpeedScale; // offset 0x1228, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_1234[0x1]; // offset 0x1234
    bool m_bIgnoreDelta; // offset 0x1235, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1236[0x2]; // offset 0x1236
};
