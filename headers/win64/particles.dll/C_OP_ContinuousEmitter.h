#pragma once

class C_OP_ContinuousEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_flEmissionDuration; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flStartTime; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flEmitRate; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flEmissionScale; // offset 0x630, size 0x4, align 4 | MPropertyFriendlyName MParticleMaxVersion
    float32 m_flScalePerParentParticle; // offset 0x634, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInitFromKilledParentParticles; // offset 0x638, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0639[0x3]; // offset 0x639
    EventTypeSelection_t m_nEventType; // offset 0x63C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nSnapshotControlPoint; // offset 0x640, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0644[0x4]; // offset 0x644
    CUtlString m_strSnapshotSubset; // offset 0x648, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nLimitPerUpdate; // offset 0x650, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bForceEmitOnFirstUpdate; // offset 0x654, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceEmitOnLastUpdate; // offset 0x655, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0656[0xA]; // offset 0x656
};
