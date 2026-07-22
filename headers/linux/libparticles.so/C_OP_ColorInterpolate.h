#pragma once

class C_OP_ColorInterpolate : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    Color m_ColorFade; // offset 0x1D0, size 0x4, align 1 | MPropertyFriendlyName
    char _pad_01D4[0xC]; // offset 0x1D4
    float32 m_flFadeStartTime; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFadeEndTime; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bEaseInOut; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01ED[0x3]; // offset 0x1ED
};
