#pragma once

class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    Color m_ColorFadeMin; // offset 0x1D0, size 0x4, align 1 | MPropertyFriendlyName
    char _pad_01D4[0x18]; // offset 0x1D4
    Color m_ColorFadeMax; // offset 0x1EC, size 0x4, align 1 | MPropertyFriendlyName
    char _pad_01F0[0xC]; // offset 0x1F0
    float32 m_flFadeStartTime; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFadeEndTime; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x204, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bEaseInOut; // offset 0x208, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0209[0x7]; // offset 0x209
};
