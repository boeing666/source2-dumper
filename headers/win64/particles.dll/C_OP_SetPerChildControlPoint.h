#pragma once

class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nFirstControlPoint; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nNumControlPoints; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleCollectionFloatInput m_nParticleIncrement; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nFirstSourcePoint; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bSetOrientation; // offset 0x4E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04E1[0x3]; // offset 0x4E1
    ParticleAttributeIndex_t m_nOrientationField; // offset 0x4E4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bNumBasedOnParticleCount; // offset 0x4E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04E9[0x7]; // offset 0x4E9
};
