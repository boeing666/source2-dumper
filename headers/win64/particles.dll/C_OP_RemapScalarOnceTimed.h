#pragma once

class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    bool m_bProportional; // offset 0x1D8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D9[0x3]; // offset 0x1D9
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1DC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRemapTime; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
};
