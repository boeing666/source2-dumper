#pragma once

class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator /*0x0*/  // sizeof 0x2D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleTransformInput m_TransformStart; // offset 0x1E8, size 0x68, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x250, size 0x68, align 8 | MPropertyFriendlyName
    int32 m_nOutputStartCP; // offset 0x2B8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputStartField; // offset 0x2BC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputEndCP; // offset 0x2C0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputEndField; // offset 0x2C4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x2C8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x2CC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRadialCheck; // offset 0x2CD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02CE[0x2]; // offset 0x2CE
};
