#pragma once

class C_INIT_VelocityFromWind : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_vecSamplePosition; // offset 0x1E0, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flScale; // offset 0x890, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bSampleFans; // offset 0xA00, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A01[0x7]; // offset 0xA01
};
