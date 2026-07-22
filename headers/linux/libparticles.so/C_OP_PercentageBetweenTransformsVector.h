#pragma once

class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x2C0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vecOutputMax; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    char _pad_01F4[0x4]; // offset 0x1F4
    CParticleTransformInput m_TransformStart; // offset 0x1F8, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x258, size 0x60, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x2B8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x2BC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRadialCheck; // offset 0x2BD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02BE[0x2]; // offset 0x2BE
};
