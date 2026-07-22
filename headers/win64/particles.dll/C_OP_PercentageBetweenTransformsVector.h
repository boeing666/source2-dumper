#pragma once

class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x2D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vecOutputMax; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    char _pad_01FC[0x4]; // offset 0x1FC
    CParticleTransformInput m_TransformStart; // offset 0x200, size 0x68, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x268, size 0x68, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x2D0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x2D4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRadialCheck; // offset 0x2D5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02D6[0x2]; // offset 0x2D6
};
