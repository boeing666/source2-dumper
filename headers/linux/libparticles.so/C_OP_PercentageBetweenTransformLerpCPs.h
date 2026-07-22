#pragma once

class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator /*0x0*/  // sizeof 0x2B8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleTransformInput m_TransformStart; // offset 0x1E0, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x240, size 0x60, align 8 | MPropertyFriendlyName
    int32 m_nOutputStartCP; // offset 0x2A0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputStartField; // offset 0x2A4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputEndCP; // offset 0x2A8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputEndField; // offset 0x2AC, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x2B0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x2B4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRadialCheck; // offset 0x2B5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02B6[0x2]; // offset 0x2B6
};
