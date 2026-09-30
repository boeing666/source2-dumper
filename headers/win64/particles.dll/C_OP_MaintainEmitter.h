#pragma once

class C_OP_MaintainEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleCollectionFloatInput m_nParticlesToMaintain; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flStartTime; // offset 0x360, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0364[0x4]; // offset 0x364
    CParticleCollectionFloatInput m_flEmissionDuration; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flEmissionRate; // offset 0x4E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSnapshotControlPoint; // offset 0x4E4, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_strSnapshotSubset; // offset 0x4E8, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bEmitInstantaneously; // offset 0x4F0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bFinalEmitOnStop; // offset 0x4F1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04F2[0x6]; // offset 0x4F2
    CParticleCollectionFloatInput m_flScale; // offset 0x4F8, size 0x178, align 8 | MPropertyFriendlyName
};
