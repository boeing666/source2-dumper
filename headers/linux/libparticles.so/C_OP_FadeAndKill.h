#pragma once

class C_OP_FadeAndKill : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_flStartFadeInTime; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndFadeInTime; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartFadeOutTime; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndFadeOutTime; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartAlpha; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndAlpha; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bForcePreserveParticleOrder; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0x7]; // offset 0x1E9
};
