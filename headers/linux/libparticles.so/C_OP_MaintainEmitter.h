#pragma once

class C_OP_MaintainEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x630, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_nParticlesToMaintain; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flStartTime; // offset 0x340, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0344[0x4]; // offset 0x344
    CParticleCollectionFloatInput m_flEmissionDuration; // offset 0x348, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flEmissionRate; // offset 0x4B0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSnapshotControlPoint; // offset 0x4B4, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_strSnapshotSubset; // offset 0x4B8, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bEmitInstantaneously; // offset 0x4C0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bFinalEmitOnStop; // offset 0x4C1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04C2[0x6]; // offset 0x4C2
    CParticleCollectionFloatInput m_flScale; // offset 0x4C8, size 0x168, align 8 | MPropertyFriendlyName
};
