#pragma once

class C_OP_DecayMaintainCount : public CParticleFunctionOperator /*0x0*/  // sizeof 0x370, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nParticlesToMaintain; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDecayDelay; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSnapshotControlPoint; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CUtlString m_strSnapshotSubset; // offset 0x1E8, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bLifespanDecay; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F1[0x7]; // offset 0x1F1
    CParticleCollectionFloatInput m_flScale; // offset 0x1F8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bKillNewest; // offset 0x368, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0369[0x7]; // offset 0x369
};
