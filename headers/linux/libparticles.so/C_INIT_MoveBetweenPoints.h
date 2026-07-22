#pragma once

class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flSpeedMin; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSpeedMax; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flEndSpread; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flStartOffset; // offset 0x610, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flEndOffset; // offset 0x778, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nEndControlPointNumber; // offset 0x8E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bTrailBias; // offset 0x8E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08E5[0x3]; // offset 0x8E5
};
