#pragma once

class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetPreviousParticle; // offset 0x1ED, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EE[0x2]; // offset 0x1EE
};
