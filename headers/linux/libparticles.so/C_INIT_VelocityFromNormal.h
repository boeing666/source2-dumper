#pragma once

class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    float32 m_fSpeedMin; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fSpeedMax; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIgnoreDt; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E5[0x3]; // offset 0x1E5
};
