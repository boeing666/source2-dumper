#pragma once

class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flSpeedMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSpeedMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flEndSpread; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flStartOffset; // offset 0x630, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flEndOffset; // offset 0x7A0, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nEndControlPointNumber; // offset 0x910, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bTrailBias; // offset 0x914, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0915[0x3]; // offset 0x915
};
