#pragma once

class C_OP_PinParticleToCP : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1150, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionVecInput m_vecOffset; // offset 0x1E0, size 0x6B0, align 8 | MPropertyFriendlyName
    bool m_bOffsetLocal; // offset 0x890, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0891[0x3]; // offset 0x891
    ParticleSelection_t m_nParticleSelection; // offset 0x894, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nParticleNumber; // offset 0x898, size 0x170, align 8 | MPropertyFriendlyName
    ParticlePinDistance_t m_nPinBreakType; // offset 0xA08, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A0C[0x4]; // offset 0xA0C
    CParticleCollectionFloatInput m_flBreakDistance; // offset 0xA10, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flBreakSpeed; // offset 0xB80, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flAge; // offset 0xCF0, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nBreakControlPointNumber; // offset 0xE60, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nBreakControlPointNumber2; // offset 0xE64, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flBreakValue; // offset 0xE68, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0xFD8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bRetainInitialVelocity; // offset 0x1148, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1149[0x7]; // offset 0x1149
};
