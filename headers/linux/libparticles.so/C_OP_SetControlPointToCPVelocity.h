#pragma once

class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCPInput; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutputVel; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bNormalize; // offset 0x1DC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01DD[0x3]; // offset 0x1DD
    int32 m_nCPOutputMag; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPField; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CParticleCollectionVecInput m_vecComparisonVelocity; // offset 0x1E8, size 0x690, align 8 | MPropertyFriendlyName
};
