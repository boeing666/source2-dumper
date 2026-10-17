#pragma once

class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nFirstControlPoint; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSecondControlPoint; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseRadius; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0x7]; // offset 0x1E9
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flParentRadiusScale; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
