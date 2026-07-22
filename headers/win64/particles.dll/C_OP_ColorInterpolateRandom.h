#pragma once

class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator /*0x0*/  // sizeof 0x218, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    Color m_ColorFadeMin; // offset 0x1D8, size 0x4, align 1 | MPropertyFriendlyName
    char _pad_01DC[0x18]; // offset 0x1DC
    Color m_ColorFadeMax; // offset 0x1F4, size 0x4, align 1 | MPropertyFriendlyName
    char _pad_01F8[0xC]; // offset 0x1F8
    float32 m_flFadeStartTime; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFadeEndTime; // offset 0x208, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x20C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bEaseInOut; // offset 0x210, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0211[0x7]; // offset 0x211
};
