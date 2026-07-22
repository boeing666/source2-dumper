#pragma once

class C_OP_MaintainEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x650, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_nParticlesToMaintain; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flStartTime; // offset 0x350, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0354[0x4]; // offset 0x354
    CParticleCollectionFloatInput m_flEmissionDuration; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flEmissionRate; // offset 0x4C8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSnapshotControlPoint; // offset 0x4CC, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_strSnapshotSubset; // offset 0x4D0, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bEmitInstantaneously; // offset 0x4D8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bFinalEmitOnStop; // offset 0x4D9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04DA[0x6]; // offset 0x4DA
    CParticleCollectionFloatInput m_flScale; // offset 0x4E0, size 0x170, align 8 | MPropertyFriendlyName
};
