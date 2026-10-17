#pragma once

class C_INIT_VelocityFromWind : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleVecInput m_vecSamplePosition; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flScale; // offset 0x8C0, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bSampleFans; // offset 0xA38, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A39[0x7]; // offset 0xA39
};
