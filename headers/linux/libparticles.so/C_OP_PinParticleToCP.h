#pragma once

class C_OP_PinParticleToCP : public CParticleFunctionOperator /*0x0*/  // sizeof 0x10F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01D4[0x4]; // offset 0x1D4
    CParticleCollectionVecInput m_vecOffset; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName
    bool m_bOffsetLocal; // offset 0x868, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0869[0x3]; // offset 0x869
    ParticleSelection_t m_nParticleSelection; // offset 0x86C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nParticleNumber; // offset 0x870, size 0x168, align 8 | MPropertyFriendlyName
    ParticlePinDistance_t m_nPinBreakType; // offset 0x9D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_09DC[0x4]; // offset 0x9DC
    CParticleCollectionFloatInput m_flBreakDistance; // offset 0x9E0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flBreakSpeed; // offset 0xB48, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flAge; // offset 0xCB0, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nBreakControlPointNumber; // offset 0xE18, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nBreakControlPointNumber2; // offset 0xE1C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flBreakValue; // offset 0xE20, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0xF88, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bRetainInitialVelocity; // offset 0x10F0, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_10F1[0x7]; // offset 0x10F1
};
