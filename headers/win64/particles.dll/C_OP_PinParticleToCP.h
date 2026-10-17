#pragma once

class C_OP_PinParticleToCP : public CParticleFunctionOperator /*0x0*/  // sizeof 0x11B0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionVecInput m_vecOffset; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName
    bool m_bOffsetLocal; // offset 0x8C0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08C1[0x3]; // offset 0x8C1
    ParticleSelection_t m_nParticleSelection; // offset 0x8C4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nParticleNumber; // offset 0x8C8, size 0x178, align 8 | MPropertyFriendlyName
    ParticlePinDistance_t m_nPinBreakType; // offset 0xA40, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A44[0x4]; // offset 0xA44
    CParticleCollectionFloatInput m_flBreakDistance; // offset 0xA48, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flBreakSpeed; // offset 0xBC0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flAge; // offset 0xD38, size 0x178, align 8 | MPropertyFriendlyName
    int32 m_nBreakControlPointNumber; // offset 0xEB0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nBreakControlPointNumber2; // offset 0xEB4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flBreakValue; // offset 0xEB8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x1030, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bRetainInitialVelocity; // offset 0x11A8, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_11A9[0x7]; // offset 0x11A9
};
