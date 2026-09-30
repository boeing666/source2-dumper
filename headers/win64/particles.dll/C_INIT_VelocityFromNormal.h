#pragma once

class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    float32 m_fSpeedMin; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fSpeedMax; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIgnoreDt; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F1[0x7]; // offset 0x1F1
};
