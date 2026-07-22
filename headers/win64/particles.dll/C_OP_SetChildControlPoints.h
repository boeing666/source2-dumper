#pragma once

class C_OP_SetChildControlPoints : public CParticleFunctionOperator /*0x0*/  // sizeof 0x360, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nFirstControlPoint; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nNumControlPoints; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionFloatInput m_nFirstSourcePoint; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bReverse; // offset 0x358, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetOrientation; // offset 0x359, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_035A[0x2]; // offset 0x35A
    ParticleOrientationType_t m_nOrientation; // offset 0x35C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
};
