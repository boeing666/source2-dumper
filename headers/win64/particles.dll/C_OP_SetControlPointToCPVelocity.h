#pragma once

class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCPInput; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutputVel; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bNormalize; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F1[0x3]; // offset 0x1F1
    int32 m_nCPOutputMag; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPField; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01FC[0x4]; // offset 0x1FC
    CParticleCollectionVecInput m_vecComparisonVelocity; // offset 0x200, size 0x6D8, align 8 | MPropertyFriendlyName
};
